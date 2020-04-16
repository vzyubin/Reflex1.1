/*===================================================================*/
/*====== Institute Of Automation And Electrometry SB RAS ============*/
/*====== Pr. Acad. Koptyuga, 1. Novosibirsk. Russia =================*/
/*===================================================================*/
/*====== (c) Copyright 2002, IA&E, NSK, RU ==========================*/
/*===================================================================*/
/*===================================================================*/
/*===================================================================*/
/*====== ��� �����: glob_var.h=======================================*/
/*====== �����    : ����� �������� ���������� =======================*/
/*====== ����     : 2002/07/16 ======================================*/
/*====== �������� : ���� �������� �������� ���������� ���������� ====*/
/*======            ������������ � ��������� ���������� Reflex ======*/
/*===================================================================*/

#ifndef _GLOB_VAR_H
#define _GLOB_VAR_H 1

FILE *fptr_RCS;     /* ��������� �� �������� ���� */
FILE *fptr_LIS;     /* ��������� �� ���� �������� */
FILE *fptr_SYM;     /* ��������� �� ���� �������� */
FILE *fptr_INP;     /* ��������� �� ���� � ���������� ���������� ������� �������� */
FILE *fptr_OUTP;    /* ��������� �� ���� � ���������� ������ �������� �������� */
FILE *fptr_C;       /* ��������� �� ������� �-����, ��������� ���� */
#ifdef GEN_ID
FILE *fptr_ID;      /* ��������� �� ���� �-��������������� */
FILE *fptr_IDC;     /* ��������� �� ���� �-��������������� */


#endif

/*��� ������������ - 2015*/
FILE * fptr_VARIABLES_FOR_TEST;


/*============== Array for file names ====================*/

char InputFileName[FLENGTH];   /* ��� �������� ����� */
char BaseOutputFileName[FLENGTH];  /* ������ ���� �������� ������ */

INT16S File_Number = 0;
INT16S Flag_PASS;       /* ��� select_unit ����� ������� 0 - ���������., 1 - ������. + ������������� */
INT16S Flag_CASE;       /* ��� select_unit (������ � Var(0) ��� � State(1)) */
INT16S Flag_LIS;        /* ���� ������������� �������� �������� */
INT16S Flag_MAP;        /* ���� ������������� �������� ����� �������� */
INT16S Flag_TEST;        /* ���� ������������� �������� ����� ���������� */
INT16S Flag_CONFIG;        /* ���� ������������� �������� ����� .cfg */
INT16S Flag_NAMES;		/* ���� ��������� ��-���� �� ���� ��������� � ���������� */
INT16S Flag_CPP;        /* ���� ������������� �������� ����� ����� */
INT16S Flag_PROC_DESCR;        /* ���� ������������� �������� �����-��������  */



INT16S Flag_Unexpect;   /* ��� ���������� ������ ������ ��� ������� ������������ ������� ����� EOF */
INT16S Flag_CString;         /* ���� �-������ */
INT16S Flag_Comment;          /* ���� ����������� */
char  TEST_FLAG = 0;

INT32S CFileMAXLen;         /* ����������� �� ����� �-����� */

INT16S err_flag;
INT16S error_count;       /* ������� ������ */
INT16S line_count;          /* ������� ����� �������������� ����� */
INT16S warning_count;       /* ������� �������������� */

INT16S JmpFlag;             /* ���� ��� �������� ��������� �� ��������� */


/*============== Reserved word for RCSL86 ==============*/
char rezword[RWNUM][RWLEN];

