#ifndef _destroy1__defines_h_
#define _destroy1__defines_h_

#ifndef YYTOKEN_IS_DECLARED
#define YYTOKEN_IS_DECLARED 1
typedef enum destroy1_token {
    GLOBAL = 257,
    LOCAL = 258,
    REAL = 259,
    INTEGER = 260,
    NAME = 261
} destroy1_token;
#endif /* !YYTOKEN_IS_DECLARED */
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union YYSTYPE
{
    class	cval;
    type	tval;
    namelist *	nlist;
    name	id;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE destroy1_lval;

#endif /* _destroy1__defines_h_ */
