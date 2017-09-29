/* OrbTokenManager.cc */
#include "OrbTokenManager.h"
#include "TokenMgrError.h"
#include "SimpleNode.h"
static const unsigned long long jjbitVec0[] = {
   0xfffffffffffffffeULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL
};
static const unsigned long long jjbitVec2[] = {
   0x0ULL, 0x0ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL
};
static const unsigned long long jjbitVec3[] = {
   0x0ULL, 0x0ULL, 0xfffe03fffffe0000ULL, 0x3ffULL
};
static const int jjnextStates[] = {
   39, 40, 45, 46, 25, 26, 28, 15, 17, 12, 13, 18, 19, 27, 29, 43, 
   44, 47, 48, 
};
static JJChar jjstrLiteralChars_0[] = {0};
static JJChar jjstrLiteralChars_1[] = {0};
static JJChar jjstrLiteralChars_2[] = {0};
static JJChar jjstrLiteralChars_3[] = {0};
static JJChar jjstrLiteralChars_4[] = {0};
static JJChar jjstrLiteralChars_5[] = {0};
static JJChar jjstrLiteralChars_6[] = {0};

static JJChar jjstrLiteralChars_7[] = {0};
static JJChar jjstrLiteralChars_8[] = {0};
static JJChar jjstrLiteralChars_9[] = {0};
static JJChar jjstrLiteralChars_10[] = {0};
static JJChar jjstrLiteralChars_11[] = {0};

static JJChar jjstrLiteralChars_12[] = {0x61, 0x6c, 0x69, 0x61, 0x73, 0};
static JJChar jjstrLiteralChars_13[] = {0x61, 0x6e, 0x64, 0};

static JJChar jjstrLiteralChars_14[] = {0x62, 0x72, 0x65, 0x61, 0x6b, 0};
static JJChar jjstrLiteralChars_15[] = {0x63, 0x61, 0x73, 0x65, 0};

static JJChar jjstrLiteralChars_16[] = {0x63, 0x6f, 0x6e, 0x73, 0x74, 0};

static JJChar jjstrLiteralChars_17[] = {0x63, 0x6f, 0x6e, 0x74, 0x69, 0x6e, 0x75, 0x65, 0};

static JJChar jjstrLiteralChars_18[] = {0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0};
static JJChar jjstrLiteralChars_19[] = {0x64, 0x6f, 0};

static JJChar jjstrLiteralChars_20[] = {0x65, 0x6c, 0x69, 0x66, 0};
static JJChar jjstrLiteralChars_21[] = {0x65, 0x6c, 0x73, 0x65, 0};

static JJChar jjstrLiteralChars_22[] = {0x65, 0x6e, 0x64, 0};
static JJChar jjstrLiteralChars_23[] = {0x66, 0x61, 0x6c, 0x73, 0x65, 0};

static JJChar jjstrLiteralChars_24[] = {0x66, 0x6f, 0x72, 0};

static JJChar jjstrLiteralChars_25[] = {0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0};
static JJChar jjstrLiteralChars_26[] = {0x69, 0x66, 0};

static JJChar jjstrLiteralChars_27[] = {0x69, 0x73, 0};
static JJChar jjstrLiteralChars_28[] = {0x6c, 0x6f, 0x63, 0x61, 0x6c, 0};

static JJChar jjstrLiteralChars_29[] = {0x6e, 0x69, 0x6c, 0};
static JJChar jjstrLiteralChars_30[] = {0x6f, 0x72, 0};

static JJChar jjstrLiteralChars_31[] = {0x70, 0x61, 0x63, 0x6b, 0x61, 0x67, 0x65, 0};

static JJChar jjstrLiteralChars_32[] = {0x70, 0x72, 0x6f, 0x70, 0x65, 0x72, 0x74, 0x79, 0};
static JJChar jjstrLiteralChars_33[] = {0x70, 0x75, 0x62, 0x6c, 0x69, 0x63, 0};

static JJChar jjstrLiteralChars_34[] = {0x72, 0x65, 0x61, 0x64, 0x6f, 0x6e, 0x6c, 0x79, 0};

static JJChar jjstrLiteralChars_35[] = {0x72, 0x65, 0x61, 0x64, 0x77, 0x72, 0x69, 0x74, 0x65, 0};
static JJChar jjstrLiteralChars_36[] = {0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0};

static JJChar jjstrLiteralChars_37[] = {0x74, 0x68, 0x65, 0x6e, 0};
static JJChar jjstrLiteralChars_38[] = {0x74, 0x68, 0x69, 0x73, 0};

static JJChar jjstrLiteralChars_39[] = {0x74, 0x72, 0x75, 0x65, 0};
static JJChar jjstrLiteralChars_40[] = {0x74, 0x79, 0x70, 0x65, 0x6f, 0x66, 0};

static JJChar jjstrLiteralChars_41[] = {0x75, 0x73, 0x69, 0x6e, 0x67, 0};
static JJChar jjstrLiteralChars_42[] = {0x77, 0x68, 0x65, 0x6e, 0};

static JJChar jjstrLiteralChars_43[] = {0x77, 0x68, 0x69, 0x6c, 0x65, 0};

static JJChar jjstrLiteralChars_44[] = {0x77, 0x72, 0x69, 0x74, 0x65, 0x6f, 0x6e, 0x6c, 0x79, 0};
static JJChar jjstrLiteralChars_45[] = {0};
static JJChar jjstrLiteralChars_46[] = {0};
static JJChar jjstrLiteralChars_47[] = {0};
static JJChar jjstrLiteralChars_48[] = {0};
static JJChar jjstrLiteralChars_49[] = {0};
static JJChar jjstrLiteralChars_50[] = {0};
static JJChar jjstrLiteralChars_51[] = {0};
static JJChar jjstrLiteralChars_52[] = {0};
static JJChar jjstrLiteralChars_53[] = {0};
static JJChar jjstrLiteralChars_54[] = {0};
static JJChar jjstrLiteralChars_55[] = {0};

static JJChar jjstrLiteralChars_56[] = {0x3b, 0};
static JJChar jjstrLiteralChars_57[] = {0x2e, 0};

static JJChar jjstrLiteralChars_58[] = {0x2a, 0};
static JJChar jjstrLiteralChars_59[] = {0x3d, 0};

static JJChar jjstrLiteralChars_60[] = {0x28, 0};
static JJChar jjstrLiteralChars_61[] = {0x29, 0};

static JJChar jjstrLiteralChars_62[] = {0x2c, 0};
static JJChar jjstrLiteralChars_63[] = {0x2e, 0x2e, 0x2e, 0};

static JJChar jjstrLiteralChars_64[] = {0x5b, 0};
static JJChar jjstrLiteralChars_65[] = {0x3a, 0};

static JJChar jjstrLiteralChars_66[] = {0x5d, 0};
static JJChar jjstrLiteralChars_67[] = {0x2b, 0x2b, 0};

static JJChar jjstrLiteralChars_68[] = {0x2d, 0x2d, 0};
static JJChar jjstrLiteralChars_69[] = {0x7b, 0};

static JJChar jjstrLiteralChars_70[] = {0x7d, 0};
static JJChar jjstrLiteralChars_71[] = {0x2a, 0x3d, 0};

static JJChar jjstrLiteralChars_72[] = {0x2f, 0x3d, 0};
static JJChar jjstrLiteralChars_73[] = {0x25, 0x3d, 0};

static JJChar jjstrLiteralChars_74[] = {0x2b, 0x3d, 0};
static JJChar jjstrLiteralChars_75[] = {0x2d, 0x3d, 0};

static JJChar jjstrLiteralChars_76[] = {0x26, 0x3d, 0};
static JJChar jjstrLiteralChars_77[] = {0x5e, 0x3d, 0};

