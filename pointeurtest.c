#include <stdio.h>

/*
    pointeur variable contenat l'adresse d'une autre variable.
    [variable]
    maVariable : valeur de la variable.
    &mavariable : adresse de ma variable.
*/

void inverser_nombres(int nombreA,int nombreB)
{
    int temporaire = 0;

    printf("Fonct Avant : A = %d et B = %d\n", nombreA, nombreB);

    temporaire = nombreB;
    nombreB = nombreA;
    nombreA = temporaire;

    printf("Fonct Après : A = %d et B = %d\n", nombreA, nombreB);
}

int main(void)
{
    int nombreA = 15;
    int nombreB = 20;

    printf("Adresse de NombreB = %p\n", &nombreB);

    printf("Avant : A = %d et B = %d\n", nombreA, nombreB);
    inverser_nombres(nombreA,nombreB);
    printf("Après : A = %d et B = %d\n", nombreA, nombreB);

    return 0;
}
