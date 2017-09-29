/* Orb.cc */
#include "Orb.h"
#include "TokenMgrError.h"
#include "SimpleNode.h"
  unsigned int jj_la1_0[] = {
0x0,0x0,0x10000000,0x0,0x1000,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10000000,0x10000000,0x20800000,0x800000,0x10000000,0x25808000,0x24000,0x0,0x0,0x25808000,0x100000,0x200000,0x0,0x0,0x40000,0x0,0x24000,0x0,0x0,0x20800000,0x0,0x0,0x0,0x0,0x20800000,0x0,0x0,0x20800000,0x20800000,0x0,0x20800000,0x0,0x0,0x40000000,0x40000000,0x2000,0x2000,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,};
  unsigned int jj_la1_1[] = {
0x200,0x1,0x2,0x2000000,0x0,0x100c,0x100c,0x8000000,0x80100000,0x10,0x40000000,0x8000000,0x80100000,0x40000000,0x80100000,0x40000000,0x2,0x2,0xd2080,0x80,0x0,0x1d28c0,0x10,0x40000000,0x8000000,0x1d28c0,0x0,0x0,0x40000000,0x400,0x0,0x40000000,0x10,0x100000,0x100000,0x1d20c0,0x0,0x0,0x40000000,0x12000000,0x1d20c0,0x40000000,0x0,0x1d20c0,0x1d20c0,0x40000000,0x1d20c0,0x8000000,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x100,0x0,0x0,0x0,0x0,0x0,0x0,0x4000000,0x4000000,0x0,0x0,0x0,};
  unsigned int jj_la1_2[] = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2,0x2,0x0,0x1,0xc0000039,0x0,0x18,0xc0000039,0xc0000039,0x0,0xc0000039,0x7f80,0x8000,0x10000,0x10000,0x20000,0x20000,0x40000,0x80000,0x100000,0x600000,0x600000,0x0,0x7800000,0x7800000,0x38000000,0x38000000,0xc0000000,0xc0000000,0x0,0x0,0xc0000000,0xc0000018,0x0,};
  unsigned int jj_la1_3[] = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1c,0x0,0x0,0x1c,0x1c,0x0,0x1c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x3,0x0,0x1c,0x1c,};

  /** Constructor with user supplied TokenManager. */




SimpleNode          * Orb::CompilationUnit() {/*@bgen(jjtree) CompilationUnit */
  SimpleNode *jjtn000 = new SimpleNode(JJTCOMPILATIONUNIT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      PackageDecl();
      while (!hasError) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case T_USING:{
          ;
          break;
          }
        default:
          jj_la1[0] = jj_gen;
          goto end_label_1;
        }
        UsingDecl();
      }
      end_label_1: ;
      while (!hasError) {
        if (jj_2_1(2147483647)) {
          ;
        } else {
          goto end_label_2;
        }
        ConstDecl();
      }
      end_label_2: ;
      while (!hasError) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case T_PROPERTY:{
          ;
          break;
          }
        default:
          jj_la1[1] = jj_gen;
          goto end_label_3;
        }
        PackagePropertyDecl();
      }
      end_label_3: ;
      while (!hasError) {
        if (jj_2_2(2147483647)) {
          ;
        } else {
          goto end_label_4;
        }
        PackageVariableDecl();
      }
      end_label_4: ;
      while (!hasError) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case T_LOCAL:
        case T_PUBLIC:{
          ;
          break;
          }
        default:
          jj_la1[2] = jj_gen;
          goto end_label_5;
        }
        PackageFunctionDecl();
      }
      end_label_5: ;
jjtn000->jjtSetLastToken(getToken(0));
          jjtree.closeNodeScope(jjtn000, true);
          jjtc000 = false;
return jjtn000;
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
assert(false);
}