/*============== Reserved word for RCSL86 ==============*/
char ALT_rezword[RWNUM][RWLEN] = {
  "2@##", "�����",
  "����", "�����",
  "����", "�����",
  "����", "�����",
  "���", "����",
  "��", "���",
  "���", "����",
  "����", "����",
  "�����", "�������",
  "����", "��",
  "�����", "�",
  "���������", "���",
  "������", "����",
  "����", "������",
  "������", "�����",
  "����", "�����",
  "���������", "��������",
  "���������", "���������",
  "���",				/* SET 1.1*/
  "��������", "�������",	/* 1.1 */
  "��������" , "�����������",
  "������������", "�������",
  "���", "�����",
  "���������", "#��",

/* RW_POINT,              */   "."   ,
/* RW_COMMA,              */   ","   ,
/* RW_COLON,              */   ":"   ,
/* RW_SEMICOLON,          */   ";"   ,
/* RW_OPEN_BRACKET,       */   "["   ,
/* RW_CLOSE_BRACKET,      */   "]"   ,
/* RW_OPEN_PARENTESIS,    */   "("   ,
/* RW_CLOSE_PARENTESIS,   */   ")"   ,
/* RW_OPEN_BRACE,         */   "{"   ,
/* RW_CLOSE_BRACE,        */   "}"   ,

/* RW_BW_COMPLEMENT,      */   "~"   ,
/* RW_NOT,                */   "!"   ,
/* RW_INC,                 */  "++"  ,
/* RW_DEC,                 */  "--"  ,

/* RW_PLUS,               */   "+"   ,
/* RW_MINUS,              */   "-"   ,
/* RW_MUL,                */   "*"   ,
/* RW_DIV,                */   "/"   ,
/* RW_REMINDER,           */   "%"   ,
/* RW_SHFT_LFT,            */  "<<"  ,
/* RW_SHFT_RGHT,           */  ">>"  ,
/* RW_BW_AND,             */   "&"   ,
/* RW_BW_XOR,             */   "^"   ,
/* RW_BW_OR,              */   "|"   ,
/* RW_AND,                 */  "&&"  ,
/* RW_OR,                  */  "||"  ,
/* RW_EQU,                */   "="   ,
/* RW_MUL_EQU,             */  "*="  ,
/* RW_DIV_EQU,             */  "/="  ,
/* RW_REM_EQU,             */  "%="  ,
/* RW_PLUS_EQU,            */  "+="  ,
/* RW_MINUS_EQU,           */  "-="  ,
/* RW_SHFT_LFT_EQU,         */ "<<=" ,
/* RW_SHFT_RGHT_EQU,        */ ">>=" ,
/* RW_BW_AND_EQU,          */  "&="  ,
/* RW_BW_XOR_EQU,          */  "^="  ,
/* RW_BW_OR_EQU,           */  "|="  ,
/* RW_LESS,                */  "<"   ,
/* RW_GREATER,             */  ">"   ,
/* RW_LESS_EQU,            */  "<="  ,
/* RW_GREATER_EQU,         */  ">="  ,
/* RW_EQU_EQU,             */  "=="  ,
/* RW_NOT_EQU,             */  "!=",
  };
