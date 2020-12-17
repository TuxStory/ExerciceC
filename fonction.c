#include <stdio.h>

int init_ball(int posX)
{
    posX = 150;
    return posX;
}

int main(void)
{
    int balleX;
    balleX = init_ball(balleX);
    printf("Valeur de X de la Balle : %d\n",balleX);

    return 0;   
}