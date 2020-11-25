#include <stdio.h>
#include <stdlib.h>
#include <math.h>


main()
{
    int a , b ;
    system("clear");

    printf("Entrez un nombre:") ;
    scanf("%d", &a);
    printf("Entrez un nombre:") ;
    scanf("%d", &b);
    printf("Résultat de la division a/b : %f\n ", (float)a/b);
    printf("A exposant B: %f\n", pow(a,b));
    printf("Racine carré de A+B: %f\n", sqrt(a+b));
    printf("Racine cubique de A+B: %f\n", cbrt(a+b));
    
    return 0 ;
}

/* gcc test.c  -o test -lm
gcc (Not g++) historically would not by default include the mathematical functions
while linking. It has also been separated from libc onto a separate library libm.
To link with these functions you have to advise the linker to include
the library -l linker option followed by the library name m thus -lm. */