void Orb::PackageDecl() {/*@bgen(jjtree) PackageDecl */
  SimpleNode *jjtn000 = new SimpleNode(JJTPACKAGEDECL);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      jj_consume_token(T_PACKAGE);
      ComplexName();
      jj_consume_token(56);
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::UsingDecl() {/*@bgen(jjtree) UsingDecl */
  SimpleNode *jjtn000 = new SimpleNode(JJTUSINGDECL);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      jj_consume_token(T_USING);
      ComplexName();
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 57:{
        jj_consume_token(57);
        jj_consume_token(58);
        break;
        }
      default:
        jj_la1[3] = jj_gen;
        ;
      }
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case T_ALIAS:{
        jj_consume_token(T_ALIAS);
        Name();
        break;
        }
      default:
        jj_la1[4] = jj_gen;
        ;
      }
      jj_consume_token(56);
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::ConstDecl() {/*@bgen(jjtree) ConstDecl */
  SimpleNode *jjtn000 = new SimpleNode(JJTCONSTDECL);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      Modifiers();
      jj_consume_token(T_CONST);
      Name();
      jj_consume_token(59);
      Exp();
      jj_consume_token(56);
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::PackagePropertyDecl() {/*@bgen(jjtree) PackagePropertyDecl */
  SimpleNode *jjtn000 = new SimpleNode(JJTPACKAGEPROPERTYDECL);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      jj_consume_token(T_PROPERTY);
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case T_READONLY:
      case T_READWRITE:
      case T_WRITEONLY:{
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case T_READONLY:{
          jj_consume_token(T_READONLY);
          break;
          }
        case T_READWRITE:{
          jj_consume_token(T_READWRITE);
          break;
          }
        case T_WRITEONLY:{
          jj_consume_token(T_WRITEONLY);
          break;
          }
        default:
          jj_la1[5] = jj_gen;
          jj_consume_token(-1);
          errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
        }
        break;
        }
      default:
        jj_la1[6] = jj_gen;
        ;
      }
      Name();
      jj_consume_token(59);
      Exp();
      jj_consume_token(56);
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::PackageVariableDecl() {/*@bgen(jjtree) PackageVariableDecl */
  SimpleNode *jjtn000 = new SimpleNode(JJTPACKAGEVARIABLEDECL);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      jj_consume_token(T_LOCAL);
      Name();
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 59:{
        jj_consume_token(59);
        Exp();
        break;
        }
      default:
        jj_la1[7] = jj_gen;
        ;
      }
      jj_consume_token(56);
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::PackageFunctionDecl() {/*@bgen(jjtree) PackageFunctionDecl */
  SimpleNode *jjtn000 = new SimpleNode(JJTPACKAGEFUNCTIONDECL);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      Modifiers();
      jj_consume_token(T_FUNCTION);
      Name();
      jj_consume_token(60);
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case IDENTIFIER:
      case 63:{
        FormalParams();
        break;
        }
      default:
        jj_la1[8] = jj_gen;
        ;
      }
      jj_consume_token(61);
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case T_RETURN:{
        jj_consume_token(T_RETURN);
        jj_consume_token(60);
        ResultParams();
        jj_consume_token(61);
        break;
        }
      default:
        jj_la1[9] = jj_gen;
        ;
      }
      jj_consume_token(T_IS);
      ScopeBlock();
      jj_consume_token(T_END);
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::FormalParams() {/*@bgen(jjtree) FormalParams */
  SimpleNode *jjtn000 = new SimpleNode(JJTFORMALPARAMS);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      FormalParam();
      while (!hasError) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case 62:{
          ;
          break;
          }
        default:
          jj_la1[10] = jj_gen;
          goto end_label_6;
        }
        jj_consume_token(62);
        FormalParam();
      }
      end_label_6: ;
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::FormalParam() {/*@bgen(jjtree) FormalParam */
  SimpleNode *jjtn000 = new SimpleNode(JJTFORMALPARAM);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case IDENTIFIER:{
        Name();
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case 59:{
          jj_consume_token(59);
          Exp();
          break;
          }
        default:
          jj_la1[11] = jj_gen;
          ;
        }
        break;
        }
      case 63:{
        jj_consume_token(63);
        Name();
        break;
        }
      default:
        jj_la1[12] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::ResultParams() {/*@bgen(jjtree) ResultParams */
  SimpleNode *jjtn000 = new SimpleNode(JJTRESULTPARAMS);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      ResultParam();
      while (!hasError) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case 62:{
          ;
          break;
          }
        default:
          jj_la1[13] = jj_gen;
          goto end_label_7;
        }
        jj_consume_token(62);
        ResultParam();
      }
      end_label_7: ;
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::ResultParam() {/*@bgen(jjtree) ResultParam */
  SimpleNode *jjtn000 = new SimpleNode(JJTRESULTPARAM);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case IDENTIFIER:{
        Name();
        break;
        }
      case 63:{
        jj_consume_token(63);
        Name();
        break;
        }
      default:
        jj_la1[14] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::Name() {/*@bgen(jjtree) Name */
  SimpleNode *jjtn000 = new SimpleNode(JJTNAME);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      jj_consume_token(IDENTIFIER);
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::ComplexName() {/*@bgen(jjtree) ComplexName */
  SimpleNode *jjtn000 = new SimpleNode(JJTCOMPLEXNAME);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      Name();
      while (!hasError) {
        if (jj_2_3(2)) {
          ;
        } else {
          goto end_label_8;
        }
        jj_consume_token(57);
        Name();
      }
      end_label_8: ;
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::ComplexNameList() {/*@bgen(jjtree) NameList */
  SimpleNode *jjtn000 = new SimpleNode(JJTNAMELIST);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      ComplexName();
      while (!hasError) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case 62:{
          ;
          break;
          }
        default:
          jj_la1[15] = jj_gen;
          goto end_label_9;
        }
        jj_consume_token(62);
        ComplexName();
      }
      end_label_9: ;
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::Modifiers() {/*@bgen(jjtree) Modifiers */
  SimpleNode *jjtn000 = new SimpleNode(JJTMODIFIERS);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      while (!hasError) {
        Modifier();
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case T_LOCAL:
        case T_PUBLIC:{
          ;
          break;
          }
        default:
          jj_la1[16] = jj_gen;
          goto end_label_10;
        }
      }
      end_label_10: ;
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::Modifier() {/*@bgen(jjtree) Modifier */
  SimpleNode *jjtn000 = new SimpleNode(JJTMODIFIER);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case T_PUBLIC:{
        jj_consume_token(T_PUBLIC);
        break;
        }
      case T_LOCAL:{
        jj_consume_token(T_LOCAL);
        break;
        }
      default:
        jj_la1[17] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::Literal() {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case INTEGER_LITERAL:{
      jj_consume_token(INTEGER_LITERAL);
      break;
      }
    case FLOATING_POINT_LITERAL:{
      jj_consume_token(FLOATING_POINT_LITERAL);
      break;
      }
    case CHARACTER_LITERAL:{
      jj_consume_token(CHARACTER_LITERAL);
      break;
      }
    case STRING_LITERAL:{
      jj_consume_token(STRING_LITERAL);
      break;
      }
    case T_FALSE:
    case T_TRUE:{
      BooleanLiteral();
      break;
      }
    case T_NIL:{
      NullLiteral();
      break;
      }
    default:
      jj_la1[18] = jj_gen;
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
}


void Orb::BooleanLiteral() {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case T_TRUE:{
      jj_consume_token(T_TRUE);
      break;
      }
    case T_FALSE:{
      jj_consume_token(T_FALSE);
      break;
      }
    default:
      jj_la1[19] = jj_gen;
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
}


void Orb::NullLiteral() {
    jj_consume_token(T_NIL);
}


void Orb::ScopeBlock() {/*@bgen(jjtree) ScopeBlock */
  SimpleNode *jjtn000 = new SimpleNode(JJTSCOPEBLOCK);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      while (!hasError) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case T_LOCAL:{
          ;
          break;
          }
        default:
          jj_la1[20] = jj_gen;
          goto end_label_11;
        }
        LocalVariableDecl();
      }
      end_label_11: ;
      while (!hasError) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case T_CASE:
        case T_FALSE:
        case T_FOR:
        case T_IF:
        case T_NIL:
        case T_THIS:
        case T_TRUE:
        case T_WHILE:
        case INTEGER_LITERAL:
        case FLOATING_POINT_LITERAL:
        case CHARACTER_LITERAL:
        case STRING_LITERAL:
        case IDENTIFIER:{
          ;
          break;
          }
        default:
          jj_la1[21] = jj_gen;
          goto end_label_12;
        }
        Stmt();
      }
      end_label_12: ;
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case T_BREAK:
      case T_CONTINUE:
      case T_RETURN:{
        EndStmt();
        break;
        }
      default:
        jj_la1[22] = jj_gen;
        ;
      }
    } catch ( ...) {
if (jjtc000) {
        jjtree.clearNodeScope(jjtn000);
        jjtc000 = false;
      } else {
        jjtree.popNode();
      }
    }
