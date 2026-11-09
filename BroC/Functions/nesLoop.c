#include<stdio.h>

int main(void)
{
    for(int i = 1; i < 4; i++)
    {
       for(int j = 1; j <= 10; j++)
       {
        printf(" ^-^ ", j);
       }
       printf("\n");
    }
}