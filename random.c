#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int my_rand (void);

int main (void)
{
   int i;

   for (i = 0; i<10; i++)
   {
     printf ("%d\n", my_rand());
   }
   return (EXIT_SUCCESS);
}

int my_rand (void)
{
   static int first = 0;

   if (first == 0)
   {
      srand (time (NULL));
      first = 1;
   }
   return (rand ());
}
