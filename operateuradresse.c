#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("clear");
    char c;
    int x;
    float y;

    printf("c: adresse=0x%p, contenu=%c\n", &c, c);
    printf("x: adresse=0x%p, contenu=%d\n", &x, x);
    printf("c: adresse=0x%p, contenu=%5.2f\n", &y, y);
    c = 'A';
    x = 7;
    y = 123.45;
    printf("c: adresse=0x%p, contenu=%c\n", &c, c);
    printf("x: adresse=0x%p, contenu=%d\n", &x, x);
    printf("c: adresse=0x%p, contenu=%5.2f\n", &y, y);

    return 0 ;
}
