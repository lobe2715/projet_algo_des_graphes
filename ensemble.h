#define INTMAX 1000
typedef int ensemble[INTMAX];


void creer_ensemble(ensemble t);
void ajouter_dans_ensemble(int n,ensemble nom);
void retirer_de_ensemble(int n,ensemble nom);
void afficher_ensemble(ensemble nom);
int dans_ensemble(ensemble nom,int j);
