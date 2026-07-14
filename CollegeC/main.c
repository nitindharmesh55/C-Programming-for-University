#include <stdio.h>
int main()
{

    printf("My Name is Nitin\nmy Father Name is Babubhai\nmy mother name is jashodaben");

    printf("\n");

  for(int i = 0; i <= 5; i++)
{
    for(int j = 5; j > i; j--)
    {
        printf(" ");
    }

    for(int k = 1; k <= i + 1; k++)
    {
        printf("#");
    }

    for(int m = 0; m <= 1; m++)
    {
        printf(" ");
    }

    for(int n = 1; n <= i + 1; n++)
    {
        printf("#");
    }

    printf("\n");
}

    // getc();
    return 0;
}