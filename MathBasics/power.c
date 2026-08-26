#include<stdio.h>

int main(void)
{
    int base, power, result = 1;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the power: ");
    scanf("%d", &power);

    for(int i = 1; i <= power; i++)
    {
       result *=  base ;
    }

    printf("Result: %d\n", result);

    return 0;
}