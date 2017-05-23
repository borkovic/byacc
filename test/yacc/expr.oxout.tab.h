#ifndef YYTOKEN_IS_DECLARED
#define YYTOKEN_IS_DECLARED 1
typedef enum expr.oxout_token {
    ID = 257,
    CONST = 258
} expr.oxout_token;
#endif /* !YYTOKEN_IS_DECLARED */
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union YYSTYPE {
struct yyyOxAttrbs {
struct yyyStackItem *yyyOxStackItem;
} yyyOxAttrbs;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE expr.oxout_lval;