static JJChar jjstrLiteralChars_78[] = {0x7c, 0x3d, 0};
static JJChar jjstrLiteralChars_79[] = {0x3f, 0};

static JJChar jjstrLiteralChars_80[] = {0x7c, 0x7c, 0};
static JJChar jjstrLiteralChars_81[] = {0x26, 0x26, 0};

static JJChar jjstrLiteralChars_82[] = {0x7c, 0};
static JJChar jjstrLiteralChars_83[] = {0x5e, 0};

static JJChar jjstrLiteralChars_84[] = {0x26, 0};
static JJChar jjstrLiteralChars_85[] = {0x3d, 0x3d, 0};

static JJChar jjstrLiteralChars_86[] = {0x7e, 0x3d, 0};
static JJChar jjstrLiteralChars_87[] = {0x3c, 0};

static JJChar jjstrLiteralChars_88[] = {0x3e, 0};
static JJChar jjstrLiteralChars_89[] = {0x3c, 0x3d, 0};

static JJChar jjstrLiteralChars_90[] = {0x3e, 0x3d, 0};
static JJChar jjstrLiteralChars_91[] = {0x3c, 0x3c, 0};

static JJChar jjstrLiteralChars_92[] = {0x3e, 0x3e, 0};
static JJChar jjstrLiteralChars_93[] = {0x3e, 0x3e, 0x3e, 0};

static JJChar jjstrLiteralChars_94[] = {0x2b, 0};
static JJChar jjstrLiteralChars_95[] = {0x2d, 0};

static JJChar jjstrLiteralChars_96[] = {0x2f, 0};
static JJChar jjstrLiteralChars_97[] = {0x25, 0};

static JJChar jjstrLiteralChars_98[] = {0x7e, 0};
static JJChar jjstrLiteralChars_99[] = {0x21, 0};

static JJChar jjstrLiteralChars_100[] = {0x23, 0};
static const JJString jjstrLiteralImages[] = {
jjstrLiteralChars_0, 
jjstrLiteralChars_1, 
jjstrLiteralChars_2, 
jjstrLiteralChars_3, 
jjstrLiteralChars_4, 
jjstrLiteralChars_5, 
jjstrLiteralChars_6, 
jjstrLiteralChars_7, 
jjstrLiteralChars_8, 
jjstrLiteralChars_9, 
jjstrLiteralChars_10, 
jjstrLiteralChars_11, 
jjstrLiteralChars_12, 
jjstrLiteralChars_13, 
jjstrLiteralChars_14, 
jjstrLiteralChars_15, 
jjstrLiteralChars_16, 
jjstrLiteralChars_17, 
jjstrLiteralChars_18, 
jjstrLiteralChars_19, 
jjstrLiteralChars_20, 
jjstrLiteralChars_21, 
jjstrLiteralChars_22, 
jjstrLiteralChars_23, 
jjstrLiteralChars_24, 
jjstrLiteralChars_25, 
jjstrLiteralChars_26, 
jjstrLiteralChars_27, 
jjstrLiteralChars_28, 
jjstrLiteralChars_29, 
jjstrLiteralChars_30, 
jjstrLiteralChars_31, 
jjstrLiteralChars_32, 
jjstrLiteralChars_33, 
jjstrLiteralChars_34, 
jjstrLiteralChars_35, 
jjstrLiteralChars_36, 
jjstrLiteralChars_37, 
jjstrLiteralChars_38, 
jjstrLiteralChars_39, 
jjstrLiteralChars_40, 
jjstrLiteralChars_41, 
jjstrLiteralChars_42, 
jjstrLiteralChars_43, 
jjstrLiteralChars_44, 
jjstrLiteralChars_45, 
jjstrLiteralChars_46, 
jjstrLiteralChars_47, 
jjstrLiteralChars_48, 
jjstrLiteralChars_49, 
jjstrLiteralChars_50, 
jjstrLiteralChars_51, 
jjstrLiteralChars_52, 
jjstrLiteralChars_53, 
jjstrLiteralChars_54, 
jjstrLiteralChars_55, 
jjstrLiteralChars_56, 
jjstrLiteralChars_57, 
jjstrLiteralChars_58, 
jjstrLiteralChars_59, 
jjstrLiteralChars_60, 
jjstrLiteralChars_61, 
jjstrLiteralChars_62, 
jjstrLiteralChars_63, 
jjstrLiteralChars_64, 
jjstrLiteralChars_65, 
jjstrLiteralChars_66, 
jjstrLiteralChars_67, 
jjstrLiteralChars_68, 
jjstrLiteralChars_69, 
jjstrLiteralChars_70, 
jjstrLiteralChars_71, 
jjstrLiteralChars_72, 
jjstrLiteralChars_73, 
jjstrLiteralChars_74, 
jjstrLiteralChars_75, 
jjstrLiteralChars_76, 
jjstrLiteralChars_77, 
jjstrLiteralChars_78, 
jjstrLiteralChars_79, 
jjstrLiteralChars_80, 
jjstrLiteralChars_81, 
jjstrLiteralChars_82, 
jjstrLiteralChars_83, 
jjstrLiteralChars_84, 
jjstrLiteralChars_85, 
jjstrLiteralChars_86, 
jjstrLiteralChars_87, 
jjstrLiteralChars_88, 
jjstrLiteralChars_89, 
jjstrLiteralChars_90, 
jjstrLiteralChars_91, 
jjstrLiteralChars_92, 
jjstrLiteralChars_93, 
jjstrLiteralChars_94, 
jjstrLiteralChars_95, 
jjstrLiteralChars_96, 
jjstrLiteralChars_97, 
jjstrLiteralChars_98, 
jjstrLiteralChars_99, 
jjstrLiteralChars_100, 
};

/** Lexer state names. */
static const JJChar lexStateNames_arr_0[] = 
{0x44, 0x45, 0x46, 0x41, 0x55, 0x4c, 0x54, 0};
static const JJChar lexStateNames_arr_1[] = 
{0x49, 0x4e, 0x5f, 0x53, 0x49, 0x4e, 0x47, 0x4c, 0x45, 0x5f, 0x4c, 0x49, 0x4e, 0x45, 0x5f, 0x43, 0x4f, 0x4d, 0x4d, 0x45, 0x4e, 0x54, 0};
static const JJChar lexStateNames_arr_2[] = 
{0x49, 0x4e, 0x5f, 0x46, 0x4f, 0x52, 0x4d, 0x41, 0x4c, 0x5f, 0x43, 0x4f, 0x4d, 0x4d, 0x45, 0x4e, 0x54, 0};
static const JJChar lexStateNames_arr_3[] = 
{0x49, 0x4e, 0x5f, 0x4d, 0x55, 0x4c, 0x54, 0x49, 0x5f, 0x4c, 0x49, 0x4e, 0x45, 0x5f, 0x43, 0x4f, 0x4d, 0x4d, 0x45, 0x4e, 0x54, 0};
static const JJString lexStateNames[] = {
lexStateNames_arr_0, 
lexStateNames_arr_1, 
lexStateNames_arr_2, 
lexStateNames_arr_3, 
};

