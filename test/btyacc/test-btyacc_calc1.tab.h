#ifndef _calc1__defines_h_
#define _calc1__defines_h_

#ifndef YYTOKEN_IS_DECLARED
#define YYTOKEN_IS_DECLARED 1
typedef enum calc1_token {
    DREG = 257,
    VREG = 258,
    CONST = 259,
    UMINUS = 260
} calc1_token;
#endif /* !YYTOKEN_IS_DECLARED */
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union YYSTYPE
{
	int ival;
	double dval;
	INTERVAL vval;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */

#endif /* _calc1__defines_h_ */
