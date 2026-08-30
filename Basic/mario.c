#include <stdio.h>
int main(void)
{
    for(int i = 0; i < 5; i++)
    {
        for(int space = 5 - 1; space > i; space--)
        {
            printf(" ");
        }
        for(int j = 0;  j < i + 1;  j++)
        {
            printf("#");
        }
        printf(" ");

         for(int k = 0;  k < i + 1;  k++)
        {
            printf("#");
        }

        printf("\n");
    }
}