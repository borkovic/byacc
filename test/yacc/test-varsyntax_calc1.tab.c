/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 2
#define YYMINOR 0
#define YYCHECK "yyyymmdd"

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#ident "check variant syntax features"

#ifndef yyparse
#define yyparse    varsyntax_calc1_parse
#endif /* yyparse */

#ifndef yylex
#define yylex      varsyntax_calc1_lex
#endif /* yylex */

#ifndef yyerror
#define yyerror    varsyntax_calc1_error
#endif /* yyerror */

#ifndef yychar
#define yychar     varsyntax_calc1_char
#endif /* yychar */

#ifndef yyval
#define yyval      varsyntax_calc1_val
#endif /* yyval */

#ifndef yylval
#define yylval     varsyntax_calc1_lval
#endif /* yylval */

#ifndef yydebug
#define yydebug    varsyntax_calc1_debug
#endif /* yydebug */

#ifndef yynerrs
#define yynerrs    varsyntax_calc1_nerrs
#endif /* yynerrs */

#ifndef yyerrflag
#define yyerrflag  varsyntax_calc1_errflag
#endif /* yyerrflag */

#ifndef yylhs
#define yylhs      varsyntax_calc1_lhs
#endif /* yylhs */

#ifndef yylen
#define yylen      varsyntax_calc1_len
#endif /* yylen */

#ifndef yydefred
#define yydefred   varsyntax_calc1_defred
#endif /* yydefred */

#ifndef yydgoto
#define yydgoto    varsyntax_calc1_dgoto
#endif /* yydgoto */

#ifndef yysindex
#define yysindex   varsyntax_calc1_sindex
#endif /* yysindex */

#ifndef yyrindex
#define yyrindex   varsyntax_calc1_rindex
#endif /* yyrindex */

#ifndef yygindex
#define yygindex   varsyntax_calc1_gindex
#endif /* yygindex */

#ifndef yytable
#define yytable    varsyntax_calc1_table
#endif /* yytable */

#ifndef yycheck
#define yycheck    varsyntax_calc1_check
#endif /* yycheck */

#ifndef yyname
#define yyname     varsyntax_calc1_name
#endif /* yyname */

#ifndef yyrule
#define yyrule     varsyntax_calc1_rule
#endif /* yyrule */
#define YYPREFIX "varsyntax_calc1_"

#define YYPURE 0

#line 3 "varsyntax_calc1.y"

/* http://dinosaur.compilertools.net/yacc/index.html * /*/

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

typedef struct interval
{
    double lo, hi;
}
INTERVAL;

INTERVAL vmul(double, double, INTERVAL);
INTERVAL vdiv(double, double, INTERVAL);

extern int yylex(void);
static void yyerror(const char *s);

int dcheck(INTERVAL);

double dreg[26];
INTERVAL vreg[26];

