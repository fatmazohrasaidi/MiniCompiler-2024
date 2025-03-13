%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
        int nb_ligne=1, nb_colonne=1;
	char sauv_op[20];
	//#include "ts.h"
	int yylex();
	int yyerror(char *msg);
void mise_ajour(char entite[], int lmax, int cmax, int y);
void verifi_type(char entite[], int l, int c);
int lookup(char entite[], int y);
void initialisation();
void afficher();
%}
%union{
         int  entier;
         char* str;
         float reel;
}


%token <str>mc_program <str>mc_end <str>mc_call <str>mc_routine <str>mc_endr <str>integer <str>real <str>character <str>logical <str>dimension <str>mc_true <str>mc_false <str>READ <str>mc_write 
%token <str>inst_if <str>inst_then <str>mc_else <str>mc_endif <str>inst_dowhile <str>mc_enddo <str>mc_equivalence <str>mc_or <str>mc_and <str>mc_gt <str>mc_ge <str>mc_eq <str>mc_ne <str>mc_le <str>mc_lt 
%token <str>idf <reel>cst_reel <entier>cst_int <str>DOUBL_QUOT <str>plus <str>moins <str>mc_mult <str>mc_div <str>egal <str>vg <str>pvg <str>pr_ov <str>pr_fer <str>comment
%start S

 
%%
S:ROUT PRO DECLARATION INSTRUCTION FIN{printf("\nsyntaxe correcte");YYACCEPT;}
  ;

ROUT:ROUT TYPE DEB_ROUT LISTE_PARAME PRFER DECLARATION INSTRUCTION mc_endr {printf("%s ", $8); }
   |ROUT TYPE DEB_ROUT  LISTE_PARAME PRFER comment DECLARATION INSTRUCTION mc_endr {printf("%s ", $9); }
   |
  ;
DEB_ROUT: mc_routine idf pr_ov {printf("%s %s %s",$1,$2,$3); mise_ajour($2,0,0,0);mise_ajour($2,0,0,1);mise_ajour(";",0,0,1); }
  ;
LISTE_PARAME:LISTE_PARAME vg idf {printf("%s %s",$2,$3);}
   |    idf { printf("%s",$1); }
  ;

FIN:comment mc_end {printf("\n%s\n", $2); }
    |mc_end {printf("\n%s\n", $1); }
  ;
PRO:mc_program idf comment{ printf("\n%s %s\n",$1,$2); }
   |mc_program idf{ printf("\n%s %s\n",$1,$2); }
  ;

TYPE:integer {printf("%s ", $1); mise_ajour($1,0,0,1);}
   |real {printf("%s ", $1); mise_ajour($1,0,0,1);}
   |logical { printf("%s ", $1);mise_ajour($1,0,0,1); }
   |CHAR
  ;
CHAR:character { printf("%s ", $1); mise_ajour($1,0,0,1); }
  ;

DECLARATION:DECLARATION TYPE IDF_SIM pvg { printf("%s\n",$4);mise_ajour($4,0,0,1); }
   |DECLARATION TYPE IDF_TAB pvg{ printf("%s\n",$4); mise_ajour($4,0,0,1);}
   |DECLARATION CHAR IDF_CHAR pvg { printf("%s\n",$4); mise_ajour($4,0,0,1);}
   |TYPE IDF_SIM pvg  { printf("%s\n", $3); mise_ajour($3,0,0,1);}
   |TYPE IDF_TAB pvg { printf("%s\n", $3); mise_ajour($3,0,0,1);}
   |CHAR IDF_CHAR pvg { printf("%s\n",$3); mise_ajour($3,0,0,1);}
   |comment DECLARATION
   |
  ;

IDF_SIM:IDF_SIM vg idf {printf("%s %s",$2,$3);if(lookup($3,0)==1) printf("*erreur semantique!Double declaration*");  mise_ajour($3,0,0,1);}
   |    idf { printf("%s",$1);if(lookup($1,0)==1) printf("*erreur semantique!Double declaration*");  mise_ajour($1,0,0,1);}
  ;

