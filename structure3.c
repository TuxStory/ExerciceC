#include <stdio.h>
#include <stdlib.h>

struct Personne {
    char Nom[30];
    char Prenom[25];
    int Age;
    char Pro[40];
};

int main(void)
{
    struct Personne Pers;
    
    system("clear");
    printf("------------ Formulaire ------------ \n");
    printf("Nom : ");
    scanf("%s",Pers.Nom);
    printf("Prenom : ");
    scanf("%s",Pers.Prenom);
    printf("Age : ");
    scanf("%d",&Pers.Age);
    printf("Profession : ");
    scanf("%s",Pers.Pro);
    printf("------------ Resumé ---------------\n");
    printf("Personne = %s %s %d %s \n",Pers.Nom,Pers.Prenom,Pers.Age,Pers.Pro);

}