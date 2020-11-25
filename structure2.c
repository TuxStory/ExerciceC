#include <stdio.h>
#include <stdlib.h>

struct test {
    int A;
    int B;
    int C;
};


int main(void)
{
    struct test t1;

    t1.A = 10;
    t1.B = 8;
    t1.C = 7;
    
    printf("test = %d",t1.A);
    printf("test = %d",t1.B);
    printf("test = %d",t1.C);
    return 0;
}