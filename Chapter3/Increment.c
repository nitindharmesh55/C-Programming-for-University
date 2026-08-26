#include<stdio.h>

int main(void)
{
    int p, q;
    p = 10;
    q = 20;
    
    // Post increment:
    printf("Value of p: %d\n", p);
    printf("Value of P++: %d\n", p++);
    printf("New Value of P:  %d\n", p);


    // Pre-Increment;

    printf("Value of Q: %d\n", q);
    printf("Value of Q++: %d\n", ++q);
    printf("New Value of Q: %d\n", q);
}