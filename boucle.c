#include<stdio.h>

int A = 10;
int B = 0;

int boucle()
{
	for (int i = 33; i < 127 ; i++) {
        printf("le nombre %d vaut %c\n",i,i);
        }
}

int main() {
	boucle();
}