if (jjtc000) {
        jjtn000->jjtSetLastToken(getToken(0));
        jjtree.closeNodeScope(jjtn000, true);
      }
}


void Orb::LocalVariableDecl() {/*@bgen(jjtree) LocalVariableDecl */
  SimpleNode *jjtn000 = new SimpleNode(JJTLOCALVARIABLEDECL);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      jj_consume_token(T_LOCAL);
      VariableDecl();
      while (!hasError) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case 62:{
          ;
          break;
          }
        default:
          jj_la1[23] = jj_gen;
          goto end_label_13;
        }
        jj_consume_token(62);
        VariableDecl();
      }
      end_label_13: ;
      jj_consume_token(56);
    } catch ( ...) {
if (jjtc000) {
        jjtree.clearNodeScope(jjtn000);
        jjtc000 = false;
      } else {
        jjtree.popNode();
      }
    }
if (jjtc000) {
        jjtn000->jjtSetLastToken(getToken(0));
        jjtree.closeNodeScope(jjtn000, true);
      }
}


void Orb::VariableDecl() {/*@bgen(jjtree) VariableDecl */
  SimpleNode *jjtn000 = new SimpleNode(JJTVARIABLEDECL);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      Name();
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 59:{
        jj_consume_token(59);
        Exp();
        break;
        }
      default:
        jj_la1[24] = jj_gen;
        ;
      }
    } catch ( ...) {
if (jjtc000) {
        jjtree.clearNodeScope(jjtn000);
        jjtc000 = false;
      } else {
        jjtree.popNode();
      }
    }
