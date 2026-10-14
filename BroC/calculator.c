
#include <stdio.h>

int main(void)
{
    int num1, num2;
    char op;

    printf("Enter X: ");
    scanf("%d", &num1);

    printf("Enter Y: ");
    scanf("%d", &num2);

    printf("Enter Operator: ");
    scanf(" %c", &op);

    switch (op)
    {
        case '+':
            printf("Sum of %d + %d is %d", num1, num2, num1 + num2);
            break;

        case '-':
            printf("Subtraction of %d - %d is %d", num1, num2, num1 - num2);
            break;

        case '*':
            printf("Multiplication of %d * %d is %d", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Division of %d / %d is %d", num1, num2, num1 / num2);
            else
                printf("Division by zero is not allowed");
            break;

        default:
            printf("Invalid Operator\n");
            break;
    }

    return 0;
}
