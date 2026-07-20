#include<stdio.h>

// Write c program to prepare payy slip using folllwng data;
// DA = 10%of basic, HRA = 7.50% of basic Ma = 300 pf = 12.50%;


int main(void)
{
    float basic;

    printf("\nEnter The Basic Salary: ");
    scanf("%f", &basic);

    printf("\n____________________");
    printf("\n     Salary SLIP");
    printf("\n________________________");

    printf("\n Basic: %.2f, basic");

    printf("\n DA: %.2f",basic * (10 / 100) );

    printf("\n HRA: %.2f", basic * (7.50 / 100));

    printf("\n MA: %.2f", 300);

    printf("\n____________________");

    printf("\n GROSS : %.2f", basic + (basic * 0.10) + (basic * 0.075) + 300.00);

    printf("\n________________________");

    printf("\n PF: %.2f",basic * 0.125);

    printf("\n__________________________");

   printf("\nNET: %.2f",
       (basic + (basic * 0.10)) +
       (basic + (basic * 0.075) + 300.00) -
       (basic * 0.125));
    
       printf("\n________________________");
       return 0;
}