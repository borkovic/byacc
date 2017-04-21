#ifndef YYTOKEN_IS_DECLARED
#define YYTOKEN_IS_DECLARED 1
typedef enum varsyntax_calc1__token {
    DREG = 257,
    VREG = 258,
    CONST = 259,
    UMINUS = 260,
} varsyntax_calc1__token;
#endif /* !YYTOKEN_IS_DECLARED */
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union YYSTYPE
{
	int ival;	/* dreg & vreg array index values*/
	double dval;	/* floating point values*/
	INTERVAL vval;	/* interval values*/
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE varsyntax_calc1_lval;
