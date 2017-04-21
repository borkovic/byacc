#ifndef YYTOKEN_IS_DECLARED
#define YYTOKEN_IS_DECLARED 1
typedef enum calc__token {
    DIGIT = 257,
    LETTER = 258,
    UMINUS = 259,
} calc__token;
#endif /* !YYTOKEN_IS_DECLARED */
#undef yytname
#define yytname yyname
