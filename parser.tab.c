/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int yylex();
void yyerror(const char *);
extern FILE *yyin;
bool is_numeric(char* str);
void remove_quotes(char* str);
int string_to_int(char* str);
void insert_id(char *str);
bool check_id(char *str);
typedef struct node {
    char *id;
    struct node *next;
} Node;
Node *head = NULL;
int rb_number;
char checked_button_id[100];
int flag_checked = 0;
bool flag = false;

void checkPositiveInt(int integ, char attribute[]);
void checkRestrictions(int integ1, int integ2, char* less, char* more);

#line 99 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LIN_LAYOUT_OPEN_TAG = 3,        /* LIN_LAYOUT_OPEN_TAG  */
  YYSYMBOL_GT = 4,                         /* GT  */
  YYSYMBOL_LIN_LAYOUT_CLOSE_TAG = 5,       /* LIN_LAYOUT_CLOSE_TAG  */
  YYSYMBOL_RE_LAYOUT_OPEN_TAG = 6,         /* RE_LAYOUT_OPEN_TAG  */
  YYSYMBOL_RE_LAYOUT_CLOSE_TAG = 7,        /* RE_LAYOUT_CLOSE_TAG  */
  YYSYMBOL_LAYOUT_WIDTH = 8,               /* LAYOUT_WIDTH  */
  YYSYMBOL_LAYOUT_HEIGHT = 9,              /* LAYOUT_HEIGHT  */
  YYSYMBOL_ID = 10,                        /* ID  */
  YYSYMBOL_ORIENTATION = 11,               /* ORIENTATION  */
  YYSYMBOL_EQUAL = 12,                     /* EQUAL  */
  YYSYMBOL_STRING = 13,                    /* STRING  */
  YYSYMBOL_TEXT_OPEN_TAG = 14,             /* TEXT_OPEN_TAG  */
  YYSYMBOL_CLOSE_TAG = 15,                 /* CLOSE_TAG  */
  YYSYMBOL_TEXT = 16,                      /* TEXT  */
  YYSYMBOL_TEXT_COLOR = 17,                /* TEXT_COLOR  */
  YYSYMBOL_IMAGE_OPEN_TAG = 18,            /* IMAGE_OPEN_TAG  */
  YYSYMBOL_SRC = 19,                       /* SRC  */
  YYSYMBOL_PADDING = 20,                   /* PADDING  */
  YYSYMBOL_BUTTON_OPEN_TAG = 21,           /* BUTTON_OPEN_TAG  */
  YYSYMBOL_R_GROUP_OPEN_TAG = 22,          /* R_GROUP_OPEN_TAG  */
  YYSYMBOL_R_GROUP_CLOSE_TAG = 23,         /* R_GROUP_CLOSE_TAG  */
  YYSYMBOL_R_BUTTON_OPEN_TAG = 24,         /* R_BUTTON_OPEN_TAG  */
  YYSYMBOL_CHECKED_BUTTON = 25,            /* CHECKED_BUTTON  */
  YYSYMBOL_RB_NUMBER = 26,                 /* RB_NUMBER  */
  YYSYMBOL_PRO_BAR_OPEN_TAG = 27,          /* PRO_BAR_OPEN_TAG  */
  YYSYMBOL_MAX = 28,                       /* MAX  */
  YYSYMBOL_PROGRESS = 29,                  /* PROGRESS  */
  YYSYMBOL_YYACCEPT = 30,                  /* $accept  */
  YYSYMBOL_layout = 31,                    /* layout  */
  YYSYMBOL_lin_layout = 32,                /* lin_layout  */
  YYSYMBOL_lin_layout_attr = 33,           /* lin_layout_attr  */
  YYSYMBOL_mandatory_attr = 34,            /* mandatory_attr  */
  YYSYMBOL_lin_layout_opt_attr = 35,       /* lin_layout_opt_attr  */
  YYSYMBOL_id_attr = 36,                   /* id_attr  */
  YYSYMBOL_layout_width_attr = 37,         /* layout_width_attr  */
  YYSYMBOL_layout_height_attr = 38,        /* layout_height_attr  */
  YYSYMBOL_lin_layout_content = 39,        /* lin_layout_content  */
  YYSYMBOL_re_layout = 40,                 /* re_layout  */
  YYSYMBOL_re_layout_attr = 41,            /* re_layout_attr  */
  YYSYMBOL_re_layout_opt_attr = 42,        /* re_layout_opt_attr  */
  YYSYMBOL_re_layout_content = 43,         /* re_layout_content  */
  YYSYMBOL_element = 44,                   /* element  */
  YYSYMBOL_text_view = 45,                 /* text_view  */
  YYSYMBOL_text_attr = 46,                 /* text_attr  */
  YYSYMBOL_text_mandatory_attr = 47,       /* text_mandatory_attr  */
  YYSYMBOL_text_opt_attr = 48,             /* text_opt_attr  */
  YYSYMBOL_image_view = 49,                /* image_view  */
  YYSYMBOL_image_attr = 50,                /* image_attr  */
  YYSYMBOL_image_mandatory_attr = 51,      /* image_mandatory_attr  */
  YYSYMBOL_image_and_button_opt_attr = 52, /* image_and_button_opt_attr  */
  YYSYMBOL_padding_attr = 53,              /* padding_attr  */
  YYSYMBOL_button = 54,                    /* button  */
  YYSYMBOL_button_attr = 55,               /* button_attr  */
  YYSYMBOL_button_mandatory_attr = 56,     /* button_mandatory_attr  */
  YYSYMBOL_radio_group = 57,               /* radio_group  */
  YYSYMBOL_r_group_attr = 58,              /* r_group_attr  */
  YYSYMBOL_r_group_mandatory_attr = 59,    /* r_group_mandatory_attr  */
  YYSYMBOL_rb_number_attr = 60,            /* rb_number_attr  */
  YYSYMBOL_r_group_opt_attr = 61,          /* r_group_opt_attr  */
  YYSYMBOL_checked_button_attr = 62,       /* checked_button_attr  */
  YYSYMBOL_r_group_content = 63,           /* r_group_content  */
  YYSYMBOL_radio_button = 64,              /* radio_button  */
  YYSYMBOL_radio_button_attr = 65,         /* radio_button_attr  */
  YYSYMBOL_radio_button_mandatory_attr = 66, /* radio_button_mandatory_attr  */
  YYSYMBOL_radio_button_opt_attr = 67,     /* radio_button_opt_attr  */
  YYSYMBOL_68_1 = 68,                      /* $@1  */
  YYSYMBOL_pro_bar = 69,                   /* pro_bar  */
  YYSYMBOL_pro_bar_attr = 70,              /* pro_bar_attr  */
  YYSYMBOL_pro_bar_opt_attr = 71,          /* pro_bar_opt_attr  */
  YYSYMBOL_max_attr = 72,                  /* max_attr  */
  YYSYMBOL_progress_attr = 73,             /* progress_attr  */
  YYSYMBOL_max_id_attr = 74,               /* max_id_attr  */
  YYSYMBOL_progress_id_attr = 75,          /* progress_id_attr  */
  YYSYMBOL_max_progress_attr = 76,         /* max_progress_attr  */
  YYSYMBOL_progress_max_attr = 77,         /* progress_max_attr  */
  YYSYMBOL_all_three_ProgressBar_attr = 78 /* all_three_ProgressBar_attr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   263

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  236

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    50,    50,    51,    54,    57,    60,    61,    64,    65,
      66,    67,    68,    71,    87,   106,   123,   124,   127,   130,
     133,   134,   137,   138,   139,   142,   143,   144,   145,   146,
     147,   148,   151,   154,   157,   158,   159,   160,   163,   164,
     165,   166,   167,   170,   173,   176,   177,   178,   179,   182,
     183,   184,   185,   186,   189,   196,   199,   202,   203,   204,
     205,   208,   211,   214,   215,   216,   217,   220,   228,   229,
     230,   231,   232,   235,   241,   242,   245,   248,   251,   252,
     253,   254,   257,   257,   258,   261,   263,   266,   267,   268,
     270,   271,   272,   273,   274,   275,   277,   278,   281,   284,
     287,   290,   292,   299,   306,   307,   308,   309,   310,   315
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "LIN_LAYOUT_OPEN_TAG",
  "GT", "LIN_LAYOUT_CLOSE_TAG", "RE_LAYOUT_OPEN_TAG",
  "RE_LAYOUT_CLOSE_TAG", "LAYOUT_WIDTH", "LAYOUT_HEIGHT", "ID",
  "ORIENTATION", "EQUAL", "STRING", "TEXT_OPEN_TAG", "CLOSE_TAG", "TEXT",
  "TEXT_COLOR", "IMAGE_OPEN_TAG", "SRC", "PADDING", "BUTTON_OPEN_TAG",
  "R_GROUP_OPEN_TAG", "R_GROUP_CLOSE_TAG", "R_BUTTON_OPEN_TAG",
  "CHECKED_BUTTON", "RB_NUMBER", "PRO_BAR_OPEN_TAG", "MAX", "PROGRESS",
  "$accept", "layout", "lin_layout", "lin_layout_attr", "mandatory_attr",
  "lin_layout_opt_attr", "id_attr", "layout_width_attr",
  "layout_height_attr", "lin_layout_content", "re_layout",
  "re_layout_attr", "re_layout_opt_attr", "re_layout_content", "element",
  "text_view", "text_attr", "text_mandatory_attr", "text_opt_attr",
  "image_view", "image_attr", "image_mandatory_attr",
  "image_and_button_opt_attr", "padding_attr", "button", "button_attr",
  "button_mandatory_attr", "radio_group", "r_group_attr",
  "r_group_mandatory_attr", "rb_number_attr", "r_group_opt_attr",
  "checked_button_attr", "r_group_content", "radio_button",
  "radio_button_attr", "radio_button_mandatory_attr",
  "radio_button_opt_attr", "$@1", "pro_bar", "pro_bar_attr",
  "pro_bar_opt_attr", "max_attr", "progress_attr", "max_id_attr",
  "progress_id_attr", "max_progress_attr", "progress_max_attr",
  "all_three_ProgressBar_attr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-21)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-85)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      35,     3,     3,     9,   -21,   -21,    32,    53,    43,    93,
      44,    71,    79,    80,   -21,    81,   108,    84,   117,   121,
     -21,   128,   -21,   -21,   -21,   -21,    84,   -21,   -21,    67,
      55,   101,    28,     3,   -21,    64,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,   127,   130,   132,    74,   -21,   133,   131,
       1,    -3,   134,   113,   138,   135,    41,    37,   136,    52,
     140,   137,   115,    91,   141,    52,   143,   120,    33,    25,
     154,    -8,     3,     6,   144,   -21,   -21,   -21,    79,   147,
     -21,   -21,   148,   150,   149,   155,   -21,   157,   153,   -21,
     160,   162,   164,   165,   -21,   166,   159,   -21,    79,   167,
     169,   170,   171,   -21,   -21,   174,   -21,    44,    71,   168,
     176,   172,   -21,    79,   -21,   177,   178,    87,   -21,   -21,
     -21,   -21,   -21,    79,    79,   -21,   -21,   -21,   -21,     3,
     180,   179,   181,   182,   184,     3,   185,   186,   187,   188,
     -21,   -21,     3,   190,   191,   192,   -21,   -21,   -21,   104,
     103,   -21,   193,   -21,   -21,   194,   195,   197,   198,   -21,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,   199,    71,    79,
     200,   -21,   -21,    44,    71,   -21,   -21,   -21,    44,    71,
     203,   201,   116,   106,   196,   205,   -21,   -21,   -21,    -2,
      29,   208,   209,    44,   -21,   -21,   -21,   -21,   -21,   -21,
     -21,   210,   206,   212,   213,   -21,   -21,    79,   214,   202,
     215,   204,   207,   211,   -21,     3,   216,   217,   220,   -21,
     221,   223,   224,   226,   -21,   -21,    44,    71,   -21,   227,
     -21,   228,   -21,   -21,   -21,   -21
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     0,     0,     0,    12,
       0,     0,    21,     0,     1,     0,     0,     0,     0,     0,
       5,    10,     6,     7,    20,    19,    24,    14,    15,     0,
       0,     0,     0,     0,    25,     0,    26,    16,    27,    28,
      29,    30,    31,     0,     0,     0,     0,    22,     0,     0,
       0,     0,     0,    42,     0,     0,     0,     0,     0,    53,
       0,     0,     0,     0,     0,    53,     0,     0,     0,     0,
       0,    72,     0,    97,     0,     4,    17,    13,    11,     0,
      18,    23,     0,     0,     0,     0,    32,     0,    40,    33,
       0,     0,     0,     0,    43,     0,    51,    44,    52,     0,
       0,     0,     0,    55,    56,     0,    63,     0,     0,     0,
       0,    70,    62,    71,    64,     0,     0,    87,    86,    88,
      89,    91,    93,    94,    95,    96,    85,     9,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,    50,     0,     0,     0,     0,    67,    66,    65,     0,
       0,    74,     0,    68,    69,     0,     0,     0,     0,    90,
      92,   104,   105,   106,   107,    35,    34,     0,     0,    41,
       0,    46,    45,     0,     0,    54,    58,    57,     0,     0,
       0,     0,     0,     0,     0,    82,    61,    75,    73,    98,
      99,     0,     0,     0,    36,    39,    38,    48,    47,    59,
      60,     0,     0,     0,     0,    76,    77,     0,     0,   100,
       0,   101,    98,    99,    37,     0,     0,     0,     0,    83,
       0,     0,     0,     0,    79,    78,     0,     0,   102,     0,
     103,     0,    81,    80,   108,   109
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -21,   -21,   242,   -21,    -1,   -21,    -5,   -11,    -7,   -21,
     243,   -21,   -21,   -21,   -20,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   163,   151,   -21,   -21,   -21,   -21,   -21,   -21,
      68,   -21,   139,   -21,    94,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   129,   142,   -21,   -21,   145,   146,   -21
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,    34,     8,     9,    20,    96,    10,    11,    35,
      36,    13,    25,    46,    37,    38,    52,    53,    89,    39,
      58,    59,    97,    98,    40,    64,    65,    41,    70,    71,
      72,   112,   113,   150,   151,   184,   185,   206,   207,    42,
      74,   118,   119,   120,   121,   122,   123,   124,   125
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,    12,    18,    22,    21,     6,    47,    24,    18,    14,
       7,     6,     7,    85,    84,    76,    18,   110,    50,    56,
      62,    68,    51,    57,    63,    69,    81,   208,    49,    55,
      61,    67,    73,     6,   115,   116,     6,     7,     1,    18,
      23,     2,     7,    22,    15,     6,    23,    17,    88,    22,
       7,    66,    23,     7,    66,    22,    93,   210,    23,    66,
      92,    22,    18,     6,     7,    16,   111,     1,   117,    75,
       2,   114,    95,   127,    54,     6,     7,     1,    29,     6,
       2,    80,    30,    48,    26,    31,    32,     1,    29,    18,
       2,    33,    30,   141,    27,    31,    32,   148,    29,     6,
     147,    33,    30,    18,    19,    31,    32,   102,   154,     6,
       7,    33,     6,     7,     6,   157,   158,    60,   163,   164,
     180,    28,   204,    18,     7,     7,   186,   149,   165,    43,
      87,   101,   203,    44,   171,   106,   107,   108,   182,    45,
      77,   176,   183,    78,    79,    82,    66,    83,   181,    86,
      90,    94,    99,   100,    91,   105,   103,   194,   109,   126,
     128,   129,   130,   198,   195,   131,   197,   132,   200,   133,
     134,   199,    23,   135,   136,    22,   137,   138,   139,    95,
     142,   143,   144,   145,   209,   211,   214,   146,   152,   155,
     156,   167,   149,   166,   168,   169,   170,   110,   172,   173,
     174,   175,   219,   177,   178,   179,   188,   189,   190,   191,
     192,   205,   193,   196,   224,   201,   233,   202,   216,   232,
     -84,   212,   213,   215,   217,   218,   220,   222,   104,   225,
     226,   221,   223,   227,   228,   229,   208,   230,   231,   210,
     234,   235,     4,     5,   187,     0,   159,   140,     0,     0,
     153,     0,     0,     0,     0,     0,     0,     0,     0,   160,
       0,     0,   161,   162
};

static const yytype_int16 yycheck[] =
{
      11,     2,    10,    10,     9,     8,    26,    12,    10,     0,
       9,     8,     9,    16,    13,    35,    10,    25,    29,    30,
      31,    32,    29,    30,    31,    32,    46,    29,    29,    30,
      31,    32,    33,     8,    28,    29,     8,     9,     3,    10,
      51,     6,     9,    50,    12,     8,    57,     4,    53,    56,
       9,    26,    63,     9,    26,    62,    19,    28,    69,    26,
      19,    68,    10,     8,     9,    12,    71,     3,    73,     5,
       6,    72,    20,    78,    19,     8,     9,     3,    14,     8,
       6,     7,    18,    16,     4,    21,    22,     3,    14,    10,
       6,    27,    18,    98,    13,    21,    22,   108,    14,     8,
     107,    27,    18,    10,    11,    21,    22,    16,   113,     8,
       9,    27,     8,     9,     8,    28,    29,    16,   123,   124,
      16,    13,    16,    10,     9,     9,    23,    24,   129,    12,
      17,    16,    16,    12,   135,    67,    68,    69,   149,    11,
      13,   142,   149,    13,    12,    12,    26,    16,   149,    15,
      12,    15,    12,    16,    19,    12,    15,   168,     4,    15,
      13,    13,    12,   174,   169,    16,   173,    12,   179,    12,
      17,   178,   183,    13,    12,   182,    12,    12,    12,    20,
      13,    12,    12,    12,   189,   190,   193,    13,    12,    12,
      12,    12,    24,    13,    13,    13,    12,    25,    13,    13,
      13,    13,   207,    13,    13,    13,    13,    13,    13,    12,
      12,    15,    13,    13,   215,    12,   227,    16,    12,   226,
      15,    13,    13,    13,    12,    12,    12,    12,    65,    13,
      13,    29,    28,    13,    13,    12,    29,    13,    12,    28,
      13,    13,     0,     0,   150,    -1,   117,    96,    -1,    -1,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
      -1,    -1,   117,   117
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     6,    31,    32,    40,     8,     9,    33,    34,
      37,    38,    34,    41,     0,    12,    12,     4,    10,    11,
      35,    36,    38,    37,    36,    42,     4,    13,    13,    14,
      18,    21,    22,    27,    32,    39,    40,    44,    45,    49,
      54,    57,    69,    12,    12,    11,    43,    44,    16,    34,
      37,    38,    46,    47,    19,    34,    37,    38,    50,    51,
      16,    34,    37,    38,    55,    56,    26,    34,    37,    38,
      58,    59,    60,    34,    70,     5,    44,    13,    13,    12,
       7,    44,    12,    16,    13,    16,    15,    17,    36,    48,
      12,    19,    19,    19,    15,    20,    36,    52,    53,    12,
      16,    16,    16,    15,    52,    12,    60,    60,    60,     4,
      25,    36,    61,    62,    34,    28,    29,    36,    71,    72,
      73,    74,    75,    76,    77,    78,    15,    36,    13,    13,
      12,    16,    12,    12,    17,    13,    12,    12,    12,    12,
      53,    36,    13,    12,    12,    12,    13,    38,    37,    24,
      63,    64,    12,    62,    36,    12,    12,    28,    29,    72,
      73,    76,    77,    36,    36,    34,    13,    12,    13,    13,
      12,    34,    13,    13,    13,    13,    34,    13,    13,    13,
      16,    34,    37,    38,    65,    66,    23,    64,    13,    13,
      13,    12,    12,    13,    37,    36,    13,    38,    37,    38,
      37,    12,    16,    16,    16,    15,    67,    68,    29,    36,
      28,    36,    13,    13,    38,    13,    12,    12,    12,    36,
      12,    29,    12,    28,    34,    13,    13,    13,    13,    12,
      13,    12,    38,    37,    13,    13
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    30,    31,    31,    32,    33,    34,    34,    35,    35,
      35,    35,    35,    36,    37,    38,    39,    39,    40,    41,
      42,    42,    43,    43,    43,    44,    44,    44,    44,    44,
      44,    44,    45,    46,    47,    47,    47,    47,    48,    48,
      48,    48,    48,    49,    50,    51,    51,    51,    51,    52,
      52,    52,    52,    52,    53,    54,    55,    56,    56,    56,
      56,    57,    58,    59,    59,    59,    59,    60,    61,    61,
      61,    61,    61,    62,    63,    63,    64,    65,    66,    66,
      66,    66,    68,    67,    67,    69,    70,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    72,    73,
      74,    75,    76,    77,    78,    78,    78,    78,    78,    78
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     5,     2,     2,     2,     4,     4,
       1,     3,     0,     3,     3,     3,     1,     2,     5,     2,
       1,     0,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     4,     4,     5,     6,     4,     4,
       1,     3,     0,     3,     2,     4,     4,     5,     5,     2,
       2,     1,     1,     0,     3,     3,     2,     4,     4,     5,
       5,     5,     2,     2,     2,     3,     3,     3,     2,     2,
       1,     1,     0,     3,     1,     2,     3,     2,     4,     4,
       5,     5,     0,     2,     0,     3,     2,     1,     1,     1,
       2,     1,     2,     1,     1,     1,     1,     0,     3,     3,
       4,     4,     6,     6,     2,     2,     2,     2,     7,     7
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 13: /* id_attr: ID EQUAL STRING  */
#line 72 "parser.y"
        { 
            insert_id((yyvsp[0].str)); 

            if(flag == true && strcmp(checked_button_id, "") != 0)
            {
                if(strcmp((yyvsp[0].str), checked_button_id) == 0)
                {
                    flag_checked = 1;
                }
            }

            flag = false;
        }