#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 32 "varsyntax_calc1.y"
typedef union YYSTYPE
{
	int ival;	/* dreg & vreg array index values*/
	double dval;	/* floating point values*/
	INTERVAL vval;	/* interval values*/
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 142 "varsyntax_calc1.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#ifndef YYTOKEN_IS_DECLARED
#define YYTOKEN_IS_DECLARED 1
typedef enum varsyntax_calc1_token {
    DREG = 257,
    VREG = 258,
    CONST = 259,
    UMINUS = 260
} varsyntax_calc1_token;
#endif /* !YYTOKEN_IS_DECLARED */
 -1
#define YYERRCODE 256
typedef int YYINT;
static const YYINT varsyntax_calc1_lhs[] = {             -1,
    3,    3,    0,    0,    0,    0,    0,    1,    1,    1,
    1,    1,    1,    1,    1,    2,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    2,    2,    2,
};
static const YYINT varsyntax_calc1_len[] = {              2,
    0,    2,    2,    2,    4,    4,    2,    1,    1,    3,
    3,    3,    3,    2,    3,    1,    5,    1,    3,    3,
    3,    3,    3,    3,    3,    3,    2,    3,
};
static const YYINT varsyntax_calc1_defred[] = {           0,
    0,    0,    0,    8,    0,    0,    0,    0,    0,    7,
    0,    0,    9,   18,   14,   27,    0,    0,    0,    0,
    0,    0,    3,    0,    0,    0,    0,    4,    0,    0,
    0,    0,    0,   15,    0,   28,    0,    0,    0,    0,
   12,   24,   13,   26,    0,    0,   23,   25,   14,    0,
    0,    0,    0,    0,    5,    6,    0,    0,    0,   12,
   13,   17,
};
static const YYINT varsyntax_calc1_dgoto[] = {            7,
   32,    9,    0,
};
static const YYINT varsyntax_calc1_sindex[] = {         -40,
   -8,  -48,  -47,    0,  -37,  -37,    0,    2,   17,    0,
  -34,  -37,    0,    0,    0,    0,  -25,   90,  -37,  -37,
  -37,  -37,    0,  -37,  -37,  -37,  -37,    0,  -34,  -34,
   25,  125,   31,    0,  -34,    0,  -11,   37,  -11,   37,
    0,    0,    0,    0,   37,   37,    0,    0,    0,  111,
  -34,  -34,  -34,  -34,    0,    0,  118,   69,   69,    0,
    0,    0,
};
static const YYINT varsyntax_calc1_rindex[] = {           0,
    0,   38,   44,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   -9,    0,    0,    0,    0,   51,   -3,   56,   61,
    0,    0,    0,    0,   67,   72,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   78,   83,    0,
    0,    0,
};
static const YYINT varsyntax_calc1_gindex[] = {           0,
    4,  124,    0,
};
#define YYTABLESIZE 225
static const YYINT varsyntax_calc1_table[] = {            6,
   16,   10,    6,    8,    5,   30,   20,    5,   15,   17,
   29,   23,   11,   12,   31,   34,   21,   19,   35,   20,
    0,   22,   37,   39,   41,   43,   28,    0,    0,    0,
   21,   16,   49,   50,   55,   22,    0,   20,   57,   20,
   56,   20,    0,   21,   19,    0,   20,    9,   22,    0,
    0,    0,    0,   18,   58,   59,   60,   61,   26,   24,
   10,   25,    0,   27,    0,   11,   53,   51,    0,   52,
   22,   54,   26,   24,    0,   25,   19,   27,   26,    9,
    9,   21,    9,   27,    9,   18,   18,   10,   18,    0,
   18,   10,   11,   10,   10,   10,   11,    0,   11,   11,
   11,   22,    0,   22,    0,   22,    0,   19,    0,   19,
   53,   19,   21,    0,   21,   54,   21,    0,   10,    0,
   10,    0,   10,   11,    0,   11,    0,   11,   16,   18,
   36,   26,   24,    0,   25,   33,   27,    0,    0,    0,
    0,    0,   38,   40,   42,   44,    0,   45,   46,   47,
   48,   34,   53,   51,    0,   52,    0,   54,   62,   53,
   51,    0,   52,    0,   54,    0,   21,   19,    0,   20,
    0,   22,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    1,    2,    3,    4,   13,
   14,    4,   13,    0,    4,
};
static const YYINT varsyntax_calc1_check[] = {           40,
   10,   10,   40,    0,   45,   40,   10,   45,    5,    6,
   45,   10,   61,   61,   11,   41,   42,   43,   44,   45,
   -1,   47,   19,   20,   21,   22,   10,   -1,   -1,   -1,
   42,   41,   29,   30,   10,   47,   -1,   41,   35,   43,
   10,   45,   -1,   42,   43,   -1,   45,   10,   47,   -1,
   -1,   -1,   -1,   10,   51,   52,   53,   54,   42,   43,
   10,   45,   -1,   47,   -1,   10,   42,   43,   -1,   45,
   10,   47,   42,   43,   -1,   45,   10,   47,   42,   42,
   43,   10,   45,   47,   47,   42,   43,   10,   45,   -1,
   47,   41,   10,   43,   44,   45,   41,   -1,   43,   44,
   45,   41,   -1,   43,   -1,   45,   -1,   41,   -1,   43,
   42,   45,   41,   -1,   43,   47,   45,   -1,   41,   -1,
   43,   -1,   45,   41,   -1,   43,   -1,   45,    5,    6,
   41,   42,   43,   -1,   45,   12,   47,   -1,   -1,   -1,
   -1,   -1,   19,   20,   21,   22,   -1,   24,   25,   26,
   27,   41,   42,   43,   -1,   45,   -1,   47,   41,   42,
   43,   -1,   45,   -1,   47,   -1,   42,   43,   -1,   45,
   -1,   47,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  256,  257,  258,  259,  257,
  258,  259,  257,   -1,  259,
};
#define YYFINAL 7
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 260
#define YYUNDFTOKEN 266
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const varsyntax_calc1_name[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,"'\\n'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,0,
0,0,0,0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,"DREG","VREG","CONST","UMINUS",0,0,0,0,0,"illegal-symbol",
};
static const char *const varsyntax_calc1_rule[] = {
"$accept : line",
"lines :",
"lines : lines line",
"line : dexp '\\n'",
"line : vexp '\\n'",
"line : DREG '=' dexp '\\n'",
"line : VREG '=' vexp '\\n'",
"line : error '\\n'",
"dexp : CONST",
"dexp : DREG",
"dexp : dexp '+' dexp",
"dexp : dexp '-' dexp",
"dexp : dexp '*' dexp",
"dexp : dexp '/' dexp",
"dexp : '-' dexp",
"dexp : '(' dexp ')'",
"vexp : dexp",
"vexp : '(' dexp ',' dexp ')'",
"vexp : VREG",
"vexp : vexp '+' vexp",
"vexp : dexp '+' vexp",
"vexp : vexp '-' vexp",
"vexp : dexp '-' vexp",
"vexp : vexp '*' vexp",
"vexp : dexp '*' vexp",
"vexp : vexp '/' vexp",
"vexp : dexp '/' vexp",
"vexp : '-' vexp",
"vexp : '(' vexp ')'",

};
#endif

#if YYDEBUG
int      yydebug;
#endif

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;
int      yynerrs;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
YYLTYPE  yyloc; /* position returned by actions */
YYLTYPE  yylloc; /* position from the lexer */
#endif

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
#ifndef YYLLOC_DEFAULT
#define YYLLOC_DEFAULT(loc, rhs, n) \
do \
{ \
    if (n == 0) \
    { \
        (loc).first_line   = YYRHSLOC(rhs, 0).last_line; \
        (loc).first_column = YYRHSLOC(rhs, 0).last_column; \
        (loc).last_line    = YYRHSLOC(rhs, 0).last_line; \
        (loc).last_column  = YYRHSLOC(rhs, 0).last_column; \
    } \
    else \
    { \
        (loc).first_line   = YYRHSLOC(rhs, 1).first_line; \
        (loc).first_column = YYRHSLOC(rhs, 1).first_column; \
        (loc).last_line    = YYRHSLOC(rhs, n).last_line; \
        (loc).last_column  = YYRHSLOC(rhs, n).last_column; \
    } \
} while (0)
#endif /* YYLLOC_DEFAULT */
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#ifndef YYINITSTACKSIZE
#define YYINITSTACKSIZE 200
#endif

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE  *p_base;
    YYLTYPE  *p_mark;
#endif
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 178 "varsyntax_calc1.y"
	/* beginning of subroutines section */

#define BSZ 50			/* buffer size for floating point numbers */

	/* lexical analysis */

static void
yyerror(const char *s)
{
    fprintf(stderr, "%s\n", s);
}

int
yylex(void)
{
    int c;

    while ((c = getchar()) == ' ')
    {				/* skip over blanks */
    }

    if (isupper(c))
    {
	yylval.ival = c - 'A';
	return (VREG);
    }
    if (islower(c))
    {
	yylval.ival = c - 'a';
	return (DREG);
    }

    if (isdigit(c) || c == '.')
    {
	/* gobble up digits, points, exponents */
	char buf[BSZ + 1], *cp = buf;
	int dot = 0, expr = 0;

	for (; (cp - buf) < BSZ; ++cp, c = getchar())
	{

	    *cp = (char) c;
	    if (isdigit(c))
		continue;
	    if (c == '.')
	    {
		if (dot++ || expr)
		    return ('.');	/* will cause syntax error */
		continue;
	    }

	    if (c == 'e')
	    {
		if (expr++)
		    return ('e');	/*  will  cause  syntax  error  */
		continue;
	    }

	    /*  end  of  number  */
	    break;
	}
	*cp = '\0';

	if ((cp - buf) >= BSZ)
	    printf("constant  too  long:  truncated\n");
	else
	    ungetc(c, stdin);	/*  push  back  last  char  read  */
	yylval.dval = atof(buf);
	return (CONST);
    }
    return (c);
}

static INTERVAL
hilo(double a, double b, double c, double d)
{
    /*  returns  the  smallest  interval  containing  a,  b,  c,  and  d  */
    /*  used  by  *,  /  routines  */
    INTERVAL v;

    if (a > b)
    {
	v.hi = a;
	v.lo = b;
    }
    else
    {
	v.hi = b;
	v.lo = a;
    }

    if (c > d)
    {
	if (c > v.hi)
	    v.hi = c;
	if (d < v.lo)
	    v.lo = d;
    }
    else
    {
	if (d > v.hi)
	    v.hi = d;
	if (c < v.lo)
	    v.lo = c;
    }
    return (v);
}

INTERVAL
vmul(double a, double b, INTERVAL v)
{
    return (hilo(a * v.hi, a * v.lo, b * v.hi, b * v.lo));
}

int
dcheck(INTERVAL v)
{
    if (v.hi >= 0. && v.lo <= 0.)
    {
	printf("divisor  interval  contains  0.\n");
	return (1);
    }
    return (0);
}

INTERVAL
vdiv(double a, double b, INTERVAL v)
{
    return (hilo(a / v.hi, a / v.lo, b / v.hi, b / v.lo));
}
#line 533 "varsyntax_calc1.tab.c"

/* For use in generated program */
#define yydepth (int)(yystack.s_mark - yystack.s_base)

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE *newps;
#endif

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    newps = (YYLTYPE *)realloc(data->p_base, newsize * sizeof(*newps));
    if (newps == 0)
        return YYENOMEM;

    data->p_base = newps;
    data->p_mark = newps + i;
#endif

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;

#if YYDEBUG
    if (yydebug)
        fprintf(stderr, "%sdebug: stack size increased to %d\n", YYPREFIX, newsize);
#endif
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    free(data->p_base);
#endif
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif /* YYPURE || defined(YY_NO_LEAKS) */

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate, yyresult;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE  yyerror_loc_range[3]; /* position of error start/end (0 unused) */
#endif
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
    if (yydebug)
        fprintf(stderr, "%sdebug[<# of symbols on state stack>]\n", YYPREFIX);
#endif
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    memset(yyerror_loc_range, 0, sizeof(yyerror_loc_range));
#endif

    yym = 0;
    /* yyn is set below */
    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark = yystack.p_base;
#endif
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        yychar = YYLEX;
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            fprintf(stderr, "%s[%d]: state %d, reading token %d (%s)",
                            YYDEBUGSTR, yydepth, yystate, yychar, yys);
#ifdef YYSTYPE_TOSTRING
                fprintf(stderr, " <%s>", YYSTYPE_TOSTRING(yychar, yylval));
#endif
            fputc('\n', stderr);
        }
