#include<stdio.h>

#define TVA 25 // Defini une valeur - remplace TVA par 25. 
#define affiche printf // Permet de créer des mots clés.
#define LONGUEUR 15
#define LARGEUR 5
#define AIRE (LONGUEUR * LARGEUR)

/* Constantes Prédéfinies di language C : 

    _FILE_ nom du fichier
    _LINE_ ligne du fichier
    _TIME_ heure de la compilation
*/

int main(void)
{
    int prixHT = 150;
    int prixTTC = 0;

    prixTTC = prixHT + (prixHT * TVA / 100);
    printf("La TVA est de %d.\n",TVA);
    printf("Le prix de l'objet est de %d.\n",prixTTC);

    affiche("Hello World!\n");
    affiche("Aire du rectangle %d.\n",AIRE);
    return 0;
}