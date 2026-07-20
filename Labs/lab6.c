#include<stdio.h>

// Write a c program to compute Fahrenheit from centigrade ( F = 1 .8 * c  + 32);

int main(void)
{
    float celsius, fahrenheit;

    printf("Enter temprature in celsius: ");
    scanf("%f", &celsius);

    fahrenheit  = ((1.8 * celsius) + 32);

    printf("Temprature in fahrenheit  = %.2f\n", fahrenheit);
    return 0;


}