if (jjtc000) {
        jjtn000->jjtSetLastToken(getToken(0));
        jjtree.closeNodeScope(jjtn000, true);
      }
}


void Orb::Stmt() {/*@bgen(jjtree) Stmt */
  SimpleNode *jjtn000 = new SimpleNode(JJTSTMT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      if (jj_2_4(2147483647)) {
        FunctionCallStat();
      } else {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case T_FALSE:
        case T_NIL:
        case T_THIS:
        case T_TRUE:
        case INTEGER_LITERAL:
        case FLOATING_POINT_LITERAL:
        case CHARACTER_LITERAL:
        case STRING_LITERAL:
        case IDENTIFIER:{
          AssignmentStat();
          break;
          }
        case T_IF:{
          IfStat();
          break;
          }
        case T_FOR:{
          ForStat();
          break;
          }
        case T_WHILE:{
          WhileStat();
          break;
          }
        case T_CASE:{
          CaseStat();
          break;
          }
        default:
          jj_la1[25] = jj_gen;
          jj_consume_token(-1);
          errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
        }
      }
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::FunctionCallStat() {/*@bgen(jjtree) FunctionCallStat */
  SimpleNode *jjtn000 = new SimpleNode(JJTFUNCTIONCALLSTAT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      PrimaryExpression();
      Arguments();
      jj_consume_token(56);
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::AssignmentStat() {/*@bgen(jjtree) AssignmentStat */
  SimpleNode *jjtn000 = new SimpleNode(JJTASSIGNMENTSTAT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      PrimaryExpression();
      AssignmentOperator();
      Exp();
      jj_consume_token(56);
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::IfStat() {/*@bgen(jjtree) IfStat */
  SimpleNode *jjtn000 = new SimpleNode(JJTIFSTAT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      jj_consume_token(T_IF);
      Exp();
      jj_consume_token(T_THEN);
      ScopeBlock();
      while (!hasError) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case T_ELIF:{
          ;
          break;
          }
        default:
          jj_la1[26] = jj_gen;
          goto end_label_14;
        }
        jj_consume_token(T_ELIF);
        Exp();
        jj_consume_token(T_THEN);
        ScopeBlock();
      }
      end_label_14: ;
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case T_ELSE:{
        jj_consume_token(T_ELSE);
        ScopeBlock();
        break;
        }
      default:
        jj_la1[27] = jj_gen;
        ;
      }
      jj_consume_token(T_END);
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::ForStat() {/*@bgen(jjtree) ForStat */
  SimpleNode *jjtn000 = new SimpleNode(JJTFORSTAT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      jj_consume_token(T_FOR);
      Name();
      jj_consume_token(59);
      Exp();
      jj_consume_token(62);
      Exp();
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 62:{
        jj_consume_token(62);
        Exp();
        break;
        }
      default:
        jj_la1[28] = jj_gen;
        ;
      }
      jj_consume_token(T_ALIAS);
      Name();
      jj_consume_token(T_DO);
      ScopeBlock();
      jj_consume_token(T_END);
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::WhileStat() {/*@bgen(jjtree) WhileStat */
  SimpleNode *jjtn000 = new SimpleNode(JJTWHILESTAT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      jj_consume_token(T_WHILE);
      Exp();
      jj_consume_token(T_ALIAS);
      Name();
      jj_consume_token(T_DO);
      ScopeBlock();
      jj_consume_token(T_END);
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::CaseStat() {/*@bgen(jjtree) CaseStat */
  SimpleNode *jjtn000 = new SimpleNode(JJTCASESTAT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      jj_consume_token(T_CASE);
      PrimaryExpression();
      while (!hasError) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case T_WHEN:{
          ;
          break;
          }
        default:
          jj_la1[29] = jj_gen;
          goto end_label_15;
        }
        jj_consume_token(T_WHEN);
        LiteralList();
        jj_consume_token(T_THEN);
        ScopeBlock();
      }
      end_label_15: ;
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case T_DEFAULT:{
        jj_consume_token(T_DEFAULT);
        ScopeBlock();
        break;
        }
      default:
        jj_la1[30] = jj_gen;
        ;
      }
      jj_consume_token(T_END);
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::LiteralList() {/*@bgen(jjtree) LiteralList */
  SimpleNode *jjtn000 = new SimpleNode(JJTLITERALLIST);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      Literal();
      while (!hasError) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case 62:{
          ;
          break;
          }
        default:
          jj_la1[31] = jj_gen;
          goto end_label_16;
        }
        jj_consume_token(62);
        Literal();
      }
      end_label_16: ;
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::EndStmt() {/*@bgen(jjtree) EndStmt */
  SimpleNode *jjtn000 = new SimpleNode(JJTENDSTMT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case T_RETURN:{
        ReturnStat();
        break;
        }
      case T_CONTINUE:{
        ContinueStat();
        break;
        }
      case T_BREAK:{
        BreakStat();
        break;
        }
      default:
        jj_la1[32] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::ReturnStat() {/*@bgen(jjtree) ReturnStat */
  SimpleNode *jjtn000 = new SimpleNode(JJTRETURNSTAT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      jj_consume_token(T_RETURN);
      jj_consume_token(56);
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::ContinueStat() {/*@bgen(jjtree) ContinueStat */
  SimpleNode *jjtn000 = new SimpleNode(JJTCONTINUESTAT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      jj_consume_token(T_CONTINUE);
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case IDENTIFIER:{
        Name();
        break;
        }
      default:
        jj_la1[33] = jj_gen;
        ;
      }
      jj_consume_token(56);
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::BreakStat() {/*@bgen(jjtree) BreakStat */
  SimpleNode *jjtn000 = new SimpleNode(JJTBREAKSTAT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      jj_consume_token(T_BREAK);
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case IDENTIFIER:{
        Name();
        break;
        }
      default:
        jj_la1[34] = jj_gen;
        ;
      }
      jj_consume_token(56);
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::PrimaryExpression() {/*@bgen(jjtree) PrimaryExpression */
  SimpleNode *jjtn000 = new SimpleNode(JJTPRIMARYEXPRESSION);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      PrimaryPrefix();
      while (!hasError) {
        if (jj_2_5(2)) {
          ;
        } else {
          goto end_label_17;
        }
        PrimarySuffix();
      }
      end_label_17: ;
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::PrimaryPrefix() {/*@bgen(jjtree) PrimaryPrefix */
  SimpleNode *jjtn000 = new SimpleNode(JJTPRIMARYPREFIX);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case T_FALSE:
      case T_NIL:
      case T_TRUE:
      case INTEGER_LITERAL:
      case FLOATING_POINT_LITERAL:
      case CHARACTER_LITERAL:
      case STRING_LITERAL:{
        Literal();
        break;
        }
      case T_THIS:{
        jj_consume_token(T_THIS);
        break;
        }
      case IDENTIFIER:{
        Name();
        break;
        }
      default:
        jj_la1[35] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::PrimarySuffix() {/*@bgen(jjtree) PrimarySuffix */
  SimpleNode *jjtn000 = new SimpleNode(JJTPRIMARYSUFFIX);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000->jjtSetFirstToken(getToken(1));
    try {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 64:{
        jj_consume_token(64);
        Exp();
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case 65:{
          jj_consume_token(65);
          Exp();
          break;
          }
        default:
          jj_la1[36] = jj_gen;
          ;
        }
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case 62:{
          jj_consume_token(62);
          Exp();
          switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
          case 65:{
            jj_consume_token(65);
            Exp();
            break;
            }
          default:
            jj_la1[37] = jj_gen;
            ;
          }
          break;
          }
        default:
          jj_la1[38] = jj_gen;
          ;
        }
        jj_consume_token(66);
        break;
        }
      case 57:{
        jj_consume_token(57);
        Name();
        break;
        }
      case 60:{
        Arguments();
        break;
        }
      default:
        jj_la1[39] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
    } catch ( ...) {
if (jjtc000) {
            jjtree.clearNodeScope(jjtn000);
            jjtc000 = false;
          } else {
            jjtree.popNode();
          }
    }
if (jjtc000) {
            jjtn000->jjtSetLastToken(getToken(0));
            jjtree.closeNodeScope(jjtn000, true);
          }
}


void Orb::Arguments() {
    jj_consume_token(60);
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case T_FALSE:
    case T_NIL:
    case T_THIS:
    case T_TRUE:
    case INTEGER_LITERAL:
    case FLOATING_POINT_LITERAL:
    case CHARACTER_LITERAL:
    case STRING_LITERAL:
    case IDENTIFIER:
    case 64:
    case 67:
    case 68:
    case 69:
    case 94:
    case 95:
    case 98:
    case 99:
    case 100:{
      ExpList();
      break;
      }
    default:
      jj_la1[40] = jj_gen;
      ;
    }
    jj_consume_token(61);
}


void Orb::ExpList() {
    Exp();
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 62:{
        ;
        break;
        }
      default:
        jj_la1[41] = jj_gen;
        goto end_label_18;
      }
      jj_consume_token(62);
      Exp();
    }
    end_label_18: ;
}


void Orb::Exp() {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case 67:
    case 68:
    case 94:
    case 95:
    case 98:
    case 99:
    case 100:{
      ConditionalExpression();
      break;
      }
    case T_FALSE:
    case T_NIL:
    case T_THIS:
    case T_TRUE:
    case INTEGER_LITERAL:
    case FLOATING_POINT_LITERAL:
    case CHARACTER_LITERAL:
    case STRING_LITERAL:
    case IDENTIFIER:{
      PrimaryExpression();
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 67:{
        jj_consume_token(67);
        break;
        }
      case 68:{
        jj_consume_token(68);
        break;
        }
      default:
        jj_la1[42] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
      break;
      }
    case 64:{
      ArrayDecl();
      break;
      }
    case 69:{
      DictDecl();
      break;
      }
    default:
      jj_la1[43] = jj_gen;
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
}


void Orb::ArrayDecl() {
    jj_consume_token(64);
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case T_FALSE:
    case T_NIL:
    case T_THIS:
    case T_TRUE:
    case INTEGER_LITERAL:
    case FLOATING_POINT_LITERAL:
    case CHARACTER_LITERAL:
    case STRING_LITERAL:
    case IDENTIFIER:
    case 64:
    case 67:
    case 68:
    case 69:
    case 94:
    case 95:
    case 98:
    case 99:
    case 100:{
      ExpList();
      break;
      }
    default:
      jj_la1[44] = jj_gen;
      ;
    }
    jj_consume_token(66);
}


void Orb::DictDecl() {
    jj_consume_token(69);
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case T_FALSE:
    case T_NIL:
    case T_THIS:
    case T_TRUE:
    case INTEGER_LITERAL:
    case FLOATING_POINT_LITERAL:
    case CHARACTER_LITERAL:
    case STRING_LITERAL:
    case IDENTIFIER:
    case 64:
    case 67:
    case 68:
    case 69:
    case 94:
    case 95:
    case 98:
    case 99:
    case 100:{
      PairDecl();
      while (!hasError) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case 62:{
          ;
          break;
          }
        default:
          jj_la1[45] = jj_gen;
          goto end_label_19;
        }
        jj_consume_token(62);
        PairDecl();
      }
      end_label_19: ;
      break;
      }
    default:
      jj_la1[46] = jj_gen;
      ;
    }
    jj_consume_token(70);
}


void Orb::PairDecl() {
    Exp();
    jj_consume_token(65);
    Exp();
}


void Orb::AssignmentOperator() {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case 59:{
      jj_consume_token(59);
      break;
      }
    case 71:{
      jj_consume_token(71);
      break;
      }
    case 72:{
      jj_consume_token(72);
      break;
      }
    case 73:{
      jj_consume_token(73);
      break;
      }
    case 74:{
      jj_consume_token(74);
      break;
      }
    case 75:{
      jj_consume_token(75);
      break;
      }
    case 76:{
      jj_consume_token(76);
      break;
      }
    case 77:{
      jj_consume_token(77);
      break;
      }
    case 78:{
      jj_consume_token(78);
      break;
      }
    default:
      jj_la1[47] = jj_gen;
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
}


void Orb::ConditionalExpression() {
    ConditionalOrExpression();
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case 79:{
      jj_consume_token(79);
      Exp();
      jj_consume_token(65);
      ConditionalExpression();
      break;
      }
    default:
      jj_la1[48] = jj_gen;
      ;
    }
}


void Orb::ConditionalOrExpression() {
    ConditionalAndExpression();
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case T_OR:
      case 80:{
        ;
        break;
        }
      default:
        jj_la1[49] = jj_gen;
        goto end_label_20;
      }
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 80:{
        jj_consume_token(80);
        break;
        }
      case T_OR:{
        jj_consume_token(T_OR);
        break;
        }
      default:
        jj_la1[50] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
      ConditionalAndExpression();
    }
    end_label_20: ;
}


