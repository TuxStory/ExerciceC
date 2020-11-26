/***************************************************************************
Nom ......... : qsort1.c
Role ........ : Tri d'un tableau de structure dans l’ordre croissant
                du champ valeur.
Auteur ...... : Thierry46
Date creation : 10/2/2008
Compilation : gcc -Wall -pedantic -std=c99 -o test_qsort1 qsort1.c
***************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Definition d'un element de structure
typedef struct
{
   unsigned int rang;
   int valeur;
} ELEMENT;

// Prototype de la fonction de tri appelee par qsort
static int qs_tri(const void *ptr1, const void *ptr2);

int main(void)
{
   ELEMENT tableau[] = { {1, 5}, {2, 5}, {3, 3}, {4, 12}, {5, 1} };
   size_t i;
   size_t nb_element = sizeof(tableau)/sizeof(tableau[0]);

   // appel fonction de tri qsort (stdlib.h)
   qsort(tableau, nb_element, sizeof(ELEMENT), qs_tri);

   // Impression Après le tri
   (void)puts("Après le tri :");
   for (i=0 ; i<nb_element; i++)
   {
      (void)printf("tableau[%zu] = (%u, %d)\n",
                   i, tableau[i].rang, tableau[i].valeur);
   }
   return EXIT_SUCCESS;
} // int main(void)

/***************************
Fonction .... : qs_tri
Role ........ : Fonction de comparaison de deux element
                appelée par qsort()
Parametres .. :
- ptr1 : pointeur sur le 1{{er}} element
- ptr2 : pointeur sur le 2{{e}} element
Retour ........ :
    <0 : le premier element est plus petit que le deuxième,
         ils sont dans le bon ordre;
    =0 : le premier element est égal au deuxième
    <0 : le premier element est plus grand que le deuxième,
         ils ne sont pas dans l'ordre.
****************************/
static int qs_tri(const void *ptr1, const void *ptr2)
{
   int valeur1 = ((ELEMENT *)ptr1)->valeur;
   int valeur2 = ((ELEMENT *)ptr2)->valeur;

   return valeur1 - valeur2;
} // static int qs_tri(...
