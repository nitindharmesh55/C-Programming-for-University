#include <stdio.h>
int main()
{

    printf("My Name is Nitin\nmy Father Name is Babubhai\nmy mother name is jashodaben");

    printf("\n");

  for(int i = 0; i <= 4; i++)
{
    for(int j = 5; j > i; j--)
    {
        printf(" ");
    }

    for(int k = 1; k <= i + 1; k++)
    {
        printf("%d",k);
    }

    for(int m = 0; m <= 1; m++)
    {
        printf(" ");
    }

    for(int l = 1; l <= i + 1; l++)
    {
        printf("%d",l);
    }

    printf("\n");
}




// Integers:

int age = 23, height = 165, weight = 60;

printf("My age is: %d and my height is: %d, and my weight is : %d\n", age,height, weight);


// Arrithimatics calculations;

int x = 23, y = 10;

// Additions;

printf("Addition:%d\n", x + y);

// Subtraction;
printf("Subtraction:%d\n", x - y);

// Multiplication;
printf("Multiplication:%d\n", x * y);

// Division;
printf("Division:%d\n", x / y);

// Remainder;

printf("Remainder: %d\n", x % y);




    // getc();
    return 0;
}