#define ETATMAX 11
#define ALPHABETMAX 26

typedef struct{
  int nbetat;
  int nbalphabet;
  int transition[ETATMAX][ALPHABETMAX][ETATMAX];
  int etatinit[ETATMAX];
  int etatfinal[ETATMAX];
}automate;