#line 1460 "parser.tab.c"
    break;

  case 14: /* layout_width_attr: LAYOUT_WIDTH EQUAL STRING  */
#line 87 "parser.y"
                                             {
                        if(is_numeric((yyvsp[0].str)))
                        {
                            int pos_int = string_to_int((yyvsp[0].str));
                            checkPositiveInt(pos_int, "layout_width");
                        }
                        else
                        {
                            if(!((strcmp((yyvsp[0].str), "\"match_parent\"") == 0) || (strcmp((yyvsp[0].str), "\"wrap_content\"") == 0))){
                            char err_msg[] = "False android:layout_width = ";
                            strcat(err_msg, (yyvsp[0].str));
                            yyerror(err_msg); 
                            }
                        }
                        
                        
                    }
#line 1482 "parser.tab.c"
    break;

  case 15: /* layout_height_attr: LAYOUT_HEIGHT EQUAL STRING  */
#line 106 "parser.y"
                                              {
                        if(is_numeric((yyvsp[0].str)))
                        {
                            int pos_int = string_to_int((yyvsp[0].str));
                            checkPositiveInt(pos_int, "layout_height");
                        }
                        else
                        {
                            if(!((strcmp((yyvsp[0].str), "\"match_parent\"") == 0) || (strcmp((yyvsp[0].str), "\"wrap_content\"") == 0))){
                            char err_msg[] = "False android:layout_height = ";
                            strcat(err_msg, (yyvsp[0].str));
                            yyerror(err_msg); 
                            }
                        }
                    }
