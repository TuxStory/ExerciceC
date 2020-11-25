#define N 100

int my_rand (void)
{
   static int tab[N];
   static int first = 0;
   int index;
   int rn;

   if (first == 0)
   {
      int i;

      srand (time (NULL));
      for (i = 0; i < N; i++)
         tab[i] = rand();
      first = 1;
   }
   index = (int)(rand() / RAND_MAX * (N - 1));
   rn = tab[index];
   tab[index] = rand();
   return (rn);
}