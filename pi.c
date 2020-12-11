#include <stdio.h>

int main(void)
{
    const float PI = 3.1415;
    int D = 0;
    float R = 0;
    float Aire = 0;
    float Peri = 0;
 
    printf("Entrez la valeur du diamètre : ");
    scanf("%d",&D);

    R = (float)D/2;
    Aire = (float)PI * R * R; // formule : PiR²
    Peri = (float)2 * PI * R; // formule : 2PiR

    printf ("\nLa valeur du rayon est de %.2f cm.\n", R);
    printf ("Aire du Cercle : %f cm².\n", Aire);
    printf ("Perimètre du Cercle %f cm.\n", Peri);
    return 0;
}