/*============== Reserved word for RCSL86 ==============*/
char ENG_rezword[RWNUM][RWLEN] = {
  "2@##", "PROGR",
  "TACT", "CONST",
  "INPUT", "OUTPUT",
  "PROC", "LOCAL",
  "FOR", "ALL",
  "FROM", "BOOL", /* 1.1. LOG -> BOOL */
  "INT", "STATE",
  "STOP", "CONT",
  "START", "TIMEOUT",
  "IF", "THEN",
  "ELSE", "IN",
  "NEXT", "RAM",
  "ERROR", "SHORT",
  "LONG", "SWITCH",
  "CASE", "BREAK",
  "FLOAT", "DOUBLE",
  "DEFAULT", "ACTIVE",
  "INACTIVE", "LOOP",
  "SET",
  "RESET", "RESTART", /* 1.1 */

  "SIGNED" , "UNSIGNED",
  "ENUM", "FUNCTION",
  "TYPE", "VOID",
  "ARGUMENTS", "#C",

/* RW_POINT,              */   "."   ,
/* RW_COMMA,              */   ","   ,
/* RW_COLON,              */   ":"   ,
/* RW_SEMICOLON,          */   ";"   ,
/* RW_OPEN_BRACKET,       */   "["   ,
/* RW_CLOSE_BRACKET,      */   "]"   ,
/* RW_OPEN_PARENTESIS,    */   "("   ,
/* RW_CLOSE_PARENTESIS,   */   ")"   ,
/* RW_OPEN_BRACE,         */   "{"   ,
/* RW_CLOSE_BRACE,        */   "}"   ,

/* RW_BW_COMPLEMENT,      */   "~"   ,
/* RW_NOT,                */   "!"   ,
/* RW_INC,                 */  "++"  ,
/* RW_DEC,                 */  "--"  ,

/* RW_PLUS,               */   "+"   ,
/* RW_MINUS,              */   "-"   ,
/* RW_MUL,                */   "*"   ,
/* RW_DIV,                */   "/"   ,
/* RW_REMINDER,           */   "%"   ,
/* RW_SHFT_LFT,            */  "<<"  ,
/* RW_SHFT_RGHT,           */  ">>"  ,
/* RW_BW_AND,             */   "&"   ,
/* RW_BW_XOR,             */   "^"   ,
/* RW_BW_OR,              */   "|"   ,
/* RW_AND,                 */  "&&"  ,
/* RW_OR,                  */  "||"  ,
/* RW_EQU,                */   "="   ,
/* RW_MUL_EQU,             */  "*="  ,
/* RW_DIV_EQU,             */  "/="  ,
/* RW_REM_EQU,             */  "%="  ,
/* RW_PLUS_EQU,            */  "+="  ,
/* RW_MINUS_EQU,           */  "-="  ,
/* RW_SHFT_LFT_EQU,         */ "<<=" ,
/* RW_SHFT_RGHT_EQU,        */ ">>=" ,
/* RW_BW_AND_EQU,          */  "&="  ,
/* RW_BW_XOR_EQU,          */  "^="  ,
/* RW_BW_OR_EQU,           */  "|="  ,
/* RW_LESS,                */  "<"   ,
/* RW_GREATER,             */  ">"   ,
/* RW_LESS_EQU,            */  "<="  ,
/* RW_GREATER_EQU,         */  ">="  ,
/* RW_EQU_EQU,             */  "=="  ,
/* RW_NOT_EQU,             */  "!=",
};

/*============== Buffers for strings ==============*/
char buffer1[BUFFER_LENGTH];
/* char buffer_NULL[BUFFER_LENGTH]; */

/*============== Buffer for syntax unit ==============*/
char unit[BUFFER_LENGTH];           /* ������� ������� */
char prev_unit[BUFFER_LENGTH];
char spaces[BUFFER_LENGTH];         /* ����-����������� ������� ������� */
char prev_spaces[BUFFER_LENGTH];

/*============== Counter for string number ==============*/
INT16S str_count;

char error_array[ERRMSGNUM][ERRMSGLEN];

char warning_array[WRNMSGNUM][WRNMSGLEN] = {" � ������ �����",
"%RCSL-1 -WRNNJ, ��������������. � ��������� ����������� ������� ��������", /* �� ������������ */
"%RCSL-2 -WRNTL, ��������������. ������� ������� ����������� ��������",
"%RCSL-3 -WRCSTR, �������. �-������ ��������� ������ � ����������. ���������� ",
"%RCSL-4 -WRNCT, ������� ������ ������ �����",
"%RCSL-5 -WRNNS, �������� ��� ���������",
"%RCSL-6 -WRNAM, ����������� ��� �����",
"%RCSL-7 -WRNRT, ����������� ����� �����",
"%RCSL-8 -WRNRT, ����������� ������ �����",
"%RCSL-9 -WRNRT, ����������� ����������� �����",
"%RCSL-10-WRNSW, ����������� ����� � ������� � ����� ������",
"%RCSL-11-WRNAM, ��������� ��� ��������",
"%RCSL-12-WRNS, ��������� �����",
"%RCSL-13-WRNERR, ����������� ����� �����",
"%RCSL-14-WRNAR, �������� �������� ����������",
"%RCSL-15-WRNAU, ����������� ������������ �����",
"%RCSL-16-WRNAU, ����������� ��� ��������� � ������� �����",
"%RCSL-17-WRNMP, � ��������� ����������� ������� ��������", /* �� ������������ */
"%RCSL-18-WRNSW, ��������� ������ {",
"%RCSL-19-WRNSW, ��������� ������ }"
};


