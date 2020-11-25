#include <stdio.h>

/*
    pointeur variable contenat l'adresse d'une autre variable.
     
    %d -< affiche une adresse de variable ou pointeur    

    [variable]
        maVariable : valeur de la variable.
        &mavariable : adresse de ma variable.
    [Pointeurs]
        *monpointeur = NULL ou *monpointeur = &mavariable
        (déclaration et initialisation d'un pointeur)
        monpointeur : adresse de la valeur pointée
        *monpointeur : valeur de la variable pointée
        &monpointeur : adresse du pointeur
*/ 

void inverser_nombres(int *pt_nb1, int *pt_nb2)
{
    int temporaire = 0;
    
    printf("Fonct Avant : A = %p et B = %p\n", pt_nb1, pt_nb2);
    
    temporaire = *pt_nb2;
    *pt_nb2 = *pt_nb1;
    *pt_nb1 = temporaire;

    printf("Fonct Après : A = %p et B = %p\n", pt_nb1, pt_nb2);
}

int main(void)
{
    int nombreA = 15;
    int nombreB = 20;

    // int *pointeurSurNombreA = &nombreA
    // int *pointeurSurNombreB = &nombreB

    printf("Adresse de NombreB = %p\n", &nombreB);

    printf("Avant : A = %d et B = %d\n", nombreA, nombreB);
    inverser_nombres(&nombreA,&nombreB);
    printf("Avant : A = %d et B = %d\n", nombreA, nombreB);

    return 0;
}