#include <stdio.h>

int main(void)
{
    int age = 15;
    int test = -1;

    (age == 15) ? printf("Tu as 15 ans.\n") : printf("Tu n'as pas 15 ans.\n");

    test = (age == 15) ? 1 : 0;

    printf("valeur de test = %d\n", test);

    return 0;

}