/*============= Array for diagnostic message ===============*/

char ALT_error_array[ERRMSGNUM][ERRMSGLEN] = {" � ������ �����",
"%RCSL-1 -ERRSW, ������ ����� ������ ���� ������ �����",
"%RCSL-2 -ERRSW, �� ���������� ����� �����",
"%RCSL-3 -ERRAM, ����������� ��� ���������",
"%RCSL-4 -ERTCT, ������� ������ ������ �����",
"%RCSL-5 -ERCNS, �������� ��� ���������",
"%RCSL-6 -ERNAM, ����������� ��� �����",
"%RCSL-7 -ERPRT, ����������� ����� �����",
"%RCSL-8 -ERPRT, ����������� ������ �����",
"%RCSL-9 -ERPRT, ����������� ����������� �����",
"%RCSL-10-ERRSW, ����������� ����� � ������� � ����� ������",
"%RCSL-11-ERNAM, ��������� ��� ��������",
"%RCSL-12-MISS, ��������� �����",
"%RCSL-13-FATERR, ����������� ����� �����",
"%RCSL-14-ERVAR, �������� �������� ����������",
"%RCSL-15-ERPAU, ������ ������������ ������������ ��������",
"%RCSL-16-ERPAU, ����������� ��� ��������� � ������� �������",
"%RCSL-17-ERJMP, � ��������� ����������� ������� ��������",
"%RCSL-18-ERRSW, ��������� ������ {",
"%RCSL-19-ERRSW, ��������� ������ }",
"%RCSL-20-ERRSW, ��������� ������ (",
"%RCSL-21-ERRSW, ��������� ������ )",
"%RCSL-22-ERNAM, ����������� ��� ���������",
"%RCSL-23-ERRSW, ��������� ����������������� ����� ����",
"%RCSL-24-ERNAM, ����������� ��� �������� � ������� ����, ����, �����, �����",
"%RCSL-25-ERJMP, �������� ������� ��������",
"%RCSL-26-ERRSW, ��������� ����������������� ����� ���� ��� ����",
"%RCSL-27-ERNAM, �������� ��� ��������",
"%RCSL-28-ERRSW, ��������� ������ =",
"%RCSL-29-FATERR, ��������� ������. ����������, ��������� � ������� ���������.",
"%RCSL-30-ERRSW, ��������� ������ [",
"%RCSL-31-ERRSW, ��������� ������ ]",
"%RCSL-32-ERRSW, ��������� ����������������� ����� ��",
"%RCSL-33-ERRSW, ��������� ����������������� ����� �",
"%RCSL-34-ERRSW, ��������� ����������������� ����� ����� ��� ���",
"%RCSL-35-ERVAR, ������������ ������������� ����������",
"%RCSL-36-ERNAM, ������� � ����� ������ ��� ����������",
"%RCSL-37-ERNAM, ��������� � ����� ������ ��� ����������",
"%RCSL-38-ERNAM, ���������� � ����� ������ ��� ����������",
"%RCSL-39-ERNAM, ��������� � ����� ������ ��� ����������",
"%RCSL-40-ERNAM, ���� � ����� ������ ��� ����������",
"%RCSL-41-ERNAM, �������� � ����� ������ �� ����������",
"%RCSL-42-ERNAM, ��������� � ����� ������ �� ����������",
"%RCSL-43-ERNAM, ���������� � ����� ������ �� ����������",
"%RCSL-44-ERNAM, ����� � ����� ������ �� ����������",
"%RCSL-45-ERNAM, � ��������� ��������� ����������� �������",
"%RCSL-46-EREST, ������ ���� �����/���������",
"%RCSL-47-ERRSW, ��������� ����������������� ����� ����",
"%RCSL-48-ERSTT, � ������� �������� ����������� ���������",
"%RCSL-49-ERVAR, � ������� �������� ��������� ������������ ����������",
"%RCSL-50-ERCNS, �������� �������� ���������",
"%RCSL-51-ERRAM, ����������� ������� � �������� ������ ������",
"%RCSL-52-ERRAM, ����������� ���������������� ����� � �������� ������ ������",
"%RCSL-53-ERRAM, ����������� ����� �� ��������� ���� � �������� ������ ������",
"%RCSL-54-ERNAM, ��������� ��� ����������",
"%RCSL-55-ERVAL, ��������� ���������� ��������� �����",
"%RCSL-56-ERRSW, ��������� ����������������� ����� ����",
"%RCSL-57-ERSTT, ����������� �������� (��� �������� ��� ���������)",
"%RCSL-58-ERRSW, ��������� ������ ����� ���� ��������� }",
"%RCSL-59-ERRSW, ��������� ������ ����� ���� �������� }",
"%RCSL-60-ERRSW, ��������� ������ ����� ���� ��������� }",
"%RCSL-61-ERRSW, ��������� ������ ����� ���������� ���������� }",
"%RCSL-62-ERRSW, ��������� ����� � ��� ������ { ",
"%RCSL-63-ERRSW, � C-������ ��������� ����������� � ������� �������� �������",
"%RCSL-64-ERRSW, � ��������� ������ ��������� ����������� ���� - %s",
"%RCSL-65-ERRSW, � ���������� ���� FLOAT � DOUBLE �� ������ �������� � ������",
"%RCSL-66-ERRSW, ��������� ������ : (���������)",
"%RCSL-67-ERRSW, ��������� ���.����� ������ ��� ���������",
"%RCSL-68-ERRSW, ��������� �����������",
"%RCSL-69-ERFNM, ��������� ��� �-�������",
"%RCSL-70-ERFNM, ������� � ����� ������ ��� ����������",
"%RCSL-71-ERTYP, ��������� ��������������� ����� ���",
"%RCSL-72-ERDEC, ��������� ����� ����������� ) ��� , ",
"%RCSL-73-ERDEC, ��������� ���������� ",
"%RCSL-74-ERTYP, ��������� �������",
"%RCSL-75-ERVAR, ����������� ������� � ��������� ���������� ",
"%RCSL-76-ERVAR, � ��������� �������� ����������� �������� ���������� ",
"%RCSL-77-ERVAR, ����������� ��������� ������� �������� �����������",
"%RCSL-78-ERSTT, ����� ��������� �������� ������ 127",
"%RCSL-79-ERJMP, � ��������� ����������� ������� ��������",
"%RCSL-80-ERRES, ��������� ��������������� ����� �������",
};

