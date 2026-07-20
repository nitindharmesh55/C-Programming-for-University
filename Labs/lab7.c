#include<stdio.h>

// Write C program to find the the accepted number is negative or positive or zero;
int main(void)
{
    int A;
    printf("Enter the number A: ");
    scanf("%d", &A);

    if(A > 0)
    {
        printf("%d is Positive\n", A);
    }
    else if (A < 0)
    {
        printf("%d is Negitve\n", A);
    }
    else
    {
        printf("%d is zero\n", A);
    }

    return 0;
    
}