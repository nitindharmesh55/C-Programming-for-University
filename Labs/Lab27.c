#include<stdio.h>
int check_number(int);
int main(void)
{
    int n , result ;
    printf("Enter number: ");
    scanf("%d", &n);

    result = check_number(n);

    if(result == 1)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is not prime number\n", n);
    }

  return 0;
    

}

int check_number(int x)
{
    int i;
    for(i = 2; i < x - 1; i++)
    {
        if(x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