void Orb::ConditionalAndExpression() {
    InclusiveOrExpression();
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case T_AND:
      case 81:{
        ;
        break;
        }
      default:
        jj_la1[51] = jj_gen;
        goto end_label_21;
      }
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 81:{
        jj_consume_token(81);
        break;
        }
      case T_AND:{
        jj_consume_token(T_AND);
        break;
        }
      default:
        jj_la1[52] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
      InclusiveOrExpression();
    }
    end_label_21: ;
}


void Orb::InclusiveOrExpression() {
    ExclusiveOrExpression();
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 82:{
        ;
        break;
        }
      default:
        jj_la1[53] = jj_gen;
        goto end_label_22;
      }
      jj_consume_token(82);
      ExclusiveOrExpression();
    }
    end_label_22: ;
}


void Orb::ExclusiveOrExpression() {
    AndExpression();
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 83:{
        ;
        break;
        }
      default:
        jj_la1[54] = jj_gen;
        goto end_label_23;
      }
      jj_consume_token(83);
      AndExpression();
    }
    end_label_23: ;
}


void Orb::AndExpression() {
    EqualityExpression();
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 84:{
        ;
        break;
        }
      default:
        jj_la1[55] = jj_gen;
        goto end_label_24;
      }
      jj_consume_token(84);
      EqualityExpression();
    }
    end_label_24: ;
}