#endif
    }
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            fprintf(stderr, "%s[%d]: state %d, shifting to state %d\n",
                            YYDEBUGSTR, yydepth, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        *++yystack.p_mark = yylloc;
#endif
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;

    YYERROR_CALL("syntax error");
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yyerror_loc_range[1] = yylloc; /* lookahead position is error start position */
#endif

#if !YYBTYACC
    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
#endif
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    fprintf(stderr, "%s[%d]: state %d, error recovery shifting to state %d\n",
                                    YYDEBUGSTR, yydepth, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                /* lookahead position is error end position */
                yyerror_loc_range[2] = yylloc;
                YYLLOC_DEFAULT(yyloc, yyerror_loc_range, 2); /* position of error span */
                *++yystack.p_mark = yyloc;
#endif
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    fprintf(stderr, "%s[%d]: error recovery discarding state %d\n",
                                    YYDEBUGSTR, yydepth, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                /* the current TOS position is the error start position */
                yyerror_loc_range[1] = *yystack.p_mark;
#endif
#if defined(YYDESTRUCT_CALL)
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    YYDESTRUCT_CALL("error: discarding state",
                                    yystos[*yystack.s_mark], yystack.l_mark, yystack.p_mark);
#else
                    YYDESTRUCT_CALL("error: discarding state",
                                    yystos[*yystack.s_mark], yystack.l_mark);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#endif /* defined(YYDESTRUCT_CALL) */
                --yystack.s_mark;
                --yystack.l_mark;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                --yystack.p_mark;
#endif
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            fprintf(stderr, "%s[%d]: state %d, error recovery discarding token %d (%s)\n",
                            YYDEBUGSTR, yydepth, yystate, yychar, yys);
        }
#endif
#if defined(YYDESTRUCT_CALL)
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            YYDESTRUCT_CALL("error: discarding token", yychar, &yylval, &yylloc);
#else
            YYDESTRUCT_CALL("error: discarding token", yychar, &yylval);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#endif /* defined(YYDESTRUCT_CALL) */
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
    yym = yylen[yyn];
#if YYDEBUG
    if (yydebug)
    {
        fprintf(stderr, "%s[%d]: state %d, reducing by rule %d (%s)",
                        YYDEBUGSTR, yydepth, yystate, yyn, yyrule[yyn]);
#ifdef YYSTYPE_TOSTRING
            if (yym > 0)
            {
                int i;
                fputc('<', stderr);
                for (i = yym; i > 0; i--)
                {
                    if (i != yym) fputs(", ", stderr);
                    fputs(YYSTYPE_TOSTRING(yystos[yystack.s_mark[1-i]],
                                           yystack.l_mark[1-i]), stderr);
                }
                fputc('>', stderr);
            }
#endif
        fputc('\n', stderr);
    }
#endif
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)

    /* Perform position reduction */
    memset(&yyloc, 0, sizeof(yyloc));
    {
        YYLLOC_DEFAULT(yyloc, &yystack.p_mark[-yym], yym);
        /* just in case YYERROR is invoked within the action, save
           the start of the rhs as the error start position */
        yyerror_loc_range[1] = yystack.p_mark[1-yym];
    }
#endif

    switch (yyn)
    {
case 3:
#line 59 "varsyntax_calc1.y"
	{
		(void) printf("%15.8f\n", yystack.l_mark[-1].dval);
	}
#line 840 "varsyntax_calc1.tab.c"
break;
case 4:
#line 63 "varsyntax_calc1.y"
	{
		(void) printf("(%15.8f, %15.8f)\n", yystack.l_mark[-1].vval.lo, yystack.l_mark[-1].vval.hi);
	}
#line 847 "varsyntax_calc1.tab.c"
break;
case 5:
#line 67 "varsyntax_calc1.y"
	{
		dreg[yystack.l_mark[-3].ival] = yystack.l_mark[-1].dval;
	}
#line 854 "varsyntax_calc1.tab.c"
break;
case 6:
#line 71 "varsyntax_calc1.y"
	{
		vreg[yystack.l_mark[-3].ival] = yystack.l_mark[-1].vval;
	}
#line 861 "varsyntax_calc1.tab.c"
break;
case 7:
#line 75 "varsyntax_calc1.y"
	{
		yyerrok;
	}
#line 868 "varsyntax_calc1.tab.c"
break;
case 9:
#line 82 "varsyntax_calc1.y"
	{
		yyval.dval = dreg[yystack.l_mark[0].ival]; /* $$ & $1 are sufficient here*/
	}
#line 875 "varsyntax_calc1.tab.c"
break;
case 10:
#line 86 "varsyntax_calc1.y"
	{
		yyval.dval = yystack.l_mark[-2].dval + yystack.l_mark[0].dval;
	}
#line 882 "varsyntax_calc1.tab.c"
break;
case 11:
#line 90 "varsyntax_calc1.y"
	{
		yyval.dval = yystack.l_mark[-2].dval - yystack.l_mark[0].dval;
	}
#line 889 "varsyntax_calc1.tab.c"
break;
case 12:
#line 94 "varsyntax_calc1.y"
	{
		yyval.dval = yystack.l_mark[-2].dval * yystack.l_mark[0].dval;
	}
#line 896 "varsyntax_calc1.tab.c"
break;
case 13:
#line 98 "varsyntax_calc1.y"
	{
		yyval.dval = yystack.l_mark[-2].dval / yystack.l_mark[0].dval;
	}
#line 903 "varsyntax_calc1.tab.c"
break;
case 14:
#line 102 "varsyntax_calc1.y"
	{
		yyval.dval = -yystack.l_mark[0].dval;
	}
#line 910 "varsyntax_calc1.tab.c"
break;
case 15:
#line 106 "varsyntax_calc1.y"
	{
		yyval.dval = yystack.l_mark[-1].dval;
	}
#line 917 "varsyntax_calc1.tab.c"
break;
case 16:
#line 112 "varsyntax_calc1.y"
	{
		yyval.vval.hi = yyval.vval.lo = yystack.l_mark[0].dval;
	}
#line 924 "varsyntax_calc1.tab.c"
break;
case 17:
#line 116 "varsyntax_calc1.y"
	{
		yyval.vval.lo = yystack.l_mark[-3].dval;
		yyval.vval.hi = yystack.l_mark[-1].dval;
		if ( yyval.vval.lo > yyval.vval.hi ) 
		{
			(void) printf("interval out of order\n");
			YYERROR;
		}
	}
#line 937 "varsyntax_calc1.tab.c"
break;
case 18:
#line 126 "varsyntax_calc1.y"
	{
		yyval.vval = vreg[yystack.l_mark[0].ival];
	}
#line 944 "varsyntax_calc1.tab.c"
break;
case 19:
#line 130 "varsyntax_calc1.y"
	{
		yyval.vval.hi = yystack.l_mark[-2].vval.hi + yystack.l_mark[0].vval.hi;
		yyval.vval.lo = yystack.l_mark[-2].vval.lo + yystack.l_mark[0].vval.lo;
	}
#line 952 "varsyntax_calc1.tab.c"
break;
case 20:
#line 135 "varsyntax_calc1.y"
	{
		yyval.vval.hi = yystack.l_mark[-2].dval + yystack.l_mark[0].vval.hi;
		yyval.vval.lo = yystack.l_mark[-2].dval + yystack.l_mark[0].vval.lo;
	}
#line 960 "varsyntax_calc1.tab.c"
break;
case 21:
#line 140 "varsyntax_calc1.y"
	{
		yyval.vval.hi = yystack.l_mark[-2].vval.hi - yystack.l_mark[0].vval.lo;
		yyval.vval.lo = yystack.l_mark[-2].vval.lo - yystack.l_mark[0].vval.hi;
	}
#line 968 "varsyntax_calc1.tab.c"
break;
case 22:
#line 145 "varsyntax_calc1.y"
	{
		yyval.vval.hi = yystack.l_mark[-2].dval - yystack.l_mark[0].vval.lo;
		yyval.vval.lo = yystack.l_mark[-2].dval - yystack.l_mark[0].vval.hi;
	}
#line 976 "varsyntax_calc1.tab.c"
break;
case 23:
#line 150 "varsyntax_calc1.y"
	{
		yyval.vval = vmul( yystack.l_mark[-2].vval.lo, yystack.l_mark[-2].vval.hi, yystack.l_mark[0].vval );
	}
#line 983 "varsyntax_calc1.tab.c"
break;
case 24:
#line 154 "varsyntax_calc1.y"
	{
		yyval.vval = vmul (yystack.l_mark[-2].dval, yystack.l_mark[-2].dval, yystack.l_mark[0].vval );
	}
#line 990 "varsyntax_calc1.tab.c"
break;
case 25:
#line 158 "varsyntax_calc1.y"
	{
		if (dcheck(yystack.l_mark[0].vval)) YYERROR;
		yyval.vval = vdiv ( yystack.l_mark[-2].vval.lo, yystack.l_mark[-2].vval.hi, yystack.l_mark[0].vval );
	}
#line 998 "varsyntax_calc1.tab.c"
break;
case 26:
#line 163 "varsyntax_calc1.y"
	{
		if (dcheck ( yystack.l_mark[0].vval )) YYERROR;
		yyval.vval = vdiv (yystack.l_mark[-2].dval, yystack.l_mark[-2].dval, yystack.l_mark[0].vval );
	}
#line 1006 "varsyntax_calc1.tab.c"
break;
case 27:
#line 168 "varsyntax_calc1.y"
	{
		yyval.vval.hi = -yystack.l_mark[0].vval.lo;
		yyval.vval.lo = -yystack.l_mark[0].vval.hi;
	}
#line 1014 "varsyntax_calc1.tab.c"
break;
case 28:
#line 173 "varsyntax_calc1.y"
	{
		yyval.vval = yystack.l_mark[-1].vval;
	}
#line 1021 "varsyntax_calc1.tab.c"
break;
#line 1023 "varsyntax_calc1.tab.c"
    default:
        break;
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark -= yym;
#endif
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
        {
            fprintf(stderr, "%s[%d]: after reduction, ", YYDEBUGSTR, yydepth);
#ifdef YYSTYPE_TOSTRING
                fprintf(stderr, "result is <%s>, ", YYSTYPE_TOSTRING(yystos[YYFINAL], yyval));
#endif
            fprintf(stderr, "shifting from state 0 to final state %d\n", YYFINAL);
        }
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        *++yystack.p_mark = yyloc;
#endif
        if (yychar < 0)
        {
            yychar = YYLEX;
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                fprintf(stderr, "%s[%d]: state %d, reading token %d (%s)\n",
                                YYDEBUGSTR, yydepth, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
    {
        fprintf(stderr, "%s[%d]: after reduction, ", YYDEBUGSTR, yydepth);
#ifdef YYSTYPE_TOSTRING
            fprintf(stderr, "result is <%s>, ", YYSTYPE_TOSTRING(yystos[yystate], yyval));
#endif
        fprintf(stderr, "shifting from state %d to state %d\n", *yystack.s_mark, yystate);
    }
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    *++yystack.p_mark = yyloc;
#endif
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");
    yyresult = 2;
    goto yyreturn;

yyabort:
    yyresult = 1;
    goto yyreturn;

yyaccept:
    yyresult = 0;

yyreturn:
#if defined(YYDESTRUCT_CALL)
    if (yychar != YYEOF && yychar != YYEMPTY)
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        YYDESTRUCT_CALL("cleanup: discarding token", yychar, &yylval, &yylloc);
#else
        YYDESTRUCT_CALL("cleanup: discarding token", yychar, &yylval);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */

    {
        YYSTYPE *pv;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        YYLTYPE *pp;

        for (pv = yystack.l_base, pp = yystack.p_base; pv <= yystack.l_mark; ++pv, ++pp)
             YYDESTRUCT_CALL("cleanup: discarding state",
                             yystos[*(yystack.s_base + (pv - yystack.l_base))], pv, pp);
#else
        for (pv = yystack.l_base; pv <= yystack.l_mark; ++pv)
             YYDESTRUCT_CALL("cleanup: discarding state",
                             yystos[*(yystack.s_base + (pv - yystack.l_base))], pv);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
    }
#endif /* defined(YYDESTRUCT_CALL) */

    yyfreestack(&yystack);
    return (yyresult);
}