/** Lex State array. */
static const int jjnewLexState[] = {
   -1, -1, -1, -1, -1, 1, 2, 3, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 
   -1, 
};
static const unsigned long long jjtoToken[] = {
   0xff1d3ffffffff001ULL, 0x1fffffffffULL, 
};
static const unsigned long long jjtoSkip[] = {
   0x71eULL, 0x0ULL, 
};
static const unsigned long long jjtoSpecial[] = {
   0x700ULL, 0x0ULL, 
};

  void  OrbTokenManager::setDebugStream(FILE *ds){ debugStream = ds; }

 int OrbTokenManager::jjStopStringLiteralDfa_0(int pos, unsigned long long active0, unsigned long long active1){
   switch (pos)
   {
      case 0:
         if ((active0 & 0x8200000000000000ULL) != 0L)
            return 10;
         if ((active0 & 0xa0ULL) != 0L || (active1 & 0x100000100ULL) != 0L)
            return 2;
         if ((active0 & 0x1ffffffff000ULL) != 0L)
         {
            jjmatchedKind = 52;
            return 37;
         }
         return -1;
      case 1:
         if ((active0 & 0x80ULL) != 0L)
            return 0;
         if ((active0 & 0x4c080000ULL) != 0L)
            return 37;
         if ((active0 & 0x1fffb3f7f000ULL) != 0L)
         {
            if (jjmatchedPos != 1)
            {
               jjmatchedKind = 52;
               jjmatchedPos = 1;
            }
            return 37;
         }
         return -1;
      case 2:
         if ((active0 & 0x21402000ULL) != 0L)
            return 37;
         if ((active0 & 0x1fff92b7d000ULL) != 0L)
         {
            jjmatchedKind = 52;
            jjmatchedPos = 2;
            return 37;
         }
         return -1;
      case 3:
         if ((active0 & 0x1b1f92875000ULL) != 0L)
         {
            jjmatchedKind = 52;
            jjmatchedPos = 3;
            return 37;
         }
         if ((active0 & 0x4e000308000ULL) != 0L)
            return 37;
         return -1;
      case 4:
         if ((active0 & 0x111f82060000ULL) != 0L)
         {
            jjmatchedKind = 52;
            jjmatchedPos = 4;
            return 37;
         }
         if ((active0 & 0xa0010815000ULL) != 0L)
            return 37;
         return -1;
      case 5:
         if ((active0 & 0x11200000000ULL) != 0L)
            return 37;
         if ((active0 & 0x100d82060000ULL) != 0L)
         {
            jjmatchedKind = 52;
            jjmatchedPos = 5;
            return 37;
         }
         return -1;
      case 6:
         if ((active0 & 0x100d02020000ULL) != 0L)
         {
            jjmatchedKind = 52;
            jjmatchedPos = 6;
            return 37;
         }
         if ((active0 & 0x80040000ULL) != 0L)
            return 37;
         return -1;
      case 7:
         if ((active0 & 0x100800000000ULL) != 0L)
         {
            jjmatchedKind = 52;
            jjmatchedPos = 7;
            return 37;
         }
         if ((active0 & 0x502020000ULL) != 0L)
            return 37;
         return -1;
      default :
         return -1;
   }
}

