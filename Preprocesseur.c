#include<stdio.h>

#define TVA 25
int main(void)
{
    int prixHT = 150;
    int prixTTC = 0;

    prixTTC = prixHT + (prixHT * TVA / 100);
    printf("La TVA est de %d.\n",TVA);
    printf("Le prix de l'objet est de %d.\n",prixTTC);

    return 0;
}