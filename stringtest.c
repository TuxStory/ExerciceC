#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[25];
    char prenom[25];
    char reponse[10];
    int a , b ;
    system("clear");
    
    printf("Entrez votre nom de fammille: ") ;
    scanf("%s", nom);
    printf("Entrez votre prénom: ") ;
    scanf("%s", prenom);
    printf("Bonjour %s %s ! \nComment allez-vous ?",nom,prenom );
    scanf("%s", reponse);
    printf("%s, je suppose que c'est une bonne nouvelle!",reponse);
    printf("\nEntrez votre age:");
    scanf("%d",&a);
    printf("Cela fait %d jours.\n",a*365);
    return 0;
}

/* sinon utiliser la méthode gets, puts */