int  OrbTokenManager::jjStartNfa_0(int pos, unsigned long long active0, unsigned long long active1){
   return jjMoveNfa_0(jjStopStringLiteralDfa_0(pos, active0, active1), pos + 1);
}

 int  OrbTokenManager::jjStopAtPos(int pos, int kind){
   jjmatchedKind = kind;
   jjmatchedPos = pos;
   return pos + 1;
}

 int  OrbTokenManager::jjMoveStringLiteralDfa0_0(){
   switch(curChar)
   {
      case 33:
         return jjStopAtPos(0, 99);
      case 35:
         return jjStopAtPos(0, 100);
      case 37:
         jjmatchedKind = 97;
         return jjMoveStringLiteralDfa1_0(0x0ULL, 0x200ULL);
      case 38:
         jjmatchedKind = 84;
         return jjMoveStringLiteralDfa1_0(0x0ULL, 0x21000ULL);
      case 40:
         return jjStopAtPos(0, 60);
      case 41:
         return jjStopAtPos(0, 61);
      case 42:
         jjmatchedKind = 58;
         return jjMoveStringLiteralDfa1_0(0x0ULL, 0x80ULL);
      case 43:
         jjmatchedKind = 94;
         return jjMoveStringLiteralDfa1_0(0x0ULL, 0x408ULL);
      case 44:
         return jjStopAtPos(0, 62);
      case 45:
         jjmatchedKind = 95;
         return jjMoveStringLiteralDfa1_0(0x0ULL, 0x810ULL);
      case 46:
         jjmatchedKind = 57;
         return jjMoveStringLiteralDfa1_0(0x8000000000000000ULL, 0x0ULL);
      case 47:
         jjmatchedKind = 96;
         return jjMoveStringLiteralDfa1_0(0xa0ULL, 0x100ULL);
      case 58:
         return jjStopAtPos(0, 65);
      case 59:
         return jjStopAtPos(0, 56);
      case 60:
         jjmatchedKind = 87;
         return jjMoveStringLiteralDfa1_0(0x0ULL, 0xa000000ULL);
      case 61:
         jjmatchedKind = 59;
         return jjMoveStringLiteralDfa1_0(0x0ULL, 0x200000ULL);
      case 62:
         jjmatchedKind = 88;
         return jjMoveStringLiteralDfa1_0(0x0ULL, 0x34000000ULL);
      case 63:
         return jjStopAtPos(0, 79);
      case 91:
         return jjStopAtPos(0, 64);
      case 93:
         return jjStopAtPos(0, 66);
      case 94:
         jjmatchedKind = 83;
         return jjMoveStringLiteralDfa1_0(0x0ULL, 0x2000ULL);
      case 97:
         return jjMoveStringLiteralDfa1_0(0x3000ULL, 0x0ULL);
      case 98:
         return jjMoveStringLiteralDfa1_0(0x4000ULL, 0x0ULL);
      case 99:
         return jjMoveStringLiteralDfa1_0(0x38000ULL, 0x0ULL);
      case 100:
         return jjMoveStringLiteralDfa1_0(0xc0000ULL, 0x0ULL);
      case 101:
         return jjMoveStringLiteralDfa1_0(0x700000ULL, 0x0ULL);
      case 102:
         return jjMoveStringLiteralDfa1_0(0x3800000ULL, 0x0ULL);
      case 105:
         return jjMoveStringLiteralDfa1_0(0xc000000ULL, 0x0ULL);
      case 108:
         return jjMoveStringLiteralDfa1_0(0x10000000ULL, 0x0ULL);
      case 110:
         return jjMoveStringLiteralDfa1_0(0x20000000ULL, 0x0ULL);
      case 111:
         return jjMoveStringLiteralDfa1_0(0x40000000ULL, 0x0ULL);
      case 112:
         return jjMoveStringLiteralDfa1_0(0x380000000ULL, 0x0ULL);
      case 114:
         return jjMoveStringLiteralDfa1_0(0x1c00000000ULL, 0x0ULL);
      case 116:
         return jjMoveStringLiteralDfa1_0(0x1e000000000ULL, 0x0ULL);
      case 117:
         return jjMoveStringLiteralDfa1_0(0x20000000000ULL, 0x0ULL);
      case 119:
         return jjMoveStringLiteralDfa1_0(0x1c0000000000ULL, 0x0ULL);
      case 123:
         return jjStopAtPos(0, 69);
      case 124:
         jjmatchedKind = 82;
         return jjMoveStringLiteralDfa1_0(0x0ULL, 0x14000ULL);
      case 125:
         return jjStopAtPos(0, 70);
      case 126:
         jjmatchedKind = 98;
         return jjMoveStringLiteralDfa1_0(0x0ULL, 0x400000ULL);
      default :
         return jjMoveNfa_0(3, 0);
   }
}

 int  OrbTokenManager::jjMoveStringLiteralDfa1_0(unsigned long long active0, unsigned long long active1){
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(0, active0, active1);
      return 1;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 38:
         if ((active1 & 0x20000ULL) != 0L)
            return jjStopAtPos(1, 81);
         break;
      case 42:
         if ((active0 & 0x80ULL) != 0L)
            return jjStartNfaWithStates_0(1, 7, 0);
         break;
      case 43:
         if ((active1 & 0x8ULL) != 0L)
            return jjStopAtPos(1, 67);
         break;
      case 45:
         if ((active1 & 0x10ULL) != 0L)
            return jjStopAtPos(1, 68);
         break;
      case 46:
         return jjMoveStringLiteralDfa2_0(active0, 0x8000000000000000ULL, active1, 0L);
      case 47:
         if ((active0 & 0x20ULL) != 0L)
            return jjStopAtPos(1, 5);
         break;
      case 60:
         if ((active1 & 0x8000000ULL) != 0L)
            return jjStopAtPos(1, 91);
         break;
      case 61:
         if ((active1 & 0x80ULL) != 0L)
            return jjStopAtPos(1, 71);
         else if ((active1 & 0x100ULL) != 0L)
            return jjStopAtPos(1, 72);
         else if ((active1 & 0x200ULL) != 0L)
            return jjStopAtPos(1, 73);
         else if ((active1 & 0x400ULL) != 0L)
            return jjStopAtPos(1, 74);
         else if ((active1 & 0x800ULL) != 0L)
            return jjStopAtPos(1, 75);
         else if ((active1 & 0x1000ULL) != 0L)
            return jjStopAtPos(1, 76);
         else if ((active1 & 0x2000ULL) != 0L)
            return jjStopAtPos(1, 77);
         else if ((active1 & 0x4000ULL) != 0L)
            return jjStopAtPos(1, 78);
         else if ((active1 & 0x200000ULL) != 0L)
            return jjStopAtPos(1, 85);
         else if ((active1 & 0x400000ULL) != 0L)
            return jjStopAtPos(1, 86);
         else if ((active1 & 0x2000000ULL) != 0L)
            return jjStopAtPos(1, 89);
         else if ((active1 & 0x4000000ULL) != 0L)
            return jjStopAtPos(1, 90);
         break;
      case 62:
         if ((active1 & 0x10000000ULL) != 0L)
         {
            jjmatchedKind = 92;
            jjmatchedPos = 1;
         }
         return jjMoveStringLiteralDfa2_0(active0, 0L, active1, 0x20000000ULL);
      case 97:
         return jjMoveStringLiteralDfa2_0(active0, 0x80808000ULL, active1, 0L);
      case 101:
         return jjMoveStringLiteralDfa2_0(active0, 0x1c00040000ULL, active1, 0L);
      case 102:
         if ((active0 & 0x4000000ULL) != 0L)
            return jjStartNfaWithStates_0(1, 26, 37);
         break;
      case 104:
         return jjMoveStringLiteralDfa2_0(active0, 0xc6000000000ULL, active1, 0L);
      case 105:
         return jjMoveStringLiteralDfa2_0(active0, 0x20000000ULL, active1, 0L);
      case 108:
         return jjMoveStringLiteralDfa2_0(active0, 0x301000ULL, active1, 0L);
      case 110:
         return jjMoveStringLiteralDfa2_0(active0, 0x402000ULL, active1, 0L);
      case 111:
         if ((active0 & 0x80000ULL) != 0L)
            return jjStartNfaWithStates_0(1, 19, 37);
         return jjMoveStringLiteralDfa2_0(active0, 0x11030000ULL, active1, 0L);
      case 114:
         if ((active0 & 0x40000000ULL) != 0L)
            return jjStartNfaWithStates_0(1, 30, 37);
         return jjMoveStringLiteralDfa2_0(active0, 0x108100004000ULL, active1, 0L);
      case 115:
         if ((active0 & 0x8000000ULL) != 0L)
            return jjStartNfaWithStates_0(1, 27, 37);
         return jjMoveStringLiteralDfa2_0(active0, 0x20000000000ULL, active1, 0L);
      case 117:
         return jjMoveStringLiteralDfa2_0(active0, 0x202000000ULL, active1, 0L);
      case 121:
         return jjMoveStringLiteralDfa2_0(active0, 0x10000000000ULL, active1, 0L);
      case 124:
         if ((active1 & 0x10000ULL) != 0L)
            return jjStopAtPos(1, 80);
         break;
      default :
         break;
   }
   return jjStartNfa_0(0, active0, active1);
}

 int  OrbTokenManager::jjMoveStringLiteralDfa2_0(unsigned long long old0, unsigned long long active0, unsigned long long old1, unsigned long long active1){
   if (((active0 &= old0) | (active1 &= old1)) == 0L)
      return jjStartNfa_0(0, old0, old1);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(1, active0, active1);
      return 2;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 46:
         if ((active0 & 0x8000000000000000ULL) != 0L)
            return jjStopAtPos(2, 63);
         break;
      case 62:
         if ((active1 & 0x20000000ULL) != 0L)
            return jjStopAtPos(2, 93);
         break;
      case 97:
         return jjMoveStringLiteralDfa3_0(active0, 0xc00000000ULL, active1, 0L);
      case 98:
         return jjMoveStringLiteralDfa3_0(active0, 0x200000000ULL, active1, 0L);
      case 99:
         return jjMoveStringLiteralDfa3_0(active0, 0x90000000ULL, active1, 0L);
      case 100:
         if ((active0 & 0x2000ULL) != 0L)
            return jjStartNfaWithStates_0(2, 13, 37);
         else if ((active0 & 0x400000ULL) != 0L)
            return jjStartNfaWithStates_0(2, 22, 37);
         break;
      case 101:
         return jjMoveStringLiteralDfa3_0(active0, 0x42000004000ULL, active1, 0L);
      case 102:
         return jjMoveStringLiteralDfa3_0(active0, 0x40000ULL, active1, 0L);
      case 105:
         return jjMoveStringLiteralDfa3_0(active0, 0x1a4000101000ULL, active1, 0L);
      case 108:
         if ((active0 & 0x20000000ULL) != 0L)
            return jjStartNfaWithStates_0(2, 29, 37);
         return jjMoveStringLiteralDfa3_0(active0, 0x800000ULL, active1, 0L);
      case 110:
         return jjMoveStringLiteralDfa3_0(active0, 0x2030000ULL, active1, 0L);
      case 111:
         return jjMoveStringLiteralDfa3_0(active0, 0x100000000ULL, active1, 0L);
      case 112:
         return jjMoveStringLiteralDfa3_0(active0, 0x10000000000ULL, active1, 0L);
      case 114:
         if ((active0 & 0x1000000ULL) != 0L)
            return jjStartNfaWithStates_0(2, 24, 37);
         break;
      case 115:
         return jjMoveStringLiteralDfa3_0(active0, 0x208000ULL, active1, 0L);
      case 116:
         return jjMoveStringLiteralDfa3_0(active0, 0x1000000000ULL, active1, 0L);
      case 117:
         return jjMoveStringLiteralDfa3_0(active0, 0x8000000000ULL, active1, 0L);
      default :
         break;
   }
   return jjStartNfa_0(1, active0, active1);
}

 int  OrbTokenManager::jjMoveStringLiteralDfa3_0(unsigned long long old0, unsigned long long active0, unsigned long long old1, unsigned long long active1){
   if (((active0 &= old0) | (active1 &= old1)) == 0L)
      return jjStartNfa_0(1, old0, old1);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(2, active0, 0L);
      return 3;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 97:
         return jjMoveStringLiteralDfa4_0(active0, 0x10045000ULL);
      case 99:
         return jjMoveStringLiteralDfa4_0(active0, 0x2000000ULL);
      case 100:
         return jjMoveStringLiteralDfa4_0(active0, 0xc00000000ULL);
      case 101:
         if ((active0 & 0x8000ULL) != 0L)
            return jjStartNfaWithStates_0(3, 15, 37);
         else if ((active0 & 0x200000ULL) != 0L)
            return jjStartNfaWithStates_0(3, 21, 37);
         else if ((active0 & 0x8000000000ULL) != 0L)
            return jjStartNfaWithStates_0(3, 39, 37);
         return jjMoveStringLiteralDfa4_0(active0, 0x10000000000ULL);
      case 102:
         if ((active0 & 0x100000ULL) != 0L)
            return jjStartNfaWithStates_0(3, 20, 37);
         break;
      case 107:
         return jjMoveStringLiteralDfa4_0(active0, 0x80000000ULL);
      case 108:
         return jjMoveStringLiteralDfa4_0(active0, 0x80200000000ULL);
      case 110:
         if ((active0 & 0x2000000000ULL) != 0L)
            return jjStartNfaWithStates_0(3, 37, 37);
         else if ((active0 & 0x40000000000ULL) != 0L)
            return jjStartNfaWithStates_0(3, 42, 37);
         return jjMoveStringLiteralDfa4_0(active0, 0x20000000000ULL);
      case 112:
         return jjMoveStringLiteralDfa4_0(active0, 0x100000000ULL);
      case 115:
         if ((active0 & 0x4000000000ULL) != 0L)
            return jjStartNfaWithStates_0(3, 38, 37);
         return jjMoveStringLiteralDfa4_0(active0, 0x810000ULL);
      case 116:
         return jjMoveStringLiteralDfa4_0(active0, 0x100000020000ULL);
      case 117:
         return jjMoveStringLiteralDfa4_0(active0, 0x1000000000ULL);
      default :
         break;
   }
   return jjStartNfa_0(2, active0, 0L);
}

 int  OrbTokenManager::jjMoveStringLiteralDfa4_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(2, old0, 0L);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(3, active0, 0L);
      return 4;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 97:
         return jjMoveStringLiteralDfa5_0(active0, 0x80000000ULL);
      case 101:
         if ((active0 & 0x800000ULL) != 0L)
            return jjStartNfaWithStates_0(4, 23, 37);
         else if ((active0 & 0x80000000000ULL) != 0L)
            return jjStartNfaWithStates_0(4, 43, 37);
         return jjMoveStringLiteralDfa5_0(active0, 0x100100000000ULL);
      case 103:
         if ((active0 & 0x20000000000ULL) != 0L)
            return jjStartNfaWithStates_0(4, 41, 37);
         break;
      case 105:
         return jjMoveStringLiteralDfa5_0(active0, 0x200020000ULL);
      case 107:
         if ((active0 & 0x4000ULL) != 0L)
            return jjStartNfaWithStates_0(4, 14, 37);
         break;
      case 108:
         if ((active0 & 0x10000000ULL) != 0L)
            return jjStartNfaWithStates_0(4, 28, 37);
         break;
      case 111:
         return jjMoveStringLiteralDfa5_0(active0, 0x10400000000ULL);
      case 114:
         return jjMoveStringLiteralDfa5_0(active0, 0x1000000000ULL);
      case 115:
         if ((active0 & 0x1000ULL) != 0L)
            return jjStartNfaWithStates_0(4, 12, 37);
         break;
      case 116:
         if ((active0 & 0x10000ULL) != 0L)
            return jjStartNfaWithStates_0(4, 16, 37);
         return jjMoveStringLiteralDfa5_0(active0, 0x2000000ULL);
      case 117:
         return jjMoveStringLiteralDfa5_0(active0, 0x40000ULL);
      case 119:
         return jjMoveStringLiteralDfa5_0(active0, 0x800000000ULL);
      default :
         break;
   }
   return jjStartNfa_0(3, active0, 0L);
}

 int  OrbTokenManager::jjMoveStringLiteralDfa5_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(3, old0, 0L);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(4, active0, 0L);
      return 5;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 99:
         if ((active0 & 0x200000000ULL) != 0L)
            return jjStartNfaWithStates_0(5, 33, 37);
         break;
      case 102:
         if ((active0 & 0x10000000000ULL) != 0L)
            return jjStartNfaWithStates_0(5, 40, 37);
         break;
      case 103:
         return jjMoveStringLiteralDfa6_0(active0, 0x80000000ULL);
      case 105:
         return jjMoveStringLiteralDfa6_0(active0, 0x2000000ULL);
      case 108:
         return jjMoveStringLiteralDfa6_0(active0, 0x40000ULL);
      case 110:
         if ((active0 & 0x1000000000ULL) != 0L)
            return jjStartNfaWithStates_0(5, 36, 37);
         return jjMoveStringLiteralDfa6_0(active0, 0x400020000ULL);
      case 111:
         return jjMoveStringLiteralDfa6_0(active0, 0x100000000000ULL);
      case 114:
         return jjMoveStringLiteralDfa6_0(active0, 0x900000000ULL);
      default :
         break;
   }
   return jjStartNfa_0(4, active0, 0L);
}

 int  OrbTokenManager::jjMoveStringLiteralDfa6_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(4, old0, 0L);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(5, active0, 0L);
      return 6;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 101:
         if ((active0 & 0x80000000ULL) != 0L)
            return jjStartNfaWithStates_0(6, 31, 37);
         break;
      case 105:
         return jjMoveStringLiteralDfa7_0(active0, 0x800000000ULL);
      case 108:
         return jjMoveStringLiteralDfa7_0(active0, 0x400000000ULL);
      case 110:
         return jjMoveStringLiteralDfa7_0(active0, 0x100000000000ULL);
      case 111:
         return jjMoveStringLiteralDfa7_0(active0, 0x2000000ULL);
      case 116:
         if ((active0 & 0x40000ULL) != 0L)
            return jjStartNfaWithStates_0(6, 18, 37);
         return jjMoveStringLiteralDfa7_0(active0, 0x100000000ULL);
      case 117:
         return jjMoveStringLiteralDfa7_0(active0, 0x20000ULL);
      default :
         break;
   }
   return jjStartNfa_0(5, active0, 0L);
}

 int  OrbTokenManager::jjMoveStringLiteralDfa7_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(5, old0, 0L);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(6, active0, 0L);
      return 7;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 101:
         if ((active0 & 0x20000ULL) != 0L)
            return jjStartNfaWithStates_0(7, 17, 37);
         break;
      case 108:
         return jjMoveStringLiteralDfa8_0(active0, 0x100000000000ULL);
      case 110:
         if ((active0 & 0x2000000ULL) != 0L)
            return jjStartNfaWithStates_0(7, 25, 37);
         break;
      case 116:
         return jjMoveStringLiteralDfa8_0(active0, 0x800000000ULL);
      case 121:
         if ((active0 & 0x100000000ULL) != 0L)
            return jjStartNfaWithStates_0(7, 32, 37);
         else if ((active0 & 0x400000000ULL) != 0L)
            return jjStartNfaWithStates_0(7, 34, 37);
         break;
      default :
         break;
   }
   return jjStartNfa_0(6, active0, 0L);
}

 int  OrbTokenManager::jjMoveStringLiteralDfa8_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(6, old0, 0L);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(7, active0, 0L);
      return 8;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 101:
         if ((active0 & 0x800000000ULL) != 0L)
            return jjStartNfaWithStates_0(8, 35, 37);
         break;
      case 121:
         if ((active0 & 0x100000000000ULL) != 0L)
            return jjStartNfaWithStates_0(8, 44, 37);
         break;
      default :
         break;
   }
   return jjStartNfa_0(7, active0, 0L);
}

