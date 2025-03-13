#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Element
{
    char name[20];
    char code[20];
    char type[20];
    float val;
    int bornesup_l;
    int bornesup_c;
    struct Element *next;
} Element;

typedef struct motcleNode
{
    char name[20];
    char type[20];
    struct motcleNode *next;
} motcleNode;

typedef struct sepNode
{
    char name[20];
    char type[20];
    struct sepNode *next;
} sepNode;


typedef struct Pile
{
    char name[20];
    struct Pile*next;
} Pile;

Pile *pile_idf=NULL;
Pile *p;
Element *tab = NULL;
motcleNode *tabm = NULL;
sepNode *tabs = NULL;

extern char sav[20];

void initialisation()
{
    // La liste est vide initialement, donc pas besoin de boucle d'initialisation
    tab = NULL;
    tabm = NULL;
    tabs = NULL;
}

void inserer(char entite[], char code[], char type[], float val, int bornesup_l,  int bornesup_c, int y)
{
    switch (y)
    {
    case 0:
    { // Insertion dans la table des IDF et CONST
        Element *nvNode = malloc(sizeof(Element));
        strcpy(nvNode->name, entite);
        strcpy(nvNode->code, code);
        strcpy(nvNode->type, type);
        nvNode->val = val;
        nvNode->next = tab;
        nvNode->bornesup_l = bornesup_l;
        nvNode->bornesup_c = bornesup_c;
        tab = nvNode;
        break;
    }
    case 1:
    { // Insertion dans la table des mots clés
        motcleNode *nvNode = malloc(sizeof(motcleNode));
        strcpy(nvNode->name, entite);
        strcpy(nvNode->type, code);
        nvNode->next = tabm;
        tabm = nvNode;
        break;
    }
    case 2:
    { // Insertion dans la table des séparateurs
        sepNode *nvNode = malloc(sizeof(sepNode));
        strcpy(nvNode->name, entite);
        strcpy(nvNode->type, code);
        nvNode->next = tabs;
        tabs = nvNode;
        break;
    }
    }
}

void rechercher(char entite[], char code[], char type[], float val, int bornesup_l, int bornesup_c, int y)
{
    switch (y)
    {
    case 0:
    { // Recherche dans la table des IDF et CONST
        Element *p = tab;
        while (p != NULL && strcmp(p->name, entite) != 0)
        {
            p = p->next;
        }
        if (p == NULL) // si l entite n'existe pas
        {
            inserer(entite, code, type, val,  bornesup_l, bornesup_c, y);
        }
        break;
    }
    case 1:
    { // Recherche dans la table des mots clés
        motcleNode *p = tabm;
        while (p != NULL && strcmp(p->name, entite) != 0)
        {
            p = p->next;
        }
        if (p == NULL) // si l entite n'existe pas
        {
            inserer(entite, code, type, val,  bornesup_l, bornesup_c, y);
        }
        break;
    }
    case 2:
    { // Recherche dans la table des séparateurs
        sepNode *p = tabs;
        while (p != NULL && strcmp(p->name, entite) != 0)
        {
            p = p->next;
        }
        if (p == NULL) // si l entite n'existe pas
        {
            inserer(entite, code, type, val,  bornesup_l, bornesup_c, y);
        }
        break;
    }
    }
}

