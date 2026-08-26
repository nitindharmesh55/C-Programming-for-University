#include<stdio.h>

int main(void)
{
    double base, result = 1;
    int power;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the power: ");
    scanf("%d", &power);
    if(base == 0)
    {
        printf("Undefined\n");
        return 0;
    }

    for(int i = 1; i <= power; i++)
    {
       result *=  base ;
    }

    printf("Result: %.4lf\n", result);

    return 0;
}