int OrbTokenManager::jjStartNfaWithStates_0(int pos, int kind, int state){
   jjmatchedKind = kind;
   jjmatchedPos = pos;
   if (input_stream->endOfInput()) { return pos + 1; }
   curChar = input_stream->readChar();
   return jjMoveNfa_0(state, pos + 1);
}

int OrbTokenManager::jjMoveNfa_0(int startState, int curPos){
   int startsAt = 0;
   jjnewStateCnt = 49;
   int i = 1;
   jjstateSet[0] = startState;
   int kind = 0x7fffffff;
   for (;;)
   {
      if (++jjround == 0x7fffffff)
         ReInitRounds();
      if (curChar < 64)
      {
         unsigned long long l = 1ULL << curChar;
         (void)l;
         do
         {
            switch(jjstateSet[--i])
            {
               case 3:
                  if ((0x3ff000000000000ULL & l) != 0L)
                     { jjCheckNAddStates(0, 3); }
                  else if (curChar == 34)
                     { jjCheckNAddStates(4, 6); }
                  else if (curChar == 39)
                     { jjAddStates(7, 8); }
                  else if (curChar == 46)
                     { jjCheckNAdd(10); }
                  else if (curChar == 47)
                     jjstateSet[jjnewStateCnt++] = 2;
                  if ((0x3fe000000000000ULL & l) != 0L)
                  {
                     if (kind > 45)
                        kind = 45;
                     { jjCheckNAdd(5); }
                  }
                  else if (curChar == 48)
                     jjstateSet[jjnewStateCnt++] = 7;
                  break;
               case 0:
                  if (curChar == 42)
                     jjstateSet[jjnewStateCnt++] = 1;
                  break;
               case 1:
                  if ((0xffff7fffffffffffULL & l) != 0L && kind > 6)
                     kind = 6;
                  break;
               case 2:
                  if (curChar == 42)
                     jjstateSet[jjnewStateCnt++] = 0;
                  break;
               case 4:
                  if ((0x3fe000000000000ULL & l) == 0L)
                     break;
                  if (kind > 45)
                     kind = 45;
                  { jjCheckNAdd(5); }
                  break;
               case 5:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 45)
                     kind = 45;
                  { jjCheckNAdd(5); }
                  break;
               case 6:
                  if (curChar == 48)
                     jjstateSet[jjnewStateCnt++] = 7;
                  break;
               case 8:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 45)
                     kind = 45;
                  jjstateSet[jjnewStateCnt++] = 8;
                  break;
               case 9:
                  if (curChar == 46)
                     { jjCheckNAdd(10); }
                  break;
               case 10:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 48)
                     kind = 48;
                  { jjCheckNAddTwoStates(10, 11); }
                  break;
               case 12:
                  if ((0x280000000000ULL & l) != 0L)
                     { jjCheckNAdd(13); }
                  break;
               case 13:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 48)
                     kind = 48;
                  { jjCheckNAdd(13); }
                  break;
               case 14:
                  if (curChar == 39)
                     { jjAddStates(7, 8); }
                  break;
               case 15:
                  if ((0xffffff7fffffdbffULL & l) != 0L)
                     { jjCheckNAdd(16); }
                  break;
               case 16:
                  if (curChar == 39 && kind > 50)
                     kind = 50;
                  break;
               case 18:
                  if ((0x8400000000ULL & l) != 0L)
                     { jjCheckNAdd(16); }
                  break;
               case 20:
                  if ((0x3ff000000000000ULL & l) != 0L)
                     jjstateSet[jjnewStateCnt++] = 21;
                  break;
               case 21:
                  if ((0x3ff000000000000ULL & l) != 0L)
                     jjstateSet[jjnewStateCnt++] = 22;
                  break;
               case 22:
                  if ((0x3ff000000000000ULL & l) != 0L)
                     jjstateSet[jjnewStateCnt++] = 23;
                  break;
               case 23:
                  if ((0x3ff000000000000ULL & l) != 0L)
                     { jjCheckNAdd(16); }
                  break;
               case 24:
                  if (curChar == 34)
                     { jjCheckNAddStates(4, 6); }
                  break;
               case 25:
                  if ((0xfffffffbffffdbffULL & l) != 0L)
                     { jjCheckNAddStates(4, 6); }
                  break;
               case 27:
                  if ((0x8400000000ULL & l) != 0L)
                     { jjCheckNAddStates(4, 6); }
                  break;
               case 28:
                  if (curChar == 34 && kind > 51)
                     kind = 51;
                  break;
               case 30:
                  if ((0x3ff000000000000ULL & l) != 0L)
                     jjstateSet[jjnewStateCnt++] = 31;
                  break;
               case 31:
                  if ((0x3ff000000000000ULL & l) != 0L)
                     jjstateSet[jjnewStateCnt++] = 32;
                  break;
               case 32:
                  if ((0x3ff000000000000ULL & l) != 0L)
                     jjstateSet[jjnewStateCnt++] = 33;
                  break;
               case 33:
                  if ((0x3ff000000000000ULL & l) != 0L)
                     { jjCheckNAddStates(4, 6); }
                  break;
               case 35:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 52)
                     kind = 52;
                  jjstateSet[jjnewStateCnt++] = 35;
                  break;
               case 37:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 52)
                     kind = 52;
                  jjstateSet[jjnewStateCnt++] = 37;
                  break;
               case 38:
                  if ((0x3ff000000000000ULL & l) != 0L)
                     { jjCheckNAddStates(0, 3); }
                  break;
               case 39:
                  if ((0x3ff000000000000ULL & l) != 0L)
                     { jjCheckNAddTwoStates(39, 40); }
                  break;
               case 40:
                  if (curChar != 46)
                     break;
                  if (kind > 48)
                     kind = 48;
                  { jjCheckNAddTwoStates(41, 42); }
                  break;
               case 41:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 48)
                     kind = 48;
                  { jjCheckNAddTwoStates(41, 42); }
                  break;
               case 43:
                  if ((0x280000000000ULL & l) != 0L)
                     { jjCheckNAdd(44); }
                  break;
               case 44:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 48)
                     kind = 48;
                  { jjCheckNAdd(44); }
                  break;
               case 45:
                  if ((0x3ff000000000000ULL & l) != 0L)
                     { jjCheckNAddTwoStates(45, 46); }
                  break;
               case 47:
                  if ((0x280000000000ULL & l) != 0L)
                     { jjCheckNAdd(48); }
                  break;
               case 48:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 48)
                     kind = 48;
                  { jjCheckNAdd(48); }
                  break;
               default : break;
            }
         } while(i != startsAt);
      }
      else if (curChar < 128)
      {
         unsigned long long l = 1ULL << (curChar & 077);
         (void)l;
         do
         {
            switch(jjstateSet[--i])
            {
               case 3:
               case 37:
                  if ((0x7fffffe87fffffeULL & l) == 0L)
                     break;
                  if (kind > 52)
                     kind = 52;
                  { jjCheckNAdd(37); }
                  break;
               case 1:
                  if (kind > 6)
                     kind = 6;
                  break;
               case 7:
                  if ((0x100000001000000ULL & l) != 0L)
                     { jjCheckNAdd(8); }
                  break;
               case 8:
                  if ((0x7e0000007eULL & l) == 0L)
                     break;
                  if (kind > 45)
                     kind = 45;
                  { jjCheckNAdd(8); }
                  break;
               case 11:
                  if ((0x2000000020ULL & l) != 0L)
                     { jjAddStates(9, 10); }
                  break;
               case 15:
                  if ((0xffffffffefffffffULL & l) != 0L)
                     { jjCheckNAdd(16); }
                  break;
               case 17:
                  if (curChar == 92)
                     { jjAddStates(11, 12); }
                  break;
               case 18:
                  if ((0x14404410000000ULL & l) != 0L)
                     { jjCheckNAdd(16); }
                  break;
               case 19:
                  if (curChar == 117)
                     jjstateSet[jjnewStateCnt++] = 20;
                  break;
               case 20:
                  if ((0x7e0000007eULL & l) != 0L)
                     jjstateSet[jjnewStateCnt++] = 21;
                  break;
               case 21:
                  if ((0x7e0000007eULL & l) != 0L)
                     jjstateSet[jjnewStateCnt++] = 22;
                  break;
               case 22:
                  if ((0x7e0000007eULL & l) != 0L)
                     jjstateSet[jjnewStateCnt++] = 23;
                  break;
               case 23:
                  if ((0x7e0000007eULL & l) != 0L)
                     { jjCheckNAdd(16); }
                  break;
               case 25:
                  if ((0xffffffffefffffffULL & l) != 0L)
                     { jjCheckNAddStates(4, 6); }
                  break;
               case 26:
                  if (curChar == 92)
                     { jjAddStates(13, 14); }
                  break;
               case 27:
                  if ((0x14404410000000ULL & l) != 0L)
                     { jjCheckNAddStates(4, 6); }
                  break;
               case 29:
                  if (curChar == 117)
                     jjstateSet[jjnewStateCnt++] = 30;
                  break;
               case 30:
                  if ((0x7e0000007eULL & l) != 0L)
                     jjstateSet[jjnewStateCnt++] = 31;
                  break;
               case 31:
                  if ((0x7e0000007eULL & l) != 0L)
                     jjstateSet[jjnewStateCnt++] = 32;
                  break;
               case 32:
                  if ((0x7e0000007eULL & l) != 0L)
                     jjstateSet[jjnewStateCnt++] = 33;
                  break;
               case 33:
                  if ((0x7e0000007eULL & l) != 0L)
                     { jjCheckNAddStates(4, 6); }
                  break;
               case 42:
                  if ((0x2000000020ULL & l) != 0L)
                     { jjAddStates(15, 16); }
                  break;
               case 46:
                  if ((0x2000000020ULL & l) != 0L)
                     { jjAddStates(17, 18); }
                  break;
               default : break;
            }
         } while(i != startsAt);
      }
      else
      {
         int hiByte = (curChar >> 8);
         int i1 = hiByte >> 6;
         unsigned long long l1 = 1ULL << (hiByte & 077);
         int i2 = (curChar & 0xff) >> 6;
         unsigned long long l2 = 1ULL << (curChar & 077);
         do
         {
            switch(jjstateSet[--i])
            {
               case 3:
                  if (!jjCanMove_1(hiByte, i1, i2, l1, l2))
                     break;
                  if (kind > 52)
                     kind = 52;
                  jjstateSet[jjnewStateCnt++] = 35;
                  break;
               case 1:
                  if (jjCanMove_0(hiByte, i1, i2, l1, l2) && kind > 6)
                     kind = 6;
                  break;
               case 15:
                  if (jjCanMove_0(hiByte, i1, i2, l1, l2))
                     jjstateSet[jjnewStateCnt++] = 16;
                  break;
               case 25:
                  if (jjCanMove_0(hiByte, i1, i2, l1, l2))
                     { jjAddStates(4, 6); }
                  break;
               default : if (i1 == 0 || l1 == 0 || i2 == 0 ||  l2 == 0) break; else break;
            }
         } while(i != startsAt);
      }
      if (kind != 0x7fffffff)
      {
         jjmatchedKind = kind;
         jjmatchedPos = curPos;
         kind = 0x7fffffff;
      }
      ++curPos;
      if ((i = jjnewStateCnt), (jjnewStateCnt = startsAt), (i == (startsAt = 49 - startsAt)))
         return curPos;
      if (input_stream->endOfInput()) { return curPos; }
      curChar = input_stream->readChar();
   }
}

 int  OrbTokenManager::jjMoveStringLiteralDfa0_3(){
   switch(curChar)
   {
      case 42:
         return jjMoveStringLiteralDfa1_3(0x400ULL);
      default :
         return 1;
   }
}

 int  OrbTokenManager::jjMoveStringLiteralDfa1_3(unsigned long long active0){
   if (input_stream->endOfInput()) {
      return 1;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 47:
         if ((active0 & 0x400ULL) != 0L)
            return jjStopAtPos(1, 10);
         break;
      default :
         return 2;
   }
   return 2;
}

 int  OrbTokenManager::jjMoveStringLiteralDfa0_1(){
   return jjMoveNfa_1(0, 0);
}

