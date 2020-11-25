/* 10L06 sortir d'une boucle infinie */
#include <stdio.h>

int main()
{
    int c;
    
    printf("Tapez un carractère :\n (x pour quitter)\n");
    while (1) {
        c = getc(stdin);
        if (c == 'x')
            break;
    }
    printf("Vous venez de quitter une boucle while infinie.");
    return 0;
}