char ENG_error_array[ERRMSGNUM][ERRMSGLEN] = 
{ " In String Number",
"%RCSL-1 -ERRSW, First word must be PROGR",
"%RCSL-2 -ERRSW, word PROGR is expected",
"%RCSL-3 -ERRAM, program name is absent",
"%RCSL-4 -ERTCT, Invalid TACT value",
"%RCSL-5 -ERCNS, Invalid name of constant",
"%RCSL-6 -ERNAM, Port name is absent",
"%RCSL-7 -ERPRT, Port address is absent",
"%RCSL-8 -ERPRT, Port offset is absent",
"%RCSL-9 -ERPRT, Port size is absent",
"%RCSL-10-ERRSW, Semicolumn is absent at the end of string",
"%RCSL-11-ERNAM, Waiting for a process name",
"%RCSL-12-MISS, Waiting for a digit",
"%RCSL-13-FATERR, Unexpected EOF",
"%RCSL-14-ERVAR, Invalid variable description",
"%RCSL-15-ERPAU, Invalid TIMEOUT value description",
"%RCSL-16-ERPAU, Lack of STATE name in the TIMEOUT command",
"%RCSL-17-ERJMP, Lack of transition in the current STATE",
"%RCSL-18-ERRSW, Symbol { is expected",
"%RCSL-19-ERRSW, Symbol  is expected}",
"%RCSL-20-ERRSW, Waiting for symbol (",
"%RCSL-21-ERRSW, Waiting for symbol )",
"%RCSL-22-ERNAM, Lack of STATE name",
"%RCSL-23-ERRSW, Waiting for word PROC",
"%RCSL-24-ERNAM, Lack of PROC name in the command STOP, START, TIMEOUT",
"%RCSL-25-ERJMP, Invalid condition for transition",
"%RCSL-26-ERRSW, Waiting for word PROC or ALL",
"%RCSL-27-ERNAM, Invalid name of process",
"%RCSL-28-ERRSW, Waiting for symbol =",
"%RCSL-29-FATERR, Fatal error. Please connect with the author.",
"%RCSL-30-ERRSW, Waiting for symbol [",
"%RCSL-31-ERRSW, Waiting for symbol ]",
"%RCSL-32-ERRSW, Waiting for word THEN",
"%RCSL-33-ERRSW, Waiting for word IN or SET",
"%RCSL-34-ERRSW, Waiting for word LOCAL or FOR",
"%RCSL-35-ERVAR, Invalid initialization of variable",
"%RCSL-36-ERNAM, A process with the same name already exists",
"%RCSL-37-ERNAM, A state with the same name already exists",
"%RCSL-38-ERNAM, A variable with the same name already exists",
"%RCSL-39-ERNAM, A constant with the same name already exists",
"%RCSL-40-ERNAM, A port with the same name already exists",
"%RCSL-41-ERNAM, No process with this name exists",
"%RCSL-42-ERNAM, No state with this name exists",
"%RCSL-43-ERNAM, No variable with this name exists",
"%RCSL-44-ERNAM, No port with this name exists",
"%RCSL-45-ERNAM, Unspecified operand found in expression",
"%RCSL-46-EREST, Empty block / state body",
"%RCSL-47-ERRSW, Waiting for word STATE",
"%RCSL-48-ERSTT, The current process has no states",
"%RCSL-49-ERVAR, Invalid variable for the current process",
"%RCSL-50-ERCNS, Invalid constant value",
"%RCSL-51-ERRAM, ����������� ������� � �������� ������ ������",
"%RCSL-52-ERRAM, ����������� ���������������� ����� � �������� ������ ������",
"%RCSL-53-ERRAM, ����������� ����� �� ��������� ���� � �������� ������ ������",
"%RCSL-54-ERNAM, Waiting for a var name",
"%RCSL-55-ERVAL, Waiting for a number of the mapped bits",
"%RCSL-56-ERRSW, Waiting for word STATE",
"%RCSL-57-ERSTT, No such a process, or ACTIVE/INACTIVE state)",
"%RCSL-58-ERRSW, Waiting for symbol } for end of the program body",
"%RCSL-59-ERRSW, Waiting for symbol } for end of the process body",
"%RCSL-60-ERRSW, Waiting for symbol } for end of the state body",
"%RCSL-61-ERRSW, Waiting for symbol } for the mapped variable description",
"%RCSL-62-ERRSW, Waiting for word SET/IN or symbol { ",
"%RCSL-63-ERRSW, Unspecified in the current process variable in the C-string ",
"%RCSL-64-ERRSW, Invalid key in the command string - %s",
"%RCSL-65-ERRSW, FLOAT and DOUBLE variable can not be mapped on port",
"%RCSL-66-ERRSW, Waiting for symbol : (colon)",
"%RCSL-67-ERRSW, Waiting for word CASE or DEFAULT",
"%RCSL-68-ERRSW, Waiting for a statement",
"%RCSL-69-ERFNM, Waiting for a C function name",
"%RCSL-70-ERFNM, A function with the same name already exists",
"%RCSL-71-ERTYP, Waiting for word TYPE",
"%RCSL-72-ERDEC, Waiting for symbol ) or ,",
"%RCSL-73-ERDEC, Waiting for word declaration",
"%RCSL-74-ERTYP, Waiting for comma",
"%RCSL-75-ERVAR, There s no such a process",
"%RCSL-76-ERVAR, There is no such a variable in the process",
"%RCSL-77-ERVAR, Unexpected symbol end of comment",
"%RCSL-78-ERSTT, Number of the states can not be more then 127",
"%RCSL-79-ERJMP, The satet has no transition",
"%RCSL-80-ERRES, Waiting for word TIMEOUT",
};

#endif
