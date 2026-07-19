#include<stdio.h>

// Write a program to calculate simple interest ( i = (p * r * n) / 100);

int main(void)
{
    float principle,years, rate,SI;

    // Asking user for principle
    printf("Enter principle(amount): ");
    scanf("%f", &principle);

    // asking user for years for interst;
    printf("Enter numbers of years: ");
    scanf("%f", &years);

    // asking for rate;

    printf("Enter rate in percentage: ");
    scanf("%f", &rate);

    // Calculating interst

    SI = (principle * years * rate) / 100;

    printf("Simple Interest: %f", SI);

    return 0;
}