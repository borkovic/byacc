#ifndef _demo__defines_h_
#define _demo__defines_h_

#ifndef YYTOKEN_IS_DECLARED
#define YYTOKEN_IS_DECLARED 1
typedef enum demo_token {
    PREFIX = 257,
    POSTFIX = 258,
    ID = 259,
    CONSTANT = 260,
    EXTERN = 261,
    REGISTER = 262,
    STATIC = 263,
    CONST = 264,
    VOLATILE = 265,
    IF = 266,
    THEN = 267,
    ELSE = 268,
    CLCL = 269
} demo_token;
#endif /* !YYTOKEN_IS_DECLARED */
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union YYSTYPE {
    Scope	*scope;
    Expr	*expr;
    Expr_List	*elist;
    Type	*type;
    Decl	*decl;
    Decl_List	*dlist;
    Code	*code;
    char	*id;
    } YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE demo_lval;

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
/* Default: YYLTYPE is the text position type. */
typedef struct YYLTYPE
{
    int first_line;
    int first_column;
    int last_line;
    int last_column;
    unsigned source;
} YYLTYPE;
#define YYLTYPE_IS_DECLARED 1
#endif
#define YYRHSLOC(rhs, k) ((rhs)[k])
extern YYLTYPE demo_lloc;

#endif /* _demo__defines_h_ */