#line 1502 "parser.tab.c"
    break;

  case 54: /* padding_attr: PADDING EQUAL STRING  */
#line 190 "parser.y"
{
    int pos_int = string_to_int((yyvsp[0].str));
    checkPositiveInt(pos_int, "padding");
}
#line 1511 "parser.tab.c"
    break;

  case 67: /* rb_number_attr: RB_NUMBER EQUAL STRING  */
#line 221 "parser.y"
                    { 
                        int pos_int = string_to_int((yyvsp[0].str));
                        checkPositiveInt(pos_int, "rb_number"); 
                        rb_number = pos_int;
                    }
#line 1521 "parser.tab.c"
    break;

  case 73: /* checked_button_attr: CHECKED_BUTTON EQUAL STRING  */
#line 236 "parser.y"
{
    strcpy(checked_button_id, (yyvsp[0].str));
}
#line 1529 "parser.tab.c"
    break;

  case 82: /* $@1: %empty  */
#line 257 "parser.y"
                        { flag = true; }
#line 1535 "parser.tab.c"
    break;

  case 98: /* max_attr: MAX EQUAL STRING  */
#line 281 "parser.y"
                           { checkPositiveInt(string_to_int((yyvsp[0].str)), "max"); }
#line 1541 "parser.tab.c"
    break;

  case 99: /* progress_attr: PROGRESS EQUAL STRING  */