void Orb::EqualityExpression() {
    InstanceOfExpression();
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 85:
      case 86:{
        ;
        break;
        }
      default:
        jj_la1[56] = jj_gen;
        goto end_label_25;
      }
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 85:{
        jj_consume_token(85);
        break;
        }
      case 86:{
        jj_consume_token(86);
        break;
        }
      default:
        jj_la1[57] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
      InstanceOfExpression();
    }
    end_label_25: ;
}


void Orb::InstanceOfExpression() {
    RelationalExpression();
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case T_TYPEOF:{
      jj_consume_token(T_TYPEOF);
      ComplexName();
      break;
      }
    default:
      jj_la1[58] = jj_gen;
      ;
    }
}


void Orb::RelationalExpression() {
    ShiftExpression();
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 87:
      case 88:
      case 89:
      case 90:{
        ;
        break;
        }
      default:
        jj_la1[59] = jj_gen;
        goto end_label_26;
      }
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 87:{
        jj_consume_token(87);
        break;
        }
      case 88:{
        jj_consume_token(88);
        break;
        }
      case 89:{
        jj_consume_token(89);
        break;
        }
      case 90:{
        jj_consume_token(90);
        break;
        }
      default:
        jj_la1[60] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
      ShiftExpression();
    }
    end_label_26: ;
}


