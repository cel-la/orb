#ifndef ORB_H
#define ORB_H
#include "JavaCC.h"
#include "CharStream.h"
#include "Token.h"
#include "TokenManager.h"
#include "OrbConstants.h"
#include "JJTOrbState.h"
#include "ErrorHandler.h"
#include "OrbTree.h"
  struct JJCalls {
    int        gen;
    int        arg;
    JJCalls*   next;
    Token*     first;
    ~JJCalls() { if (next) delete next; }
     JJCalls() { next = nullptr; arg = 0; gen = -1; first = nullptr; }
  };

class Orb {
public:
SimpleNode          * CompilationUnit();
void PackageDecl();
void UsingDecl();
void ConstDecl();
void PackagePropertyDecl();
void PackageVariableDecl();
void PackageFunctionDecl();
void FormalParams();
void FormalParam();
void ResultParams();
void ResultParam();
void Name();
void ComplexName();
void ComplexNameList();
void Modifiers();
void Modifier();
void Literal();
void BooleanLiteral();
void NullLiteral();
void ScopeBlock();
void LocalVariableDecl();
void VariableDecl();
void Stmt();
void FunctionCallStat();
void AssignmentStat();
void IfStat();
void ForStat();
void WhileStat();
void CaseStat();
void LiteralList();
void EndStmt();
void ReturnStat();
void ContinueStat();
void BreakStat();
void PrimaryExpression();
void PrimaryPrefix();
void PrimarySuffix();
void Arguments();
void ExpList();
void Exp();
void ArrayDecl();
void DictDecl();
void PairDecl();
void AssignmentOperator();
void ConditionalExpression();
void ConditionalOrExpression();
void ConditionalAndExpression();
void InclusiveOrExpression();
void ExclusiveOrExpression();
void AndExpression();
void EqualityExpression();
void InstanceOfExpression();
void RelationalExpression();
void ShiftExpression();
void AdditiveExpression();
void MultiplicativeExpression();
void UnaryExpression();
void PreIncrementExpression();
void PreDecrementExpression();
void UnaryExpressionNotPlusMinus();
 inline bool jj_2_1(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_1() || jj_done);
 { jj_save(0, xla); }
  }

 inline bool jj_2_2(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_2() || jj_done);
 { jj_save(1, xla); }
  }

 inline bool jj_2_3(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_3() || jj_done);
 { jj_save(2, xla); }
  }

 inline bool jj_2_4(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_4() || jj_done);
 { jj_save(3, xla); }
  }

 inline bool jj_2_5(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_5() || jj_done);
 { jj_save(4, xla); }
  }

 inline bool jj_3R_71()
 {
    if (jj_done) return true;
    if (jj_3R_73()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3R_76()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_61()
 {
    if (jj_done) return true;
    if (jj_scan_token(79)) return true;
    if (jj_3R_42()) return true;
    if (jj_scan_token(65)) return true;
    if (jj_3R_53()) return true;
    return false;
  }

 inline bool jj_3R_69()
 {
    if (jj_done) return true;
    if (jj_3R_71()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3R_74()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_65()
 {
    if (jj_done) return true;
    if (jj_3R_69()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3R_72()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_60()
 {
    if (jj_done) return true;
    if (jj_3R_65()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3R_70()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_68()
 {
    if (jj_done) return true;
    if (jj_scan_token(62)) return true;
    if (jj_3R_67()) return true;
    return false;
  }

 inline bool jj_3R_59()
 {
    if (jj_done) return true;
    if (jj_3R_60()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3R_66()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_57()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_scan_token(39)) {
    jj_scanpos = xsp;
    if (jj_scan_token(23)) return true;
    }
    return false;
  }

 inline bool jj_3R_53()
 {
    if (jj_done) return true;
    if (jj_3R_59()) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_61()) jj_scanpos = xsp;
    return false;
  }

 inline bool jj_3R_50()
 {
    if (jj_done) return true;
    if (jj_3R_57()) return true;
    return false;
  }

 inline bool jj_3R_63()
 {
    if (jj_done) return true;
    if (jj_3R_67()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3R_68()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_67()
 {
    if (jj_done) return true;
    if (jj_3R_42()) return true;
    if (jj_scan_token(65)) return true;
    if (jj_3R_42()) return true;
    return false;
  }

 inline bool jj_3R_44()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_scan_token(45)) {
    jj_scanpos = xsp;
    if (jj_scan_token(48)) {
    jj_scanpos = xsp;
    if (jj_scan_token(50)) {
    jj_scanpos = xsp;
    if (jj_scan_token(51)) {
    jj_scanpos = xsp;
    if (jj_3R_50()) {
    jj_scanpos = xsp;
    if (jj_scan_token(29)) return true;
    }
    }
    }
    }
    }
    return false;
  }

 inline bool jj_3R_58()
 {
    if (jj_done) return true;
    if (jj_scan_token(65)) return true;
    if (jj_3R_42()) return true;
    return false;
  }

 inline bool jj_3R_55()
 {
    if (jj_done) return true;
    if (jj_scan_token(69)) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_63()) jj_scanpos = xsp;
    if (jj_scan_token(70)) return true;
    return false;
  }

 inline bool jj_3R_62()
 {
    if (jj_done) return true;
    if (jj_3R_56()) return true;
    return false;
  }

 inline bool jj_3R_39()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_scan_token(33)) {
    jj_scanpos = xsp;
    if (jj_scan_token(28)) return true;
    }
    return false;
  }

 inline bool jj_3R_34()
 {
    if (jj_done) return true;
    if (jj_3R_39()) return true;
    return false;
  }

 inline bool jj_3R_54()
 {
    if (jj_done) return true;
    if (jj_scan_token(64)) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_62()) jj_scanpos = xsp;
    if (jj_scan_token(66)) return true;
    return false;
  }

 inline bool jj_3R_30()
 {
    if (jj_done) return true;
    Token * xsp;
    if (jj_3R_34()) return true;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3R_34()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_52()
 {
    if (jj_done) return true;
    if (jj_scan_token(62)) return true;
    if (jj_3R_42()) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_58()) jj_scanpos = xsp;
    return false;
  }

 inline bool jj_3_3()
 {
    if (jj_done) return true;
    if (jj_scan_token(57)) return true;
    if (jj_3R_31()) return true;
    return false;
  }

 inline bool jj_3R_48()
 {
    if (jj_done) return true;
    if (jj_3R_55()) return true;
    return false;
  }

 inline bool jj_3R_47()
 {
    if (jj_done) return true;
    if (jj_3R_54()) return true;
    return false;
  }

 inline bool jj_3R_46()
 {
    if (jj_done) return true;
    if (jj_3R_32()) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_scan_token(67)) {
    jj_scanpos = xsp;
    if (jj_scan_token(68)) return true;
    }
    return false;
  }

 inline bool jj_3R_64()
 {
    if (jj_done) return true;
    if (jj_scan_token(62)) return true;
    if (jj_3R_42()) return true;
    return false;
  }

 inline bool jj_3R_45()
 {
    if (jj_done) return true;
    if (jj_3R_53()) return true;
    return false;
  }

 inline bool jj_3R_42()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_45()) {
    jj_scanpos = xsp;
    if (jj_3R_46()) {
    jj_scanpos = xsp;
    if (jj_3R_47()) {
    jj_scanpos = xsp;
    if (jj_3R_48()) return true;
    }
    }
    }
    return false;
  }

 inline bool jj_3R_83()
 {
    if (jj_done) return true;
    if (jj_3R_31()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_3()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_56()
 {
    if (jj_done) return true;
    if (jj_3R_42()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3R_64()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_51()
 {
    if (jj_done) return true;
    if (jj_scan_token(65)) return true;
    if (jj_3R_42()) return true;
    return false;
  }

 inline bool jj_3R_31()
 {
    if (jj_done) return true;
    if (jj_scan_token(IDENTIFIER)) return true;
    return false;
  }

 inline bool jj_3R_49()
 {
    if (jj_done) return true;
    if (jj_3R_56()) return true;
    return false;
  }

 inline bool jj_3_5()
 {
    if (jj_done) return true;
    if (jj_3R_33()) return true;
    return false;
  }

 inline bool jj_3R_38()
 {
    if (jj_done) return true;
    if (jj_3R_43()) return true;
    return false;
  }

 inline bool jj_3R_37()
 {
    if (jj_done) return true;
    if (jj_scan_token(57)) return true;
    if (jj_3R_31()) return true;
    return false;
  }

 inline bool jj_3R_43()
 {
    if (jj_done) return true;
    if (jj_scan_token(60)) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_49()) jj_scanpos = xsp;
    if (jj_scan_token(61)) return true;
    return false;
  }

 inline bool jj_3R_33()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_36()) {
    jj_scanpos = xsp;
    if (jj_3R_37()) {
    jj_scanpos = xsp;
    if (jj_3R_38()) return true;
    }
    }
    return false;
  }

 inline bool jj_3R_36()
 {
    if (jj_done) return true;
    if (jj_scan_token(64)) return true;
    if (jj_3R_42()) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_51()) jj_scanpos = xsp;
    xsp = jj_scanpos;
    if (jj_3R_52()) jj_scanpos = xsp;
    if (jj_scan_token(66)) return true;
    return false;
  }

 inline bool jj_3R_41()
 {
    if (jj_done) return true;
    if (jj_3R_31()) return true;
    return false;
  }

 inline bool jj_3R_35()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_40()) {
    jj_scanpos = xsp;
    if (jj_scan_token(38)) {
    jj_scanpos = xsp;
    if (jj_3R_41()) return true;
    }
    }
    return false;
  }

 inline bool jj_3R_40()
 {
    if (jj_done) return true;
    if (jj_3R_44()) return true;
    return false;
  }

 inline bool jj_3R_32()
 {
    if (jj_done) return true;
    if (jj_3R_35()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_5()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_95()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_scan_token(98)) {
    jj_scanpos = xsp;
    if (jj_scan_token(99)) {
    jj_scanpos = xsp;
    if (jj_scan_token(100)) return true;
    }
    }
    if (jj_3R_32()) return true;
    return false;
  }

 inline bool jj_3_2()
 {
    if (jj_done) return true;
    if (jj_scan_token(T_LOCAL)) return true;
    if (jj_3R_31()) return true;
    return false;
  }

 inline bool jj_3_1()
 {
    if (jj_done) return true;
    if (jj_3R_30()) return true;
    if (jj_scan_token(T_CONST)) return true;
    return false;
  }

 inline bool jj_3R_94()
 {
    if (jj_done) return true;
    if (jj_scan_token(68)) return true;
    if (jj_3R_32()) return true;
    return false;
  }

 inline bool jj_3R_87()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_scan_token(94)) {
    jj_scanpos = xsp;
    if (jj_scan_token(95)) return true;
    }
    if (jj_3R_84()) return true;
    return false;
  }

 inline bool jj_3R_92()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_scan_token(58)) {
    jj_scanpos = xsp;
    if (jj_scan_token(96)) {
    jj_scanpos = xsp;
    if (jj_scan_token(97)) return true;
    }
    }
    if (jj_3R_86()) return true;
    return false;
  }

 inline bool jj_3R_93()
 {
    if (jj_done) return true;
    if (jj_scan_token(67)) return true;
    if (jj_3R_32()) return true;
    return false;
  }

 inline bool jj_3R_91()
 {
    if (jj_done) return true;
    if (jj_3R_95()) return true;
    return false;
  }

 inline bool jj_3R_85()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_scan_token(91)) {
    jj_scanpos = xsp;
    if (jj_scan_token(92)) {
    jj_scanpos = xsp;
    if (jj_scan_token(93)) return true;
    }
    }
    if (jj_3R_81()) return true;
    return false;
  }

 inline bool jj_3R_90()
 {
    if (jj_done) return true;
    if (jj_3R_94()) return true;
    return false;
  }

 inline bool jj_3R_89()
 {
    if (jj_done) return true;
    if (jj_3R_93()) return true;
    return false;
  }

 inline bool jj_3R_86()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_88()) {
    jj_scanpos = xsp;
    if (jj_3R_89()) {
    jj_scanpos = xsp;
    if (jj_3R_90()) {
    jj_scanpos = xsp;
    if (jj_3R_91()) return true;
    }
    }
    }
    return false;
  }

 inline bool jj_3R_88()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_scan_token(94)) {
    jj_scanpos = xsp;
    if (jj_scan_token(95)) return true;
    }
    if (jj_3R_32()) return true;
    return false;
  }

 inline bool jj_3R_82()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_scan_token(87)) {
    jj_scanpos = xsp;
    if (jj_scan_token(88)) {
    jj_scanpos = xsp;
    if (jj_scan_token(89)) {
    jj_scanpos = xsp;
    if (jj_scan_token(90)) return true;
    }
    }
    }
    if (jj_3R_79()) return true;
    return false;
  }

 inline bool jj_3R_80()
 {
    if (jj_done) return true;
    if (jj_scan_token(T_TYPEOF)) return true;
    if (jj_3R_83()) return true;
    return false;
  }

 inline bool jj_3R_84()
 {
    if (jj_done) return true;
    if (jj_3R_86()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3R_92()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_78()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_scan_token(85)) {
    jj_scanpos = xsp;
    if (jj_scan_token(86)) return true;
    }
    if (jj_3R_75()) return true;
    return false;
  }

 inline bool jj_3R_81()
 {
    if (jj_done) return true;
    if (jj_3R_84()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3R_87()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_79()
 {
    if (jj_done) return true;
    if (jj_3R_81()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3R_85()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_76()
 {
    if (jj_done) return true;
    if (jj_scan_token(84)) return true;
    if (jj_3R_73()) return true;
    return false;
  }

 inline bool jj_3R_77()
 {
    if (jj_done) return true;
    if (jj_3R_79()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3R_82()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3_4()
 {
    if (jj_done) return true;
    if (jj_3R_32()) return true;
    if (jj_scan_token(60)) return true;
    return false;
  }

 inline bool jj_3R_72()
 {
    if (jj_done) return true;
    if (jj_scan_token(82)) return true;
    if (jj_3R_69()) return true;
    return false;
  }

 inline bool jj_3R_74()
 {
    if (jj_done) return true;
    if (jj_scan_token(83)) return true;
    if (jj_3R_71()) return true;
    return false;
  }

 inline bool jj_3R_75()
 {
    if (jj_done) return true;
    if (jj_3R_77()) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_80()) jj_scanpos = xsp;
    return false;
  }

 inline bool jj_3R_70()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_scan_token(81)) {
    jj_scanpos = xsp;
    if (jj_scan_token(13)) return true;
    }
    if (jj_3R_65()) return true;
    return false;
  }

 inline bool jj_3R_73()
 {
    if (jj_done) return true;
    if (jj_3R_75()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3R_78()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_66()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_scan_token(80)) {
    jj_scanpos = xsp;
    if (jj_scan_token(30)) return true;
    }
    if (jj_3R_60()) return true;
    return false;
  }


public: 
  void setErrorHandler(ErrorHandler *eh) {
    if (errorHandler) delete errorHandler;
    errorHandler = eh;
  }

  TokenManager *token_source = nullptr;
  CharStream   *jj_input_stream = nullptr;
  /** Current token. */
  Token        *token = nullptr;
  /** Next token. */
  Token        *jj_nt = nullptr;

private: 
  int           jj_ntk;
  JJCalls       jj_2_rtns[6];
  bool          jj_rescan;
  int           jj_gc;
  Token        *jj_scanpos, *jj_lastpos;
  int           jj_la;
  /** Whether we are looking ahead. */
  bool          jj_lookingAhead;
  bool          jj_semLA;
  int           jj_gen;
  int           jj_la1[71];
  ErrorHandler *errorHandler = nullptr;

protected: 
  bool          hasError;

  Token *head; 
public: 
  Orb(TokenManager *tokenManager);
  virtual ~Orb();
void ReInit(TokenManager* tokenManager);
void clear();
Token * jj_consume_token(int kind);
bool  jj_scan_token(int kind);
Token * getNextToken();
Token * getToken(int index);
int jj_ntk_f();
private:
  int jj_kind;
  int **jj_expentries;
  int *jj_expentry;
  void jj_add_error_token(int kind, int pos);
protected:
  /** Generate ParseException. */
  virtual void  parseError();
private:
  int  indent;	// trace indentation
  bool trace = false; // trace enabled if true

public:
  bool trace_enabled();
  void enable_tracing();
  void disable_tracing();
  void jj_rescan_token();
  void jj_save(int index, int xla);


  JJTOrbState jjtree;
private:
  bool jj_done;
};
#endif
