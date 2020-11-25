#include<stdio.h>

int A = 10;
int B = 0;

int carre(int x)
{
	int resultat;
	resultat = x * x;
	return resultat;
}

int main() {
	printf("A = %d\n",A);
	B = carre(A);
	printf("A au carré = %d\n",B);
	return 0;
}
