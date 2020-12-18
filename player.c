// Fichier modulaire de Modulaire.c

#include <stdio.h>
#include "player.h"

void bonjour(void)
{
    printf("Hello World !\n");
}

int reset_niveau(void)
{
    int niveau;
    niveau = 0;
    return niveau;
}

int augmente_niveau(void)
{
    static int niveau = 0;
    niveau += 2;
    return niveau ;
}