#line 284 "parser.y"
                                    { checkPositiveInt(string_to_int((yyvsp[0].str)), "progress"); }
#line 1547 "parser.tab.c"
    break;

  case 100: /* max_id_attr: MAX EQUAL STRING id_attr  */
#line 287 "parser.y"
                                     { checkPositiveInt(string_to_int((yyvsp[-1].str)), "max"); }
#line 1553 "parser.tab.c"
    break;

  case 101: /* progress_id_attr: PROGRESS EQUAL STRING id_attr  */
#line 290 "parser.y"
                                               { checkPositiveInt(string_to_int((yyvsp[-1].str)), "progress"); }
#line 1559 "parser.tab.c"
    break;

  case 102: /* max_progress_attr: MAX EQUAL STRING PROGRESS EQUAL STRING  */
#line 292 "parser.y"
                                                         { 
    checkPositiveInt(string_to_int((yyvsp[-3].str)), "max");
    checkPositiveInt(string_to_int((yyvsp[0].str)), "progress");
    checkRestrictions(string_to_int((yyvsp[-3].str)),string_to_int((yyvsp[0].str)), "max", "progress");
                }
#line 1569 "parser.tab.c"
    break;

  case 103: /* progress_max_attr: PROGRESS EQUAL STRING MAX EQUAL STRING  */
