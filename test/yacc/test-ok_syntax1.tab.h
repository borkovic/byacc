#ifndef YYTOKEN_IS_DECLARED
#define YYTOKEN_IS_DECLARED 1
typedef enum ok_syntax1_token {
    DIGIT = 257,
    LETTER = 258,
    OCT1 = 259,
    HEX1 = 260,
    HEX2 = 261,
    HEX3 = 262,
    STR1 = 263,
    STR2 = 265,
    BELL = 266,
    BS = 267,
    NL = 268,
    LF = 269,
    CR = 270,
    TAB = 271,
    VT = 272,
    UMINUS = 273
} ok_syntax1_token;
#endif /* !YYTOKEN_IS_DECLARED */
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union YYSTYPE
{
    char *	cval;
    int		ival;
    double	dval;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE ok_syntax1_lval;
