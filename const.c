#include <stdio.h>

int main(void)
{
    const float PI = 3.1415;
    int D = 5;
    float R = (float)D/2;
    float Aire = 0;
    float Peri = 0;

    Aire = (float)PI * R * R; // formule : PiR²
    Peri = (float)2 * PI * R; // formule : 2PiR

    printf ("La valeur du rayon est de %.2f cm.\n", R);
    printf ("Aire du Cercle : %f cm².\n", Aire);
    printf ("Perimètre du Cercle %f cm.\n", Peri);
    return 0;
}