void Orb::ShiftExpression() {
    AdditiveExpression();
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 91:
      case 92:
      case 93:{
        ;
        break;
        }
      default:
        jj_la1[61] = jj_gen;
        goto end_label_27;
      }
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 91:{
        jj_consume_token(91);
        break;
        }
      case 92:{
        jj_consume_token(92);
        break;
        }
      case 93:{
        jj_consume_token(93);
        break;
        }
      default:
        jj_la1[62] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
      AdditiveExpression();
    }
    end_label_27: ;
}


void Orb::AdditiveExpression() {
    MultiplicativeExpression();
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 94:
      case 95:{
        ;
        break;
        }
      default:
        jj_la1[63] = jj_gen;
        goto end_label_28;
      }
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 94:{
        jj_consume_token(94);
        break;
        }
      case 95:{
        jj_consume_token(95);
        break;
        }
      default:
        jj_la1[64] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
      MultiplicativeExpression();
    }
    end_label_28: ;
}


void Orb::MultiplicativeExpression() {
    UnaryExpression();
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 58:
      case 96:
      case 97:{
        ;
        break;
        }
      default:
        jj_la1[65] = jj_gen;
        goto end_label_29;
      }
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 58:{
        jj_consume_token(58);
        break;
        }
      case 96:{
        jj_consume_token(96);
        break;
        }
      case 97:{
        jj_consume_token(97);
        break;
        }
      default:
        jj_la1[66] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
      UnaryExpression();
    }
    end_label_29: ;
}


void Orb::UnaryExpression() {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case 94:
    case 95:{
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case 94:{
        jj_consume_token(94);
        break;
        }
      case 95:{
        jj_consume_token(95);
        break;
        }
      default:
        jj_la1[67] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
      PrimaryExpression();
      break;
      }
    case 67:{
      PreIncrementExpression();
      break;
      }
    case 68:{
      PreDecrementExpression();
      break;
      }
    case 98:
    case 99:
    case 100:{
      UnaryExpressionNotPlusMinus();
      break;
      }
    default:
      jj_la1[68] = jj_gen;
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
}


void Orb::PreIncrementExpression() {
    jj_consume_token(67);
    PrimaryExpression();
}


void Orb::PreDecrementExpression() {
    jj_consume_token(68);
    PrimaryExpression();
}


void Orb::UnaryExpressionNotPlusMinus() {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case 98:{
      jj_consume_token(98);
      break;
      }
    case 99:{
      jj_consume_token(99);
      break;
      }
    case 100:{
      jj_consume_token(100);
      break;
      }
    default:
      jj_la1[69] = jj_gen;
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
    PrimaryExpression();
}


  Orb::Orb(TokenManager *tokenManager){
    head = nullptr;
    ReInit(tokenManager);
}
Orb::~Orb()
{
  clear();
}

