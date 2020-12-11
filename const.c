#include <stdio.h>

int main(void)
{
    const float Pi = 3.1415;
    int D = 5;
    float R = (float)D/2;
    float Aire = 0;
    float Peri = 0;

    Aire = (float)Pi * R * R; // formule : PiR²
    Peri = (float)2 * Pi * R; // formule : 2PiR

    printf ("La valeur du rayon est de %f\n", R);
    printf ("Aire du Cercle : %f\n", Aire);
    printf ("Perimètre du Cercle %f\n", Peri);
    return 0;
}
