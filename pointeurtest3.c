#include <stdio.h>

/*
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

int main(void)
{
    int nombre = 15;
    
    int *pointeurSurNombre = &nombre;

    printf("Adresse de Nombre = %p\n", &nombre);
    printf("------------------------------\n");
    printf("Valeur Nombre = %d\n", *pointeurSurNombre);
    printf("Adresse du pointeur : %p\n", &pointeurSurNombre);
    printf("Adresse de la variable pointée : %p\n", pointeurSurNombre); 
    
    return 0;
}