IDF_TAB:IDF_TAB vg idf dimension pr_ov cst_int vg cst_int pr_fer { printf("%s %s %s %s %d %s %d %s",$2,$3,$4,$5,$6,$7,$8,$9);if(lookup($3,0)==1) printf("*erreur semantique!Double declaration*"); mise_ajour($3,0,0,1);mise_ajour( $3,$6,$8,2); }
   |IDF_TAB vg idf dimension pr_ov cst_int pr_fer { printf("%s %s %s %s %d %s",$2,$3,$4,$5,$6,$7);if(lookup($3,0)==1) printf("*erreur semantique!Double declaration*");  mise_ajour($3,0,0,1);mise_ajour( $3,$6,0 ,2);} 
   |idf dimension pr_ov cst_int vg cst_int pr_fer { printf("%s %s %s %d %s %d %s",$1,$2,$3,$4,$5,$6,$7);if(lookup($1,0)==1) printf("*erreur semantique!Double declaration*"); mise_ajour($1,0,0,1); mise_ajour( $1,$4,$6,2);}
   |idf dimension pr_ov cst_int pr_fer { printf("%s %s %s %d %s",$1,$2,$3,$4,$5);mise_ajour($1,0,0,1);if(lookup($1,0)==1) printf("*erreur semantique!Double declaration*"); mise_ajour( $1,$4,0 ,2);/**declaration d un plusieurs tableau**/ }
  ;
IDF_CHAR:IDF_CHAR vg idf mc_mult cst_int {printf("%s %s %s %d",$2,$3,$4,$5);mise_ajour($3,0,0,1); }
   |    idf mc_mult cst_int  { printf("%s%s%d",$1,$2,$3); mise_ajour($1,0,0,1);}
  ;





INSTRUCTION: AFFECTATION INSTRUCTION 
   | ENTRE_SORTI INSTRUCTION
   | CONDITION_IF INSTRUCTION
   | CONDITION_WHILE INSTRUCTION
   | APPEL_FON INSTRUCTION
   | EQUIV INSTRUCTION
   | AFFECTATION 
   | ENTRE_SORTI 
   | CONDITION_IF 
   | CONDITION_WHILE
   | APPEL_FON 
   | EQUIV 
   | comment INSTRUCTION
   |
 ;


AFFECTATION: AFF OPERANDE_S pvg  {printf(" %s\n",$3);verifi_type($3,0,0);}                                          
  ;

AFF:idf egal {printf("%s %s",$1,$2); 
		verifi_type($1,0,0);
			 }




OPERANDE_S:OPERANDE_S OPERATION OPERANDE_S2 
   |OPERANDE_S OPERATION OPERANDE
   |OPERANDE
   |OPERANDE_S2 
   ;
OPERANDE_S2:PROV OPERANDE_S PRFER
  ;

OPERANDE:cst_reel {printf(" %.2f",$1);char str[20];sprintf(str,"%.2f",$1); verifi_type(str,0,0);}
   |idf {printf("%s",$1);verifi_type($1,0,0);}
   |cst_int {printf(" %d",$1);char str[20];sprintf(str,"%d",$1); verifi_type(str,0,0);if ( strcmp(sauv_op,"/")==0  && $1==0) {printf("**erreur!division par 0\n");strcpy(sauv_op, ";");}}
   |idf pr_ov cst_int vg cst_int pr_fer {printf(" %s %s %d %s %d %s",$1,$2,$3,$4,$5,$6);verifi_type($1,$3,$5);}
   |idf pr_ov cst_int pr_fer {printf(" %s %s %d %s",$1,$2,$3,$4);verifi_type($1,$3,0);}
   |DOUBL_QUOT {printf(" %s",$1);/*verifi_type($1);*/}
   |mc_true{printf(" %s",$1);verifi_type($1,0,0);}
   |mc_false{printf(" %s",$1);verifi_type($1,0,0);}
  ;

