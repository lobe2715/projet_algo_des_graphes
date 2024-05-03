#include "ensemble.h"
#define ETATMAX 11
#define ALPHABETMAX 26

typedef struct{
  int nbetat;
  int nbalphabet;
  ensemble transition[ALPHABETMAX][ETATMAX];
  ensemble etatinit;
  ensemble etatfinal;
}automate;