int OrbTokenManager::jjMoveNfa_1(int startState, int curPos){
   int startsAt = 0;
   jjnewStateCnt = 3;
   int i = 1;
   jjstateSet[0] = startState;
   int kind = 0x7fffffff;
   for (;;)
   {
      if (++jjround == 0x7fffffff)
         ReInitRounds();
      if (curChar < 64)
      {
         unsigned long long l = 1ULL << curChar;
         (void)l;
         do
         {
            switch(jjstateSet[--i])
            {
               case 0:
                  if ((0x2400ULL & l) != 0L)
                  {
                     if (kind > 8)
                        kind = 8;
                  }
                  if (curChar == 13)
                     jjstateSet[jjnewStateCnt++] = 1;
                  break;
               case 1:
                  if (curChar == 10 && kind > 8)
                     kind = 8;
                  break;
               case 2:
                  if (curChar == 13)
                     jjstateSet[jjnewStateCnt++] = 1;
                  break;
               default : break;
            }
         } while(i != startsAt);
      }
      else if (curChar < 128)
      {
         unsigned long long l = 1ULL << (curChar & 077);
         (void)l;
         do
         {
            switch(jjstateSet[--i])
            {
               default : break;
            }
         } while(i != startsAt);
      }
      else
      {
         int hiByte = (curChar >> 8);
         int i1 = hiByte >> 6;
         unsigned long long l1 = 1ULL << (hiByte & 077);
         int i2 = (curChar & 0xff) >> 6;
         unsigned long long l2 = 1ULL << (curChar & 077);
         do
         {
            switch(jjstateSet[--i])
            {
               default : if (i1 == 0 || l1 == 0 || i2 == 0 ||  l2 == 0) break; else break;
            }
         } while(i != startsAt);
      }
      if (kind != 0x7fffffff)
      {
         jjmatchedKind = kind;
         jjmatchedPos = curPos;
         kind = 0x7fffffff;
      }
      ++curPos;
      if ((i = jjnewStateCnt), (jjnewStateCnt = startsAt), (i == (startsAt = 3 - startsAt)))
         return curPos;
      if (input_stream->endOfInput()) { return curPos; }
      curChar = input_stream->readChar();
   }
}

 int  OrbTokenManager::jjMoveStringLiteralDfa0_2(){
   switch(curChar)
   {
      case 42:
         return jjMoveStringLiteralDfa1_2(0x200ULL);
      default :
         return 1;
   }
}

 int  OrbTokenManager::jjMoveStringLiteralDfa1_2(unsigned long long active0){
   if (input_stream->endOfInput()) {
      return 1;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 47:
         if ((active0 & 0x200ULL) != 0L)
            return jjStopAtPos(1, 9);
         break;
      default :
         return 2;
   }
   return 2;
}