OPERATION:plus {printf(" %s",$1);strcpy(sauv_op, $1);}
   |moins {printf(" %s",$1);strcpy(sauv_op, $1);}
   |mc_mult {printf(" %s",$1);strcpy(sauv_op, $1);}
   |mc_div {printf(" %s",$1);strcpy(sauv_op, $1);}
  ;
PROV:pr_ov {printf(" %s",$1);}
   ;
PRFER:pr_fer {printf(" %s",$1);}
   ;











ENTRE_SORTI:READ PROV PLUSidf pr_fer pvg {printf("%s %s\n",$4,$5);}
   |DEBUT_WRITE BODYWRITE FIN_WRITE
  ;
DEBUT_WRITE:mc_write  pr_ov {printf("%s %s",$1,$2);}
  ;
BODYWRITE:BODYWRITE vg DOUBL_QUOT {printf("%s %s",$2,$3);}
   |BODYWRITE vg idf {printf("%s %s",$2,$3);if(lookup($3,0)==0) printf("*erreur semantique!%s non declaration*",$3);}
   |DOUBL_QUOT {printf(" %s",$1);}
   |idf {printf(" %s",$1);if(lookup($1,0)==0) printf("*erreur semantique!%s non declaration*",$1);}
  ;
FIN_WRITE:pr_fer pvg{printf("%s %s\n",$1,$2);}
  ;
PLUSidf:PLUSidf vg idf{printf("%s %s",$2,$3);if(lookup($3,0)==0) printf("*erreur semantique!%s non declaration*",$3);}
   |idf {printf(" %s",$1);if(lookup($1,0)==0) printf("*erreur semantique!%s non declaration*",$1);}
   ;









CONDITION_IF:INSTRUCTION_IF  INSTRUCTION_THEN  INSTRUCT_IF
  ;
INSTRUCTION_IF:DEB_IF EXP_COND
  ;

DEB_IF: inst_if {printf("%s ",$1);}
  ;
EXP_COND:PROV EXP_COND REST_EXP
    |PROV CHOIX OPERATEUR CHOIX PRFER {verifi_type(";",0,0);}
  ;
REST_EXP:ORAND PROV CHOIX OPERATEUR CHOIX PRFER PRFER{/*its so confusing!!!!*/}
  ;
ORAND:mc_or {printf(" %s",$1);}
    |mc_and {printf(" %s",$1);}
  ;
CHOIX: idf {printf(" %s",$1);verifi_type($1,0,0);}
   |cst_int {printf(" %d",$1);char str[20];sprintf(str,"%d",$1);verifi_type(str,0,0);}
   |cst_reel {printf(" %.2f",$1);char str[20];sprintf(str,"%.2f",$1);verifi_type(str,0,0);}
   |mc_false {printf(" %s",$1);verifi_type($1,0,0);}
   |mc_true {printf(" %s",$1);verifi_type($1,0,0);}
  ;
OPERATEUR:mc_gt {printf(" %s",$1);} 
   |mc_ge {printf(" %s",$1);}
   |mc_eq {printf(" %s",$1);}
   |mc_ne {printf(" %s",$1);}
   |mc_le {printf(" %s",$1);}
   |mc_lt{printf(" %s",$1);}
  ;
INSTRUCTION_THEN:DEB_THEN   FIN_THEN
  ;
DEB_THEN:inst_then {printf("%s\n",$1);}
  ;
FIN_THEN:INSTRUCTION
  ;
INSTRUCT_IF:FIN_IF
   |INSTRUCTION_ELSE FIN_IF
  ;
INSTRUCTION_ELSE:DEBSINON FINSINON;
DEBSINON:mc_else{printf("%s\n",$1);};
FINSINON: INSTRUCTION;
FIN_IF:mc_endif{printf("%s\n",$1);}
  ;





CONDITION_WHILE:INSTRUCTION_DOWHILE FIN_THEN FIN_WHILE
  ;
