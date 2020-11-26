#include <stdio.h>
//#include <stdlib.h>

#define A 15
#define B 45

int multiple(int a,int b) {
    return a * b;
}

int main(void)
{
    int C;
    C = multiple(A,B);
    printf("Résultat : %d\n",C);
}
