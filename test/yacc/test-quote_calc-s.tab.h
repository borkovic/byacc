#ifndef YYTOKEN_IS_DECLARED
#define YYTOKEN_IS_DECLARED 1
typedef enum quote_calc_token {
    OP_ADD = 257,
    OP_SUB = 259,
    OP_MUL = 261,
    OP_DIV = 263,
    OP_MOD = 265,
    OP_AND = 267,
    DIGIT = 269,
    LETTER = 270,
    UMINUS = 271
} quote_calc_token;
#endif /* !YYTOKEN_IS_DECLARED */
