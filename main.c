#include <stdlib.h>
#include <stdio.h>
#include "automate.h"


int main(){
  automate a;
  init_automate(&a);
  afficher_automate(a);
  definir_alphabet(&a,'e');
  ajouter_etat_init(&a,2);
  ajouter_etat_init(&a,3);
  ajouter_etat_init(&a,6);
  afficher_automate(a);
  exit(0);
}
