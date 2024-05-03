#include "ensemble.h"

#define ETATMAX 11
#define ALPHABETMAX 26

typedef struct{
  int nbalphabet;
  ensemble transition[ETATMAX][ALPHABETMAX];
  ensemble etatinit;
  ensemble etatfinal;
}automate;


void init_automate(automate *nom);
void afficher_automate(automate nom);
void definir_alphabet(automate *nom, char car);
void ajouter_etat_init(automate *nom,int i);
void ajouter_etat_final(automate *nom,int i);
void ajouter_transition(automate *nom,int depart,char lettre,int arriver);
