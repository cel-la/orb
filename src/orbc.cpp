#include <stdio.h>
#include "generated-sources/Orb.h"
#include "generated-sources/OrbTokenManager.h"
#include "orbc.h"

class OrbTokenManagerErrorHandler : public TokenManagerErrorHandler
{
public:
    OrbTokenManagerErrorHandler(const char *file)
    : TokenManagerErrorHandler()
    {
        m_file = file;
        error_count = 0;
    }
    
    virtual void lexicalError(bool EOFSeen, int lexState, int errorLine, int errorColumn, const JJString& errorAfter, JJChar curChar, OrbTokenManager* token_manager) override
    {
        error_count++;
        fprintf(stderr, "Lexical error at: %s(%d:%d): Encountered: '%c' after: '%s'\n",
                m_file, errorLine, errorColumn, curChar, (EOFSeen ? "EOF" : errorAfter.c_str()));
        //exit(0);
    }
    
    virtual void lexicalError(const JJString& errorMessage, OrbTokenManager* token_manager) override
    {
        error_count++;
        fprintf(stderr, "Lexical error at: %s: %s\n", m_file, errorMessage.c_str());
        //exit(0);
    }
    
    bool hasErrror()
    {
        return error_count > 0;
    }
    
private:
    const char *m_file;
};

class OrbErrorHandler : public ErrorHandler
{
public:
    OrbErrorHandler(const char *file)
    : ErrorHandler()
    {
        m_file = file;
    }
    
    // Called when the parser encounters a different token when expecting to
    // consume a specific kind of token.
    // expectedKind - token kind that the parser was trying to consume.
    // expectedToken - the image of the token - tokenImages[expectedKind].
    // actual - the actual token that the parser got instead.
    virtual void handleUnexpectedToken(int expectedKind, const JJString& expectedToken, Token *actual, Orb *parser) override
    {
        error_count++;
        fprintf(stderr, "Lexical error at: %s: Expecting %s at: %d:%d but got %s\n",
                m_file, addUnicodeEscapes(expectedToken).c_str(), actual->beginLine, actual->beginColumn, addUnicodeEscapes(actual->image).c_str());
        //exit(0);
    }
    // Called when the parser cannot continue parsing.
    // last - the last token successfully parsed.
    // unexpected - the token at which the error occurs.
    // production - the production in which this error occurrs.
    virtual void handleParseError(Token *last, Token *unexpected, const JJSimpleString& production, Orb *parser) override
    {
        error_count++;
        fprintf(stderr, "Lexical error at: %s: Encountered: %s at: %d:%d while parsing: %s\n",
                m_file, addUnicodeEscapes(unexpected->image).c_str(), unexpected->beginLine, unexpected->beginColumn, production.c_str());
    }
    
    virtual void handleOtherError(const JJString& message, Orb *parser) override
    {
        error_count++;
        fprintf(stderr, "Lexical error at: %s: %s\n", m_file, message.c_str());
    }
    
    bool hasErrror()
    {
        return error_count > 0;
    }
    
private:
    const char *m_file;
};

static bool compile_file(compile_context &ctx, const char *file)
{
	char code[64 * 1024];
	int codelen;
	
	//load source file code
	FILE *fp = fopen(file, "rb");
	if(!fp)
	{
		printf("open file failed: %s\n", file);
		return false;
	}
	codelen = (int)fread(code, 1, sizeof(code) - 1, fp);
	code[codelen] = 0;
	fclose(fp);
	
	//analysis grammar
	CharStream cs(code, (int)codelen, 1, 1);
	OrbTokenManager tm(&cs);
	OrbTokenManagerErrorHandler *eh1 = new OrbTokenManagerErrorHandler("");
	tm.setErrorHandler(eh1);
	Orb *orb = new Orb(&tm);
	OrbErrorHandler *eh2 = new OrbErrorHandler("");
	orb->setErrorHandler(eh2);
	SimpleNode *ast = orb->CompilationUnit();
	if (eh1->hasErrror() || eh2->hasErrror())
	{
		return false;
	}
	
	return true;
}

static bool compile(compile_context &ctx)
{
	vector<string>::const_iterator it;
	for(it = ctx._files.begin(); it != ctx._files.end(); it++)
	{
		if(!compile_file(ctx, it->c_str()))
			return false;
	}
	
	return true;
}

int main(int argc, char *argv[])
{
	compile_context ctx;
	
	for(int i=1; i<argc; i++)
	{
		ctx._files.push_back(argv[i]);
	}
	
	compile(ctx);
	
    
//    if (true)
//    {
//        FILE *fp = fopen("/Users/mervin/temp/orb.ast.xml", "w");
//        if (fp)
//        {
//            dump_ast(fp, 0, m_ast);
//            fclose(fp);
//        }
//    }
    
	printf("Press any key to exit...");
	getchar();

	return 0;
}
