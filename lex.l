%{
   #include "synta.tab.h"
   #include "ts.h"
   #include <string.h>
   extern YYSTYPE yylval;
   extern int nb_ligne;
   extern int nb_colonne;
%}
 
lettre [a-zA-Z]
chiffre [0-9]
IDF {lettre}({lettre}|{chiffre})*
cstREL \-?{chiffre}+\.{chiffre}+
cstENT \-?{chiffre}+|\+?{chiffre}+  
DOUBL_QUOT \"[^\"]*\"
comment "%".*
%%

PROGRAM { rechercher(yytext,"Mot cle",0,0,0,0, 1);yylval.str=strdup(yytext);nb_colonne =nb_colonne+ yyleng;return mc_program;}
END {rechercher(yytext,"Mot cle",0,0,0,0, 1);yylval.str=strdup(yytext); nb_colonne =nb_colonne+ yyleng;return mc_end;}
CALL { rechercher(yytext,"Mot cle",0,0,0,0, 1);yylval.str=strdup(yytext); nb_colonne =nb_colonne+ yyleng;return mc_call;}
ROUTINE { rechercher(yytext,"Mot cle",0,0,0,0, 1);yylval.str=strdup(yytext); nb_colonne =nb_colonne+ yyleng;return mc_routine;}
ENDR { rechercher(yytext,"Mot cle",0,0,0,0, 1);yylval.str=strdup(yytext);nb_colonne =nb_colonne+ yyleng; return mc_endr;}
INTEGER { rechercher(yytext,"Mot cle",0,0,0,0, 1);yylval.str=strdup(yytext);nb_colonne =nb_colonne+ yyleng; return integer;}
REAL {rechercher(yytext,"Mot cle",0,0,0,0, 1);yylval.str=strdup(yytext);nb_colonne =nb_colonne+ yyleng;return real; }
CHARACTER {rechercher(yytext,"Mot cle",0,0,0,0, 1);yylval.str=strdup(yytext);nb_colonne =nb_colonne+ yyleng; return character;}
LOGICAL { rechercher(yytext,"Mot cle",0,0,0,0,1);yylval.str=strdup(yytext);nb_colonne =nb_colonne+ yyleng;return logical;}
DIMENSION {rechercher(yytext,"Mot cle",0,0,0,0, 1); yylval.str=strdup(yytext); nb_colonne =nb_colonne+ yyleng;return dimension;}

TRUE { rechercher(yytext,"Mot cle",0,0,0,0, 1);yylval.str=strdup(yytext);nb_colonne =nb_colonne+ yyleng; return mc_true;}
FALSE {rechercher(yytext,"Mot cle",0,0,0,0, 1);yylval.str=strdup(yytext); nb_colonne =nb_colonne+ yyleng;return mc_false;}

READ {rechercher(yytext,"Mot cle",0,0,0,0, 1); printf("READ");yylval.str=strdup(yytext);nb_colonne =nb_colonne+ yyleng;return READ;}
WRITE { rechercher(yytext,"Mot cle",0,0,0,0, 1);yylval.str=strdup(yytext); nb_colonne =nb_colonne+ yyleng;return mc_write;}
IF { rechercher(yytext,"Mot cle",0,0,0,0, 1);yylval.str=strdup(yytext); nb_colonne =nb_colonne+ yyleng;return inst_if;}
THEN {rechercher(yytext,"Mot cle",0,0,0,0, 1); yylval.str=strdup(yytext); nb_colonne =nb_colonne+ yyleng;return inst_then;}
ELSE {rechercher(yytext,"Mot cle",0,0,0,0, 1); yylval.str=strdup(yytext);nb_colonne =nb_colonne+ yyleng;return mc_else;}
ENDIF {rechercher(yytext,"Mot cle",0,0,0,0, 1);yylval.str=strdup(yytext);nb_colonne =nb_colonne+ yyleng;return mc_endif;}

DOWHILE { rechercher(yytext,"Mot cle",0,0,0,0, 1);yylval.str=strdup(yytext); nb_colonne =nb_colonne+ yyleng;return inst_dowhile;}
ENDDO { rechercher(yytext,"Mot cle",0,0,0,0, 1);yylval.str=strdup(yytext);nb_colonne =nb_colonne+ yyleng;return mc_enddo;}

