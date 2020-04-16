/*===================================================================*/
/*====== Institute Of Automation And Electrometry SB RAS ============*/
/*====== Pr. Acad. Koptyuga, 1. Novosibirsk. Russia =================*/
/*===================================================================*/
/*====== (c) Copyright 2002, IA&E, NSK, RU ==========================*/
/*===================================================================*/
/*===================================================================*/
/*===================================================================*/
/*====== Имя файла: glob_var.h=======================================*/
/*====== Автор    : Зюбин Владимир Евгеньевич =======================*/
/*====== Дата     : 2002/07/16 ======================================*/
/*====== Описание : файл содержит описание глобальных переменных ====*/
/*======            используемых в программе транслятор Reflex ======*/
/*===================================================================*/

#ifndef _GLOB_VAR_H
#define _GLOB_VAR_H 1

FILE *fptr_RCS;     /* указатель на исходный файл */
FILE *fptr_LIS;     /* указатель на файл листинга */
FILE *fptr_SYM;     /* указатель на файл привязки */
FILE *fptr_INP;     /* указатель на файл с процедурой считывания входных значений */
FILE *fptr_OUTP;    /* указатель на файл с процедурой записи выходных значений */
FILE *fptr_C;       /* указатель на текущий С-файл, временный файл */
#ifdef GEN_ID
FILE *fptr_ID;      /* указатель на файл С-идентификаторов */
FILE *fptr_IDC;     /* указатель на файл С-идентификаторов */


#endif

/*Для тестирования - 2015*/
FILE * fptr_VARIABLES_FOR_TEST;


/*============== Array for file names ====================*/

char InputFileName[FLENGTH];   /* имя входного файла */
char BaseOutputFileName[FLENGTH];  /* шаблон имен выходных файлов */

INT16S File_Number = 0;
INT16S Flag_PASS;       /* для select_unit номер прохода 0 - синтаксич., 1 - семант. + кодогенерация */
INT16S Flag_CASE;       /* для select_unit (писать в Var(0) или в State(1)) */
INT16S Flag_LIS;        /* Флаг необходимости создания листинга */
INT16S Flag_MAP;        /* Флаг необходимости создания файла привязки */
INT16S Flag_TEST;        /* Флаг необходимости создания файла переменных */
INT16S Flag_CONFIG;        /* Флаг необходимости создания файла .cfg */
INT16S Flag_NAMES;		/* флаг генерации Си-имен из имен процессов и переменных */
INT16S Flag_CPP;        /* Флаг необходимости создания файла теста */
INT16S Flag_PROC_DESCR;        /* Флаг необходимости создания файла-описания  */



INT16S Flag_Unexpect;   /* Для блокировки выдачи ошибки при встрече неожиданного символа после EOF */
INT16S Flag_CString;         /* флаг С-строки */
INT16S Flag_Comment;          /* флаг комментария */
char  TEST_FLAG = 0;

INT32S CFileMAXLen;         /* Ограничение на длину С-файла */

INT16S err_flag;
INT16S error_count;       /* счетчик ошибок */
INT16S line_count;          /* счетчик строк транслируемого файла */
INT16S warning_count;       /* счетчик предупреждений */

INT16S JmpFlag;             /* флаг для контроля переходов из состояния */


/*============== Reserved word for RCSL86 ==============*/
char rezword[RWNUM][RWLEN];