bool OrbTokenManager::jjCanMove_0(int hiByte, int i1, int i2, unsigned long long l1, unsigned long long l2){
   switch(hiByte)
   {
      case 0:
         return ((jjbitVec2[i2] & l2) != 0L);
      default :
         if ((jjbitVec0[i1] & l1) != 0L)
            return true;
         return false;
   }
}

bool OrbTokenManager::jjCanMove_1(int hiByte, int i1, int i2, unsigned long long l1, unsigned long long l2){
   switch(hiByte)
   {
      case 3:
         return ((jjbitVec3[i2] & l2) != 0L);
      default :
         return false;
   }
}

/** Token literal values. */

Token * OrbTokenManager::jjFillToken(){
   Token *t;
   JJString curTokenImage;
   int beginLine   = -1;
   int endLine     = -1;
   int beginColumn = -1;
   int endColumn   = -1;
   JJString im = jjstrLiteralImages[jjmatchedKind];
   curTokenImage = (im.length() == 0) ? input_stream->GetImage() : im;
   if (input_stream->getTrackLineColumn()) {
     beginLine = input_stream->getBeginLine();
     beginColumn = input_stream->getBeginColumn();
     endLine = input_stream->getEndLine();
     endColumn = input_stream->getEndColumn();
   }
   t = Token::newToken(jjmatchedKind);
   t->kind = jjmatchedKind;
   t->image = curTokenImage;
   t->specialToken = nullptr;
   t->next = nullptr;

   if (input_stream->getTrackLineColumn()) {
   t->beginLine = beginLine;
   t->endLine = endLine;
   t->beginColumn = beginColumn;
   t->endColumn = endColumn;
   }

   return t;
}
const int defaultLexState = 0;
/** Get the next Token. */

