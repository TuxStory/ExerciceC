#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    short tab[5] = {1, 2, 3, 4, 5};
    short tab2[6] = {10, 11, 12, 13, 14, 15};
    short *p;
    p = &tab[0];   // p pointe sur la première case du tableau

    system("clear");
    printf("**** Test ****\n");
    printf("*p = %d\n", *p);
    p++;
    printf("*p = %d\n", *p);
    printf("------------------------------\n");

    for ( int i=0; i<5; i++)
    {
        printf("Element du tableau n° %d est %d.\n",i,tab[i]);
    }

    printf("-----------------------------\n");
    for ( int i=0; i<6; i++)
    {
        printf("Element du tableau2 n° %d est %d.\n",i,tab2[i]);
    }
    printf("-----------------------------\n");

    char *mots[3] = { "maman", "prof", "boulot" };
    for (int i = 0; i < 3; i++)
    {
      printf(mots[i]);
      printf("\n");
    }

    printf("-----------------------------\n");
    char words[][20] = {"Book","Guitar","Python","Linux","Tux"};
    for (int i = 0; i < 5; i++)
    {
      printf(words[i]);
      printf("\n");
    }
    return 0;
}
