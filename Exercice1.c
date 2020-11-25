#include <stdio.h>
#include <string.h>

int main( ) {

   char str[100];
   int a,b;
   char *ptr;

   printf( "Entrez un mot :");
   scanf("%s", str);

   printf( "\nVous avez entré le mot: %s \n", str);
   a = strlen(str);
   b = sizeof(str); 
   printf("Taille du mot : %d \n", a);
   printf("Taille de la variable : %d \n", b);
   printf("Test : %s \n",&str[2]);
   printf("Test2 : %c \n",str[0]);
   ptr = &str[0];
   while(*ptr!='\0')
        printf("%c",*ptr++);
   printf("\n");

   return 0;
}