#ifndef _grammar__defines_h_
#define _grammar__defines_h_

#ifndef YYTOKEN_IS_DECLARED
#define YYTOKEN_IS_DECLARED 1
typedef enum grammar_token {
    T_IDENTIFIER = 257,
    T_TYPEDEF_NAME = 258,
    T_DEFINE_NAME = 259,
    T_AUTO = 260,
    T_EXTERN = 261,
    T_REGISTER = 262,
    T_STATIC = 263,
    T_TYPEDEF = 264,
    T_INLINE = 265,
    T_EXTENSION = 266,
    T_CHAR = 267,
    T_DOUBLE = 268,
    T_FLOAT = 269,
    T_INT = 270,
    T_VOID = 271,
    T_LONG = 272,
    T_SHORT = 273,
    T_SIGNED = 274,
    T_UNSIGNED = 275,
    T_ENUM = 276,
    T_STRUCT = 277,
    T_UNION = 278,
    T_Bool = 279,
    T_Complex = 280,
    T_Imaginary = 281,
    T_TYPE_QUALIFIER = 282,
    T_BRACKETS = 283,
    T_LBRACE = 284,
    T_MATCHRBRACE = 285,
    T_ELLIPSIS = 286,
    T_INITIALIZER = 287,
    T_STRING_LITERAL = 288,
    T_ASM = 289,
    T_ASMARG = 290,
    T_VA_DCL = 291
} grammar_token;
#endif /* !YYTOKEN_IS_DECLARED */

#endif /* _grammar__defines_h_ */