#line 299 "parser.y"
                                                         {
    checkPositiveInt(string_to_int((yyvsp[-3].str)), "progress");
    checkPositiveInt(string_to_int((yyvsp[0].str)), "max");
    checkRestrictions(string_to_int((yyvsp[0].str)),string_to_int((yyvsp[-3].str)), "max", "progress");
                }
#line 1579 "parser.tab.c"
    break;

  case 108: /* all_three_ProgressBar_attr: MAX EQUAL STRING id_attr PROGRESS EQUAL STRING  */
#line 310 "parser.y"
                                                                          {
                            checkPositiveInt(string_to_int((yyvsp[-4].str)), "max");
                            checkPositiveInt(string_to_int((yyvsp[0].str)), "progress");
                            checkRestrictions(string_to_int((yyvsp[-4].str)),string_to_int((yyvsp[0].str)), "max", "progress");
                            }
#line 1589 "parser.tab.c"
    break;

  case 109: /* all_three_ProgressBar_attr: PROGRESS EQUAL STRING id_attr MAX EQUAL STRING  */
#line 315 "parser.y"
                                                                        {
                            checkPositiveInt(string_to_int((yyvsp[0].str)), "max");
                            checkPositiveInt(string_to_int((yyvsp[-4].str)), "progress");
                            checkRestrictions(string_to_int((yyvsp[0].str)),string_to_int((yyvsp[-4].str)), "max", "progress");
                            }
