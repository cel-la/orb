#include <stdio.h>

int main(int argc, char *argv[])
{
    char code[64 * 1024];
    size_t codelen;
    
    //加载源代码
    FILE *fp = fopen("/Users/mervin/Documents/others/orb/orbc/sample/sample1.orb", "rb");
    codelen = fread(code, 1, sizeof(code), fp);
    code[codelen] = 0;
    fclose(fp);
    
    //解析语法树
    CharStream cs(code, (int)codelen, 1, 1);
    OrbTokenManager tm(&cs);
    OrbTokenManagerErrorHandler *eh1 = new OrbTokenManagerErrorHandler("");
    tm.setErrorHandler(eh1);
    Orb *m_x = new Orb(&tm);
    OrbErrorHandler *eh2 = new OrbErrorHandler("");
    m_x->setErrorHandler(eh2);
    SimpleNode *m_ast = m_x->CompilationUnit();
    if (eh1->hasErrror() || eh2->hasErrror())
    {
        exit(-1);
    }
    
    //将语法树dump成XML文件
    if (true)
    {
        FILE *fp = fopen("/Users/mervin/temp/orb.ast.xml", "w");
        if (fp)
        {
            dump_ast(fp, 0, m_ast);
            fclose(fp);
        }
    }
    
    print_syntax();
    
    
	return 0;
}