EQUIVALENCE {rechercher(yytext,"Mot cle",0,0,0,0, 1); yylval.str=strdup(yytext); nb_colonne =nb_colonne+ yyleng;return mc_equivalence;}
.OR. { rechercher(yytext,"Mot cle",0,0,0,0, 1);yylval.str=strdup(yytext); nb_colonne =nb_colonne+ yyleng;return mc_or;}
.AND. { rechercher(yytext,"Mot cle",0,0,0,0, 1);yylval.str=strdup(yytext); nb_colonne =nb_colonne+ yyleng;return mc_and;}
.GT. { rechercher(yytext,"Mot cle",0,0,0,0, 1);yylval.str=strdup(yytext);nb_colonne =nb_colonne+ yyleng;return mc_gt;}
.GE. {rechercher(yytext,"Mot cle",0,0,0,0,1); yylval.str=strdup(yytext);nb_colonne =nb_colonne+ yyleng;return mc_ge;}
.EQ. {rechercher(yytext,"Mot cle",0,0,0,0,1); yylval.str=strdup(yytext);nb_colonne =nb_colonne+ yyleng;return mc_eq;}
.NE. {rechercher(yytext,"Mot cle",0,0,0,0, 1); yylval.str=strdup(yytext);nb_colonne =nb_colonne+ yyleng;return mc_ne;}
.LE. {rechercher(yytext,"Mot cle",0,0,0,0, 1); yylval.str=strdup(yytext);nb_colonne =nb_colonne+ yyleng;return mc_le;}
.LT. {rechercher(yytext,"Mot cle",0,0,0,0, 1); yylval.str=strdup(yytext);nb_colonne =nb_colonne+ yyleng; return mc_lt;}

{IDF} {
    rechercher(yytext,"IDF"," ",0,0,0,0);
    if (yyleng <= 10) {
        yylval.str=strdup(yytext);
        nb_colonne =nb_colonne+ yyleng;return idf;
    } else {
        yylval.str=strdup(yytext);
        printf("\n****WARNING:idf trop long****\n");return idf;
    }
}

{cstREL} {rechercher(yytext,"Cst entiere","REAL",atof(yytext),0,0,0); yylval.reel=atoi(yytext);nb_colonne =nb_colonne+ yyleng; if (atoi(yytext) > 32767.32767 || atoi(yytext) < -32768.32767) {printf("\n***lex.l \"ex1.txt\" ligne %d colonne %d :depasser taille entier***\n", nb_ligne,nb_colonne);} return cst_reel;}
{cstENT} {rechercher(yytext,"Cst entiere","INTEGER",atof(yytext),0,0,0); yylval.entier=atoi(yytext);nb_colonne =nb_colonne+ yyleng; if (atoi(yytext) > 32767 || atoi(yytext) < -32768) {printf("\n***lex.l \"ex1.txt\" ligne %d colonne %d :depasser taille reel***\n", nb_ligne,nb_colonne);} return cst_int;}
{DOUBL_QUOT} {rechercher(yytext,"chaine de car",0,0,0,0, 1); yylval.reel=atoi(yytext);return DOUBL_QUOT;}
"+" {rechercher(yytext,"Mot cle",0,0,0,0, 2); yylval.str=strdup(yytext); nb_colonne =nb_colonne+ yyleng;return plus;}
"-" { rechercher(yytext,"Mot cle",0,0,0,0, 2);yylval.str=strdup(yytext); nb_colonne =nb_colonne+ yyleng;return moins;}
"*" { rechercher(yytext,"Mot cle",0,0,0,0, 2);yylval.str=strdup(yytext); nb_colonne =nb_colonne+ yyleng;return mc_mult;}
"/" { rechercher(yytext,"Mot cle",0,0,0,0, 2);yylval.str=strdup(yytext); nb_colonne =nb_colonne+ yyleng;return mc_div;}
"=" { rechercher(yytext,"Mot cle",0,0,0,0, 2);yylval.str=strdup(yytext); nb_colonne =nb_colonne+ yyleng;return egal;}
"," { rechercher(yytext,"Mot cle",0,0,0,0, 2);yylval.str=strdup(yytext);nb_colonne =nb_colonne+ yyleng;return vg;}
";" { rechercher(yytext,"Mot cle",0,0, 0,0,2);yylval.str=strdup(yytext);nb_colonne =nb_colonne+ yyleng;return pvg;}
"(" { rechercher(yytext,"Mot cle",0,0,0,0, 2);yylval.str=strdup(yytext); nb_colonne =nb_colonne+ yyleng;return pr_ov;}
")" {rechercher(yytext,"Mot cle",0,0,0,0, 2);yylval.str=strdup(yytext);nb_colonne =nb_colonne+ yyleng;return pr_fer;}


{comment} {rechercher(yytext,"comment",0,0,0,0, 1); nb_colonne =nb_colonne+ yyleng;return comment;}

[ \t]
\n { nb_ligne++; nb_colonne = 1; }
. { printf("\n***lex.l \"ex1.txt\" ligne %d colonne %d : syntax error***\n", nb_ligne,nb_colonne); }
%%

int yywrap() {
    // Handle end-of-file conditions here if needed
    return 1; // Return 1 to indicate no more input
}


