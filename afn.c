#include <stdlib.h>
#include <stdio.h>
#include "ensemble.h"


void nombre_sommet(int n,automate *nom){
  nom->nbetat = n;
  return;
}


void nombre_lettre_alphabet(int n,automate *nom){
  nom->nbalphabet = n;
  return;
}



void afficher_automate(automate nom){
  int i,l=97;
  printf("nombre d'etat = %d\n",nom.nbetat);
  printf("Alphabet: ");
  for(i=1;i<=nom.nbalphabet;i++){
    printf("%c ",l);
    l++;
  }
  printf("\n");
  printf("Etat initial: "); 
  for(i=1;i<=nom.nbetat;i++){
    if(nom.etatinit[i] !=0){
      printf("%d ",i);
    }
  }
  printf("\n");
  printf("Etat final: ");
  for(i=1;i<=nom.nbetat;i++){
    if(nom.etatfinal[i] !=0){
      printf("%d ",i);
    }
  }
  printf("\n");  
}
