#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nombre;
    system("clear");    

    printf("Entrez un nombre: ");
    scanf("%d", &nombre);
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n",i,nombre,i*nombre);
    }
}