#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char reponse[20];

    system("clear");
    printf("Voulez-vous voir un listing du dossier (oui/non):");
    scanf("%s",reponse);
    printf("reponse = %s\n",reponse);
    if (strcmp(reponse, "oui") == 0) {
        printf("------------ Test ------------ \n");
        system("ls -lh");
    }
    else {
        printf("Dommage!\n");
    }
    return 0;
}

/*You're looking for the function strcmp, or strncmp from string.h.
Since strings are just arrays, you need to compare each character,*/
