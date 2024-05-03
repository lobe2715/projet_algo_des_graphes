#include <stdlib.h>
#include <stdio.h>
#include "ensemble.h"
/*fonction interne */

/* dans le .h */

void creer_ensemble(ensemble t){
  t[0] = 0;
}

void ajouter_dans_ensemble(int n,ensemble nom){
  nom[0] = nom[0] + 1; 
  nom[nom[0]] = n;
}

void retirer_de_ensemble(int n,ensemble nom){
  int i,trouver=0;
  if(nom[0] != 0){
    for(i=1;i<=nom[0];i++){
      if(trouver == 1){
	nom[i-1] = nom[i];
      }
      else{
	if(nom[i] == n){
	  trouver=1;
	}
      }
    }
  }
  else{
    printf("l'ensemble est vide.\n");
    return;
  }
  if(trouver != 1){
    printf("%d n'est pas dans l'ensemble.\n",n);
    return;
  }
  printf("Ellement retirer\n");
  return;
}

void afficher_ensemble(ensemble nom){
  int i;
  if(nom[0] != 0){
    printf("{");
    for(i=1;i<=nom[0];i++){
      printf("%d",nom[i]);
      if(i != nom[0]){
	printf(",");
      }
    }
    printf("}");
  }
  printf("\n");
}


int dans_ensemble(ensemble nom,int j){
  int i;
  if(nom[0] != 0){
    for(i=1;i<=nom[0];i++){
      if(nom[i] == j){
	return 1;
      }
    }
  }
  return 0;
}
