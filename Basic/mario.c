#include<stdio.h>
int main()
{
     int a = 10, b = 20;

    printf("Before Swap: A: %d ||  B : %d\n", a , b);

    // Swaping;
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swaping: A:%d || B:%d\n", a ,b);

    return 0;
}