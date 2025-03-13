
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_program = 258,
     mc_end = 259,
     mc_call = 260,
     mc_routine = 261,
     mc_endr = 262,
     integer = 263,
     real = 264,
     character = 265,
     logical = 266,
     dimension = 267,
     mc_true = 268,
     mc_false = 269,
     READ = 270,
     mc_write = 271,
     inst_if = 272,
     inst_then = 273,
     mc_else = 274,
     mc_endif = 275,
     inst_dowhile = 276,
     mc_enddo = 277,
     mc_equivalence = 278,
     mc_or = 279,
     mc_and = 280,
     mc_gt = 281,
     mc_ge = 282,
     mc_eq = 283,
     mc_ne = 284,
     mc_le = 285,
     mc_lt = 286,
     idf = 287,
     cst_reel = 288,
     cst_int = 289,
     DOUBL_QUOT = 290,
     plus = 291,
     moins = 292,
     mc_mult = 293,
     mc_div = 294,
     egal = 295,
     vg = 296,
     pvg = 297,
     pr_ov = 298,
     pr_fer = 299,
     comment = 300
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 16 "synta.y"

         int  entier;
         char* str;
         float reel;



/* Line 1676 of yacc.c  */
#line 105 "synta.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


