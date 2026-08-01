#include <stdio.h>
#include <math.h>

int main()
{
    // Compound interest Calculator;

    double priciple = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("Coumpund Interest Calculator\n");

    printf("Enter the principal amount: ");
    scanf("%lf", &priciple);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    rate = rate / 100; // Convert percentage to decimal

    printf("Enter the number of years: ");
    scanf("%d", &years);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &timesCompounded);

    // Calculate compound interest
     total  = priciple * pow ( 1 + rate/timesCompounded, timesCompounded * years);

     printf("After %d years, the total will be: $%.2lf", years, total);

    return 0;
}