INSTRUCTION_DOWHILE:DEB_WHILE EXP_COND;
DEB_WHILE: inst_dowhile {printf("%s",$1);}
  ;
FIN_WHILE:mc_enddo{printf("\n%s \n",$1);}
  ;







APPEL_FON:BODY_APPEL FON_PAR FIN_APPEL 
  ;
BODY_APPEL:idf egal mc_call idf pr_ov{printf("%s%s%s %s%s ",$1,$2,$3,$4,$5);verifi_type($1,0,0);verifi_type($4,0,0);verifi_type(";",0,0);}
  ;
FON_PAR:FON_PAR vg cst_int  {printf("%s %d",$2,$3);}
   |FON_PAR vg cst_reel {printf("%s %.2f",$2,$3);}
   |FON_PAR vg DOUBL_QUOT {printf("%s %s",$2,$3);}
   |FON_PAR vg idf {printf("%s %s",$2,$3);}
   |FON_PAR vg   idf pr_ov cst_int vg cst_int pr_fer{printf("%s%s%s %d %s %d ",$2,$3,$4,$5,$6,$7);} 
   |FON_PAR vg   idf pr_ov cst_int pr_fer{printf("%s%s%s%d%s",$2,$3,$4,$5,$6);} 
   
   |cst_int {printf("%d ",$1);}
   |cst_reel {printf("%.2f ",$1);}
   |DOUBL_QUOT {printf("%s",$1);}
   |idf {printf("%s",$1);}
   |idf pr_ov cst_int vg cst_int pr_fer{printf("%s%s %d %s %d %s",$1,$2,$3,$4,$5,$6);} 
   |idf pr_ov cst_int pr_fer{printf("%s%s%d%s ",$1,$2,$3,$4);} 
  ;
FIN_APPEL:pr_fer pvg {printf("%s%s\n",$1,$2);}
  ;











EQUIV:DEB_EQ BODY_EQ FIN_EQ
  ;
DEB_EQ:mc_equivalence pr_ov{ printf("%s %s",$1,$2); }
  ;
BODY_EQ:EQ_PAR pr_fer vg pr_ov{ printf("%s %s %s",$2,$3,$4); }
  ;
FIN_EQ:EQ_PAR pr_fer pvg { printf("%s %s",$2,$3); }
  ;
EQ_PAR:EQ_PAR vg idf {printf("%s %s",$2,$3);}
   |EQ_PAR vg   idf pr_ov cst_int vg cst_int pr_fer{printf("%s%s%s%d%s%d%s ",$2,$3,$4,$5,$6,$7,$8);} 
   |EQ_PAR vg   idf pr_ov cst_int pr_fer{printf("%s%s%s%d%s ",$2,$3,$4,$5,$6);} 
   |EQ_PAR vg   idf pr_ov idf vg idf pr_fer{printf("%s%s%s%s%s%s%s ",$2,$3,$4,$5,$6,$7,$8);/*mat(a,n), a et n declarer deja comme entier*/} 
   |EQ_PAR vg   idf pr_ov idf pr_fer{printf("%s%s%s%s%s ",$2,$3,$4,$5,$6);} 
   
   |idf {printf("%s",$1);}
   |idf pr_ov cst_int vg cst_int pr_fer{printf("%s%s%d%s%d%s ",$1,$2,$3,$4,$5,$6);} 
   |idf pr_ov cst_int pr_fer{printf("%s%s%d%s ",$1,$2,$3,$4);}
   |idf pr_ov idf vg idf pr_fer{printf("%s%s%s%s%s%s ",$1,$2,$3,$4,$5,$6);} 
   |idf pr_ov idf pr_fer{printf("%s%s%s%s ",$1,$2,$3,$4);}  
  ;











%%
int main ()
{
   initialisation();
   yyparse(); 
   afficher();
return 0;
 }

 int yyerror ( char*  msg )  
 {
    printf ("Erreur Syntaxique a ligne %d a colonne %d \n", nb_ligne,nb_colonne);
	return 0; 
  }
 
 