/*============== Reserved word for RCSL86 ==============*/
char ALT_rezword[RWNUM][RWLEN] = {
  "2@##", "Прогр",
  "ТАКТ", "КОНСТ",
  "ВХОД", "ВЫХОД",
  "ПРОЦ", "ЛОКАЛ",
  "ДЛЯ", "ВСЕХ",
  "ИЗ", "ЛОГ",
  "ЦЕЛ", "СОСТ",
  "СТОП", "ПРОД",
  "СТАРТ", "ТАЙМАУТ",
  "ЕСЛИ", "ТО",
  "ИНАЧЕ", "В",
  "СЛЕДУЮЩЕЕ", "ОЗУ",
  "ОШИБКА", "КЦЕЛ",
  "ДЦЕЛ", "РАЗБОР",
  "СЛУЧАЙ", "КОНЕЦ",
  "ПЛАВ", "ДПЛАВ",
  "УМОЛЧАНИЕ", "АКТИВНОЕ",
  "ПАССИВНОЕ", "ЗАЦИКЛИТЬ",
  "УСТ",				/* SET 1.1*/
  "СБРОСИТЬ", "РЕСТАРТ",	/* 1.1 */
  "ЗНАКОВОЕ" , "БЕЗЗНАКОВОЕ",
  "ПЕРЕЧИСЛЕНИЕ", "ФУНКЦИЯ",
  "ТИП", "ПУСТО",
  "АРГУМЕНТЫ", "#СИ",

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
char unit[BUFFER_LENGTH];           /* текущая лексема */
char prev_unit[BUFFER_LENGTH];
char spaces[BUFFER_LENGTH];         /* пред-разделитель текущей лексемы */
char prev_spaces[BUFFER_LENGTH];

/*============== Counter for string number ==============*/
INT16S str_count;

char error_array[ERRMSGNUM][ERRMSGLEN];

char warning_array[WRNMSGNUM][WRNMSGLEN] = {" В строке номер",
"%RCSL-1 -WRNNJ, Предупреждение. В состоянии отсутствуют условия перехода", /* не используется */
"%RCSL-2 -WRNTL, Предупреждение. Слишком длинный разделитель сокращен",
"%RCSL-3 -WRCSTR, Предупр. С-строка допустима только в состояниях. Опускается ",
"%RCSL-4 -WRNCT, Неверно указан размер такта",
"%RCSL-5 -WRNNS, Неверное имя константы",
"%RCSL-6 -WRNAM, Отсутствует имя порта",
"%RCSL-7 -WRNRT, Отсутствует адрес порта",
"%RCSL-8 -WRNRT, Отсутствует размер порта",
"%RCSL-9 -WRNRT, Отсутствует разрядность порта",
"%RCSL-10-WRNSW, Отсутствует точка с запятой в конце строки",
"%RCSL-11-WRNAM, Ожидается имя процесса",
"%RCSL-12-WRNS, Ожидается число",
"%RCSL-13-WRNERR, Неожиданный конец файла",
"%RCSL-14-WRNAR, Неверное описание переменной",
"%RCSL-15-WRNAU, Отсутствует длительность паузы",
"%RCSL-16-WRNAU, Отсутствует имя состояния в команде пауза",
"%RCSL-17-WRNMP, В состоянии отсутствуют условия перехода", /* не используется */
"%RCSL-18-WRNSW, Ожидается символ {",
"%RCSL-19-WRNSW, Ожидается символ }"
};


/*============= Array for diagnostic message ===============*/

char ALT_error_array[ERRMSGNUM][ERRMSGLEN] = {" В строке номер",
"%RCSL-1 -ERRSW, Первое слово должно быть словом Прогр",
"%RCSL-2 -ERRSW, Не обнаружено слова Прогр",
"%RCSL-3 -ERRAM, Отсутствует имя программы",
"%RCSL-4 -ERTCT, Неверно указан размер такта",
"%RCSL-5 -ERCNS, Неверное имя константы",
"%RCSL-6 -ERNAM, Отсутствует имя порта",
"%RCSL-7 -ERPRT, Отсутствует адрес порта",
"%RCSL-8 -ERPRT, Отсутствует размер порта",
"%RCSL-9 -ERPRT, Отсутствует разрядность порта",
"%RCSL-10-ERRSW, Отсутствует точка с запятой в конце строки",
"%RCSL-11-ERNAM, Ожидается имя процесса",
"%RCSL-12-MISS, Ожидается число",
"%RCSL-13-FATERR, Неожиданный конец файла",
"%RCSL-14-ERVAR, Неверное описание переменной",
"%RCSL-15-ERPAU, Ошибка спецификации длительности таймаута",
"%RCSL-16-ERPAU, Отсутствует имя состояния в команде ТАЙМАУТ",
"%RCSL-17-ERJMP, В состоянии отсутствуют условия перехода",
"%RCSL-18-ERRSW, Ожидается символ {",
"%RCSL-19-ERRSW, Ожидается символ }",
"%RCSL-20-ERRSW, Ожидается символ (",
"%RCSL-21-ERRSW, Ожидается символ )",
"%RCSL-22-ERNAM, Отсутствует имя состояния",
"%RCSL-23-ERRSW, Ожидается зарезервированное слово ПРОЦ",
"%RCSL-24-ERNAM, Отсутствует имя процесса в команде СТОП, ПРОД, СТАРТ, ПАУЗА",
"%RCSL-25-ERJMP, Неверное условие перехода",
"%RCSL-26-ERRSW, Ожидается зарезервированное слово ПРОЦ или ВСЕХ",
"%RCSL-27-ERNAM, Неверное имя процесса",
"%RCSL-28-ERRSW, Ожидается символ =",
"%RCSL-29-FATERR, Фатальная ошибка. Пожалуйста, свяжитесь с автором программы.",
"%RCSL-30-ERRSW, Ожидается символ [",
"%RCSL-31-ERRSW, Ожидается символ ]",
"%RCSL-32-ERRSW, Ожидается зарезервированное слово ТО",
"%RCSL-33-ERRSW, Ожидается зарезервированное слово В",
"%RCSL-34-ERRSW, Ожидается зарезервированное слово ЛОКАЛ или ДЛЯ",
"%RCSL-35-ERVAR, Некорректная инициализация переменной",
"%RCSL-36-ERNAM, Процесс с таким именем уже существует",
"%RCSL-37-ERNAM, Состояние с таким именем уже существует",
"%RCSL-38-ERNAM, Переменная с таким именем уже существует",
"%RCSL-39-ERNAM, Константа с таким именем уже существует",
"%RCSL-40-ERNAM, Порт с таким именем уже существует",
"%RCSL-41-ERNAM, Процесса с таким именем не существует",
"%RCSL-42-ERNAM, Состояния с таким именем не существует",
"%RCSL-43-ERNAM, Переменной с таким именем не существует",
"%RCSL-44-ERNAM, Порта с таким именем не существует",
"%RCSL-45-ERNAM, В выражении обнаружен неописанный операнд",
"%RCSL-46-EREST, Пустое тело блока/состояния",
"%RCSL-47-ERRSW, Ожидается зарезервированное слово СОСТ",
"%RCSL-48-ERSTT, В текущем процессе отсутствуют состояния",
"%RCSL-49-ERVAR, В текущем процессе запрещено использовать переменную",
"%RCSL-50-ERCNS, Неверное значение константы",
"%RCSL-51-ERRAM, Отсутствует сегмент в описании ячейки памяти",
"%RCSL-52-ERRAM, Отсутствует внутрисегментный адрес в описании ячейки памяти",
"%RCSL-53-ERRAM, Отсутствует адрес по системной шине в описании ячейки памяти",
"%RCSL-54-ERNAM, Ожидается имя переменной",
"%RCSL-55-ERVAL, Ожидается количество зависимых битов",
"%RCSL-56-ERRSW, Ожидается зарезервированное слово СОСТ",
"%RCSL-57-ERSTT, Невозможная ситуация (нет процесса или состояния)",
"%RCSL-58-ERRSW, Ожидается символ конца тела программы }",
"%RCSL-59-ERRSW, Ожидается символ конца тела процесса }",
"%RCSL-60-ERRSW, Ожидается символ конца тела состояния }",
"%RCSL-61-ERRSW, Ожидается символ конца наполнения переменной }",
"%RCSL-62-ERRSW, Ожидается слово В или символ { ",
"%RCSL-63-ERRSW, В C-строке обнаружен неописанный в текущем процессе операнд",
"%RCSL-64-ERRSW, В командной строке обнаружен неизвестный ключ - %s",
"%RCSL-65-ERRSW, У переменных типа FLOAT и DOUBLE не бывает привязки к портам",
"%RCSL-66-ERRSW, Ожидается символ : (двоеточие)",
"%RCSL-67-ERRSW, Ожидается рез.слово СЛУЧАЙ или УМОЛЧАНИЕ",
"%RCSL-68-ERRSW, Ожидается утверждение",
"%RCSL-69-ERFNM, Ожидается имя С-функции",
"%RCSL-70-ERFNM, Функция с таким именем уже существует",
"%RCSL-71-ERTYP, Ожидается резервированное слово ТИП",
"%RCSL-72-ERDEC, Ожидается конец декларатора ) или , ",
"%RCSL-73-ERDEC, Ожидается декларатор ",
"%RCSL-74-ERTYP, Ожидается запятая",
"%RCSL-75-ERVAR, Отсутствует процесс с описанием переменной ",
"%RCSL-76-ERVAR, В указанном процессе отсутствует описание переменной ",
"%RCSL-77-ERVAR, Неожиданное вхождение символа закрытия комментария",
"%RCSL-78-ERSTT, Число состояний процесса больше 127",
"%RCSL-79-ERJMP, В состоянии отсутствуют условия перехода",
"%RCSL-80-ERRES, Ожидается резервированное слово ТАЙМАУТ",
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
"%RCSL-51-ERRAM, Отсутствует сегмент в описании ячейки памяти",
"%RCSL-52-ERRAM, Отсутствует внутрисегментный адрес в описании ячейки памяти",
"%RCSL-53-ERRAM, Отсутствует адрес по системной шине в описании ячейки памяти",
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