void afficher()
{
    // Affichage de la liste des IDF et CONST
    Element *p = tab;
    printf("\n/***************LISTES des symboles IDF et CONST*************/\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("|   CHAMP NOM   |   CHAMP CODE  |   CHAMP TYPE  |   CHAMP VAL   |   b sup l   |   b sup c   |\n");
    printf("---------------------------------------------------------------------------------------------\n");
    while (p != NULL)
    {
        printf("|%15s|%15s|%15s|%15f|%13d|%13d|\n", p->name, p->code, p->type, p->val,  p->bornesup_l, p->bornesup_c);
        p = p->next;
    }

    // Affichage de la liste des mots clés
    motcleNode *pKeyword = tabm;
    printf("\n/***************LISTES des symboles mots cles*************/\n");
    printf("-------------------------------------\n");
    printf("|    CHAMP NOM    |    CHAMP TYPE   |\n");
    printf("-------------------------------------\n");

    while (pKeyword != NULL)
    {
        printf("\n|%17s|%17s|\n", pKeyword->name, pKeyword->type);
        pKeyword = pKeyword->next;
    }

    // Affichage de la liste des séparateurs
    sepNode *pSeparator = tabs;
    printf("\n/***************LISTES des symboles separateurs*************/\n");
    printf("-------------------------------------\n");
    printf("|  CHAMP NOM SEP  |    CHAMP TYPE   |\n");
    printf("-------------------------------------\n");
    while (pSeparator != NULL)
    {
        printf("\n|%17s|%17s|\n", pSeparator->name, pSeparator->type);
        pSeparator = pSeparator->next;
    }
}

int lookup(char entite[], int y)
{
    switch (y)
    {
    case 0:
    { // Recherche dans la table des IDF et CONST
        Element *p = tab;
        while (p != NULL && (strcmp(p->name, entite) )!= 0)
        {
            p = p->next;
        }
        if (strcmp(p->type, " ")==0 ) // si l entite n'existe pas
        {
            return 0;
        }
        else
            return 1;
        break;
    }
    case 1:
    { // Recherche dans la table des mots clés
        motcleNode *p = tabm;
        while (p != NULL && strcmp(p->name, entite) != 0)
        {
            p = p->next;
        }
        if (p == NULL) // si l entite n'existe pas
        {
            return 0;
        }
        else
            return 1;
        break;
    }
    case 2:
    { // Recherche dans la table des séparateurs
        sepNode *p = tabs;
        while (p != NULL && strcmp(p->name, entite) != 0)
        {
            p = p->next;
        }
        if (p == NULL) // si l entite n'existe pas
        {
            return 0;
        }
        else
            return 1;
        break;
    }
    }
}


void empiler(char entite[])
{
        Pile *nvNode = malloc(sizeof(Pile));
        strcpy(nvNode->name, entite);
        nvNode->next = pile_idf;
        pile_idf= nvNode;
}

void enfiler(char entite[])
{
if(pile_idf==NULL) {
        Pile *nvNode = malloc(sizeof(Pile));
        strcpy(nvNode->name, entite);
        nvNode->next = pile_idf;
        pile_idf= nvNode;
        p=pile_idf;
}else{
Pile *nvNode = malloc(sizeof(Pile));
strcpy(nvNode->name, entite);
nvNode->next=NULL;
p->next = nvNode;
p=p->next;
}
        
}


void mise_ajour(char entite[],int lmax,int cmax,int y)
{
    Element *p = tab;
    switch (y)
    {

    case 0://mise a jour d'une routine
{
    while (p != NULL && strcmp(p->name, entite) != 0)
    {
        p = p->next;
    }
    strcpy(p->code, "ROUTINE");
    break;
}
    case 1://mise a jour d'un idf
{
    
    if( strcmp( entite, ";" ) == 0)
    {
     Pile *nvNode =pile_idf;
     pile_idf=pile_idf->next;
     nvNode->next=NULL;
     char save_type[20];
     strcpy(save_type, nvNode->name);
     free(nvNode);//enfiler the first elem which is le type
     while(pile_idf != NULL)
	{
	 Pile *nvNode =pile_idf;
         pile_idf=pile_idf->next;//enfiler le rest de la file et liberer l'espace
         nvNode->next=NULL;
	 //rechercher l idf dans la liste des idf, puis modifier le champs type
         Element *p = tab;
         while (p != NULL && strcmp(p->name, nvNode->name) != 0)
        {
            p = p->next;
        }
         if(p != NULL) 
         strcpy(p->type, save_type);
         free(nvNode);
	}
    }else enfiler(entite);//put all les idf de meme type + son type dans une file
     


break;
}



    case 2://mise a jour d'un tableau
{
        Element *p = tab;
         while (p != NULL && strcmp(p->name, entite) != 0)
        {
            p = p->next;
        }
	p->bornesup_l=lmax;
        p->bornesup_c=cmax;
    

break;
}

    }
}


void verifi_type(char entite[],int l,int c)
{
Element *q = tab;
/*printf("\n\niam here\n\n");
printf("\n**entite entre** %s\n",entite);*/

if( (strcmp("TRUE", entite)== 0) || (strcmp("FALSE", entite)== 0)) 
{
if (strcmp("LOGICAL", pile_idf->name)!= 0) printf("***erreur! incompatibilite des types!\n");
}

else{    if( strcmp( entite, ";" ) == 0) {free(pile_idf);pile_idf=NULL;}
         else{ 

                if(lookup(entite,0)==0) printf("***erreur semantique!%s non declare***\n",entite);
                else
                   {
                       if(pile_idf==NULL) //si l'entite est A(A=..) alors sauvgarer le type pour etre comparer avec le types des autre operandes 
                       { 
                       while (q != NULL && strcmp(q->name, entite) != 0)
        	       {
         	        q = q->next;
       		       }
		        enfiler(q->type);
		      //sauvgarder le type de membre gauche
	               }
                      else {//si l'entite est S,N ...(A=S+N..) rechercher son type
     		            while (q != NULL && strcmp(q->name, entite) != 0)//rechercher la prochaine entite dans la table des idf
        		  	 {
         		         q = q->next;
       			 	 }
				 //apres qu'on trouve l'entite, on compare son type avec le type de l'entite sauvgarder
               		         /*printf("**type de entite mere**%s\n", pile_idf->name);
				 printf("**type de entite +** %s ",q->type);*/
		              if(strcmp(q->type, pile_idf->name)!= 0) printf("\nerreur! incompatibilite des types!\n");
				if( (q->bornesup_l)<l || (q->bornesup_c)<c || l<0 || c<0) printf("**erreur semantique!depassement des bornes de %s\n",q->name);
		           }
                   }
             }

}
}




void afficherfile()
{
Pile *pKeyword = pile_idf;
while (pKeyword != NULL)
    {
        printf("\n|%s\n", pKeyword->name);
        pKeyword = pKeyword->next;
    }
}
