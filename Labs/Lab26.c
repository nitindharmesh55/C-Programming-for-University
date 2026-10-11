#include<stdio.h>
int add(int);
int main(void)
{
    int n, result;
    printf("Enter Tihe number of Integer you want to add: ");
    scanf("%d", &n);
    
    result = add(n);

    printf("Sum of Integer you add: %d\n", result);
    return 0;
}
int add(int x)
{
    int sum = 0, i, num;

    for(i = 0; i < x; i++)
    {
        printf("Enter Number %d:" ,i+ 1);
        scanf("%d", &num);

        sum  += num;
    }
    return sum;
}