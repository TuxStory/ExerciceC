#include <stdio.h>
#include <stdlib.h>

int main()
{
     int A = 5;
     int B = 3;
     int C = 2;
     float D;

    float result = (float)A/C;
    float result2 = (float)B/7;
    D = result/result2;

    printf("Resultat : %.1f\n",result);
    printf("Resultat2 : %2f\n",result2);
    printf("Resultat3 : %f\n",D);
    exit(0);
}

/*
Nous convertissons l'une des deux opérandes en float. Automatiquement C convertira
l'autre opérande en float et effectuera une division rationnelle.
*/
