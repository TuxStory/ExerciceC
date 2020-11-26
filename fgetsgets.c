// C program to illustrate
// fgets()
#include <stdio.h>
#define MAX 15
int main()
{
    char buf[MAX];
    printf("Entrez une phrase: ");
    fgets(buf, MAX, stdin);
    printf("La phrase est: %s\n", buf);
    /*
    printf("Enter a string: ");
    gets(buf);
    printf("string is: %s\n", buf);
    ! GETS apparement trop */
    return 0;
}
