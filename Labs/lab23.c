#include<stdio.h>
int main(void)
{
    int a[5] = {10, 25, 7, 45, 18};
    int max =  a[0];
    int i;

    for(i = 1; i < 5; i++)
    {
        if(a[i] > max)
        {
            max  = a[i];
        }
    }
   printf("Maximum Element: %d\n", max);
   return 0;
}