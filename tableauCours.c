#include <stdio.h>
/*
    tableau		: adresse du tableau
    *tableau		: premiere élément du tableau
    *(tableau + x)	: élement d'indice + x  = tableau[x]
*/

#define Taille 5

void affiche(int tab[], int taille);
int *creer_tab(void);

int main (void)
{
    int *tableau = creer_tab();
    //int tableau[Taille] = {16,4,-5,22,100};

    tableau[0] = 14;
    affiche(tableau, Taille);
    return 0;
}

int *creer_tab(void) {
    static int tableau_entiers[5]; //static permet de renvoyer le tableau
    for (int i=0; i < 5; i++)
        tableau_entiers[i] = i * 3;

    return tableau_entiers;
}

void affiche(int tab[], int taille)
{
    for (int i = 0; i < 5; i++)
        printf("[%d] ",tab[i]);
    printf("\n");
}