#line 1599 "parser.tab.c"
    break;


#line 1603 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 322 "parser.y"

bool is_numeric(char* str) {

    char local_str[20];
    strcpy(local_str, str);
    remove_quotes(local_str);
    // Check the first character
    int i = 0;
    if (local_str[0] == '-') {
        // If we have  a minus sign, we go to the next  character
        i = 1;
    }
    // Check the rest of the  characters
    while (local_str[i] != '\0') {
        // If a character is not a number, return false
        if (local_str[i] < '0' || local_str[i] > '9') {
            return false;
        }
        i++;
    }
    
    return true;
}

void remove_quotes(char* str) {
    int length = strlen(str);
    
    //  We check how long is the string  for it to have quotes 
    if (length >= 2 && str[0] == '"' && str[length - 1] == '"') {
        // We substract by shifting left 
        for (int i = 0; i < length - 1; i++) {
            str[i] = str[i + 1];
        }
        
        // We substaract the final quote and replace it 
        str[length - 2] = '\0';
    }
}

int string_to_int(char* str)
{
    remove_quotes(str);
    return atoi(str);
}

void insert_id(char *str)
{

    Node *newNode = malloc(sizeof(Node));
    newNode->id = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(newNode->id, str);
    newNode->next = head;
    head = newNode;

    bool id_exists = false;
    id_exists = check_id(str);

    if(id_exists)
    {
        char err_msg[] = "Duplicate android:id ";
        strcat(err_msg, str);
        yyerror(err_msg); 
    }
}

