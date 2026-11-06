// Objective: Build a calculator that performs basic mathematic operations;

#include<stdio.h>
int main(void)
{
    int num1, num2;
    printf("Enter Number 1: ");
    if(scanf("%d", &num1) != 1)
    {
        printf("Invalid Input");
        return 1;
    }
    printf("Enter number 2 :");
    if(scanf("%d", &num2) != 1)
    {
        printf("Invalid input");
        return 1;
    }
    
    int operator;
    char operators[5][20] = {"Additions[1]", "Subtraction[2]", "Multiplication[3]", "Division[4]", "Modulus[5]"};
    int length =  sizeof(operators) / sizeof(operators[0]);
    for(int i = 0; i < length; i++)
    {
        printf("%s\n", operators[i]);
    }
    printf("Choose Operator[1 - 5]: ");
    if(scanf("%d", &operator) != 1)
    {
        printf("Invalid input");
        return 1;
    }
    switch (operator)
    {
    case 1:
        printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
        break;
    case 2:
        printf("Subtraction: %d  -  %d = %d\n", num1, num2, num1 - num2);
        break;
    case 3:
        printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);
        break;

    case 4:
        if(num2 == 0)
        {
            printf("Can not Divide by zero!");
            return 1;
        }
        printf("Division: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
        break;

    case 5:
       if(num2 == 0)
       {  printf("It can not be zero !");
         return 1;
         }

        printf("Modulus: %d  %%  %d = %d\n", num1, num2, num1 % num2);
        break;
    
    default:
       printf("Invalid Operator");
        break;
    }
    return 0;
}