void Orb::ReInit(TokenManager* tokenManager){
    clear();
    errorHandler = new ErrorHandler();
    hasError = false;
    token_source = tokenManager;
    head = token = new Token();
    token->kind = 0;
    token->next = nullptr;
    jj_lookingAhead = false;
    jj_rescan = false;
    jj_done = false;
    jj_scanpos = jj_lastpos = nullptr;
    jj_gc = 0;
    jj_kind = -1;
    indent = 0;
    trace = false;
    jj_ntk = -1;
    jjtree.reset();
    jj_gen = 0;
    for (int i = 0; i < 70; i++) jj_la1[i] = -1;
  }


void Orb::clear(){
  //Since token manager was generate from outside,
  //parser should not take care of deleting
  //if (token_source) delete token_source;
  if (head) {
    Token *next, *t = head;
    while (t) {
      next = t->next;
      delete t;
      t = next;
    }
  }
  if (errorHandler) {
    delete errorHandler, errorHandler = nullptr;
  }
}


Token * Orb::jj_consume_token(int kind)  {
    Token *oldToken;
    if ((oldToken = token)->next != nullptr) token = token->next;
    else token = token->next = token_source->getNextToken();
    jj_ntk = -1;
    if (token->kind == kind) {
      jj_gen++;
      if (++jj_gc > 100) {
        jj_gc = 0;
        for (int i = 0; i < 5; i++) {
          JJCalls *c = &jj_2_rtns[i];
          while (c != nullptr) {
            if (c->gen < jj_gen) c->first = nullptr;
            c = c->next;
          }
        }
      }
      return token;
    }
    token = oldToken;
    jj_kind = kind;
    JJString image = kind >= 0 ? tokenImage[kind] : tokenImage[0];
    errorHandler->handleUnexpectedToken(kind, image.substr(1, image.size() - 2), getToken(1), this);
    hasError = true;
    return token;
  }


bool  Orb::jj_scan_token(int kind){
    if (jj_scanpos == jj_lastpos) {
      jj_la--;
      if (jj_scanpos->next == nullptr) {
        jj_lastpos = jj_scanpos = jj_scanpos->next = token_source->getNextToken();
      } else {
        jj_lastpos = jj_scanpos = jj_scanpos->next;
      }
    } else {
      jj_scanpos = jj_scanpos->next;
    }
    if (jj_rescan) {
      int i = 0; Token *tok = token;
      while (tok != nullptr && tok != jj_scanpos) { i++; tok = tok->next; }
      if (tok != nullptr) jj_add_error_token(kind, i);
    }
    if (jj_scanpos->kind != kind) return true;
    if (jj_la == 0 && jj_scanpos == jj_lastpos) { return jj_done = true; }
    return false;
  }


/** Get the next Token. */

Token * Orb::getNextToken(){
    if (token->next != nullptr) token = token->next;
    else token = token->next = token_source->getNextToken();
    jj_ntk = -1;
    jj_gen++;
    return token;
  }

/** Get the specific Token. */

Token * Orb::getToken(int index){
    Token *t = token;
    for (int i = 0; i < index; i++) {
      if (t->next != nullptr) t = t->next;
      else t = t->next = token_source->getNextToken();
    }
    return t;
  }


int Orb::jj_ntk_f(){
    if ((jj_nt=token->next) == nullptr)
      return (jj_ntk = (token->next=token_source->getNextToken())->kind);
    else
      return (jj_ntk = jj_nt->kind);
  }


  void Orb::jj_add_error_token(int kind, int pos)  {
  }


 void  Orb::parseError()   {
      fprintf(stderr, "Parse error at: %d:%d, after token: %s encountered: %s\n", token->beginLine, token->beginColumn, addUnicodeEscapes(token->image).c_str(), addUnicodeEscapes(getToken(1)->image).c_str());
   }


  bool Orb::trace_enabled()  {
    return trace;
  }


  void Orb::enable_tracing()  {
  }

  void Orb::disable_tracing()  {
  }


  void Orb::jj_rescan_token(){
    jj_rescan = true;
    for (int i = 0; i < 5; i++) {
      JJCalls *p = &jj_2_rtns[i];
      do {
        if (p->gen > jj_gen) {
          jj_la = p->arg; jj_lastpos = jj_scanpos = p->first;
          switch (i) {
            case 0: jj_3_1(); break;
            case 1: jj_3_2(); break;
            case 2: jj_3_3(); break;
            case 3: jj_3_4(); break;
            case 4: jj_3_5(); break;
          }
        }
        p = p->next;
      } while (p != nullptr);
    }
    jj_rescan = false;
  }


  void Orb::jj_save(int index, int xla){
    JJCalls *p = &jj_2_rtns[index];
    while (p->gen > jj_gen) {
      if (p->next == nullptr) { p = p->next = new JJCalls(); break; }
      p = p->next;
    }
    p->gen = jj_gen + xla - jj_la; p->first = token; p->arg = xla;
  }


