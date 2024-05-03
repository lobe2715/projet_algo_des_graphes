#include <stdlib.h>
#include <stdio.h>
#include "ensemble.h"

#define ETATMAX 5
#define ALPHABETMAX 26

typedef struct{
  int nbalphabet;
  ensemble transition[ETATMAX][ALPHABETMAX];
  ensemble etatinit;
  ensemble etatfinal;
}automate;
	

void init_automate(automate *nom){
  int i,j;
  nom->nbalphabet = -1;
  creer_ensemble(nom->etatinit);
  creer_ensemble(nom->etatfinal);
  for(i=0;i<ETATMAX;i++){
    for(j=0;j<ALPHABETMAX;j++){
      creer_ensemble(nom->transition[i][j]);
    }
  }
  return; 
}

void afficher_automate(automate nom){
  int i,j;
  printf("nombre de lettre: %d\n",nom.nbalphabet);
  printf("etats initiaux: ");
  afficher_ensemble(nom.etatinit);
  printf("etats finaux: ");
  afficher_ensemble(nom.etatfinal);
  for(i=0;i<ETATMAX;i++){
    for(j=0;j<ALPHABETMAX;j++){
      printf("i = %d / j = %d / etat = ",i,j);
      afficher_ensemble(nom.transition[i][j]);
    }
  }
  return;
}

void definir_alphabet(automate *nom, char car){
  /* définie l'alphabet entre a et car */
  if(car>='a' && car<='z'){
    nom->nbalphabet = car - 'a';
  }
  else if(car>='A' && car<='Z'){
    nom->nbalphabet = car - 'A';
  }
  else{
    printf("Le caractère envoyer n'est pas une lettre\n");
  }
}

void ajouter_etat_init(automate *nom,int i){
  if(i > ETATMAX){
    printf("l'état est trop grand\n");
  }
  else{
    ajouter_dans_ensemble(i,nom->etatinit);
  }
}

void ajouter_etat_final(automate *nom,int i){
  if(i > ETATMAX){
    printf("l'état est trop grand\n");
  }
  else{
    ajouter_dans_ensemble(i,nom->etatfinal);
  }
}

void ajouter_transition(automate *nom,int depart,char lettre,int arriver){
  if(depart > ETATMAX){
    printf("état de départ trop grand\n");
    return;
  }
  if(arriver > ETATMAX){
    printf("état d'arriver trop grand\n");
    return;
  }
  if(lettre>='a' && lettre<='z'){
    if(!dans_ensemble(nom->transition[depart][(int)lettre],arriver)){
      ajouter_dans_ensemble(arriver,nom->transition[depart][(int)lettre]);
    }
  }
  else if(lettre>='A' && lettre<='Z'){
    if(!dans_ensemble(nom->transition[depart][(int)lettre],arriver)){
      ajouter_dans_ensemble(arriver,nom->transition[depart][(int)lettre]);
    }
  }
  return;
}



