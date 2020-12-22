#include<stdio.h>

/* [Déclaration du tableau]
    <type> <nom_tableau>[X]; //Déclare avec valeurs aléatoires

    [Initialisation]
        tableau[5]={valeur,valeur2,valeur3valeur4,valeur5}
        tableau[5]={0} tableau rempli de 0
        tableau[5]={4,3} tableau [4,3,0,0,0]

    [Accès au Tableau]
    tableau[X] : élément d'indice X
*/

int main(void)
{
    int Tab[10] = {0};
    int i;
    char *word[10] = {"Linux","Red Hat","CentOs","Fedora","Debian","Ubuntu","Linux Mint","Manjaro","Arch","Gentoo"};

    for(i = 0; i < 5; i++)
        printf("%d ",Tab[i]);
    
    printf("\n");
    
    for (i = 0; i < 10; i++)
        printf("%s\n",word[i]);

return 0;
}