Token * OrbTokenManager::getNextToken(){
  Token *specialToken = nullptr;
  Token *matchedToken = nullptr;
  int curPos = 0;

  for (;;)
  {
   EOFLoop: 
   if (input_stream->endOfInput())
   {
      jjmatchedKind = 0;
      jjmatchedPos = -1;
      matchedToken = jjFillToken();
      matchedToken->specialToken = specialToken;
      return matchedToken;
   }
   curChar = input_stream->BeginToken();
   image = jjimage;
   image.clear();
   jjimageLen = 0;

   for (;;)
   {
     switch(curLexState)
     {
       case 0:
         { input_stream->backup(0);
            while (curChar <= 32 && (0x100002600ULL & (1ULL << curChar)) != 0L)
         {
         if (input_stream->endOfInput()) { goto EOFLoop; }
         curChar = input_stream->BeginToken();
         }
         }
         jjmatchedKind = 0x7fffffff;
         jjmatchedPos = 0;
         curPos = jjMoveStringLiteralDfa0_0();
         break;
       case 1:
         jjmatchedKind = 0x7fffffff;
         jjmatchedPos = 0;
         curPos = jjMoveStringLiteralDfa0_1();
         if (jjmatchedPos == 0 && jjmatchedKind > 11)
         {
            jjmatchedKind = 11;
         }
         break;
       case 2:
         jjmatchedKind = 0x7fffffff;
         jjmatchedPos = 0;
         curPos = jjMoveStringLiteralDfa0_2();
         if (jjmatchedPos == 0 && jjmatchedKind > 11)
         {
            jjmatchedKind = 11;
         }
         break;
       case 3:
         jjmatchedKind = 0x7fffffff;
         jjmatchedPos = 0;
         curPos = jjMoveStringLiteralDfa0_3();
         if (jjmatchedPos == 0 && jjmatchedKind > 11)
         {
            jjmatchedKind = 11;
         }
         break;
     }
     if (jjmatchedKind != 0x7fffffff)
     {
        if (jjmatchedPos + 1 < curPos)
           input_stream->backup(curPos - jjmatchedPos - 1);
        if ((jjtoToken[jjmatchedKind >> 6] & (1ULL << (jjmatchedKind & 077))) != 0L)
        {
           matchedToken = jjFillToken();
           matchedToken->specialToken = specialToken;
       if (jjnewLexState[jjmatchedKind] != -1)
         curLexState = jjnewLexState[jjmatchedKind];
           return matchedToken;
        }
        else if ((jjtoSkip[jjmatchedKind >> 6] & (1ULL << (jjmatchedKind & 077))) != 0L)
        {
           if ((jjtoSpecial[jjmatchedKind >> 6] & (1ULL << (jjmatchedKind & 077))) != 0L)
           {
              matchedToken = jjFillToken();
              if (specialToken == nullptr)
                 specialToken = matchedToken;
              else
              {
                 matchedToken->specialToken = specialToken;
                 specialToken = (specialToken->next = matchedToken);
              }
              SkipLexicalActions(matchedToken);
           }
           else
              SkipLexicalActions(nullptr);
         if (jjnewLexState[jjmatchedKind] != -1)
           curLexState = jjnewLexState[jjmatchedKind];
           goto EOFLoop;
        }
        MoreLexicalActions();
      if (jjnewLexState[jjmatchedKind] != -1)
        curLexState = jjnewLexState[jjmatchedKind];
        curPos = 0;
        jjmatchedKind = 0x7fffffff;
     if (!input_stream->endOfInput()) {
           curChar = input_stream->readChar();
     continue;
   }
     }
     int error_line = input_stream->getEndLine();
     int error_column = input_stream->getEndColumn();
     JJString error_after;
     bool EOFSeen = false;
     if (input_stream->endOfInput()) {
        EOFSeen = true;
        error_after = curPos <= 1 ? EMPTY : input_stream->GetImage();
        if (curChar == '\n' || curChar == '\r') {
           error_line++;
           error_column = 0;
        }
        else
           error_column++;
     }
     if (!EOFSeen) {
        error_after = curPos <= 1 ? EMPTY : input_stream->GetImage();
     }
     errorHandler->lexicalError(EOFSeen, curLexState, error_line, error_column, error_after, curChar, this);
   }
  }
}


void  OrbTokenManager::SkipLexicalActions(Token *matchedToken){
   switch(jjmatchedKind)
   {
      default :
         break;
   }
}

void  OrbTokenManager::MoreLexicalActions(){
   jjimageLen += (lengthOfMatch = jjmatchedPos + 1);
   switch(jjmatchedKind)
   {
      case 6 : {
         image.append(input_stream->GetSuffix(jjimageLen));
         jjimageLen = 0;
                   input_stream.backup(1);
         break;
       }
      default :
         break;
   }
}
  /** Reinitialise parser. */
  void OrbTokenManager::ReInit(JAVACC_CHARSTREAM *stream, int lexState) {
    clear();
    jjmatchedPos = jjnewStateCnt = 0;
    curLexState = lexState;
    input_stream = stream;
    ReInitRounds();
    debugStream = stdout; // init
    SwitchTo(lexState);
    errorHandler = new TokenManagerErrorHandler();
  }

  void OrbTokenManager::ReInitRounds() {
    int i;
    jjround = 0x80000001;
    for (i = 49; i-- > 0;)
      jjrounds[i] = 0x80000000;
  }

  /** Switch to specified lex state. */
  void OrbTokenManager::SwitchTo(int lexState) {
    if (lexState >= 4 || lexState < 0) {
      JJString message;
#ifdef WIDE_CHAR
      message += L"Error: Ignoring invalid lexical state : ";
      message += lexState; message += L". State unchanged.";
#else
      message += "Error: Ignoring invalid lexical state : ";
      message += lexState; message += ". State unchanged.";
#endif
      throw new TokenMgrError(message, INVALID_LEXICAL_STATE);
    } else
      curLexState = lexState;
  }

  /** Constructor. */
  OrbTokenManager::OrbTokenManager (JAVACC_CHARSTREAM *stream, int lexState)
  {
    input_stream = nullptr;
    ReInit(stream, lexState);
  }

  // Destructor
  OrbTokenManager::~OrbTokenManager () {
    clear();
  }

  // clear
  void OrbTokenManager::clear() {
    //Since input_stream was generated outside of TokenManager
    //TokenManager should not take care of deleting it
    //if (input_stream) delete input_stream;
    if (errorHandler) delete errorHandler, errorHandler = nullptr;    
  }


