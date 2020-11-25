#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char request[25];

    system("clear");
    printf("------------ Show Package Info ------------ \n");
    printf("Recherche :");
    scanf("%s",request);
    printf("----------- Package Information ----------- \n");
    char cmdLine[4096];
    sprintf(cmdLine, "apt show %s",request);
    system(cmdLine);
    return 0;
}

/* The C library function int sprintf(char *str, const char *format, ...) 
sends formatted output to a string pointed to, by str. 
Exemple
#include <stdio.h>
#include <math.h>

int main () {
   char str[80];

   sprintf(str, "Value of Pi = %f", M_PI);
   puts(str);
   return(0);
}   */