bool check_id(char *str)
{
    bool id_exists = false;

    Node *current = head->next;
    // we check if new id exists
    while (current != NULL) {
        if(strcmp(current->id, str)==0)
            id_exists = true;
        current = current->next;
    }

    return id_exists;
}

void checkPositiveInt(int integ, char attribute[]){
       if(integ<=0){
                char err_msg[50] = "False android:";
                            char str1[20];
                            sprintf(str1, "%d", integ); // Convert pos_int into string
                            strcat(err_msg, attribute); 
                            strcat(err_msg, " = \"");
                            strcat(err_msg, str1);
                            strcat(err_msg, "\"");
                            yyerror(err_msg); 
            }
}

void checkRestrictions(int integ1, int integ2, char* less, char* more){
    if(integ1<integ2){
                        char str[20];
                        char str2[20];
                        sprintf(str, "%d", integ1); 
                        sprintf(str2, "%d", integ2); 

                        char err_msg[50] = "False android:" ;
                        strcat(err_msg, less); 
                        strcat(err_msg, " = \"");
                        strcat(err_msg, str);
                        strcat(err_msg, "\"");
                        strcat(err_msg, " is less than android:");
                        strcat(err_msg, more);
                        strcat(err_msg, " = \""); 
                        strcat(err_msg, str2);
                        strcat(err_msg, "\"");

                        yyerror(err_msg); 
                    }
}

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <inpufile>\n", argv[0]);
        return 1;
    }

    FILE *input_file = fopen(argv[1], "r");
    char line[100];
    if (!input_file) {
        perror("Input file did not open succesfully");
        return 1;
    }
    
    yyin = input_file;
    
    yyparse();

    printf("\n\nYour XML code was compiled succesfully\n");

    fclose(input_file);

    return 0;
}

