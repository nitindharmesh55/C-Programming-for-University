#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int length =  strlen(str);

    int i;

    for( i  =  length; i  >= 0; i--)
    {
       printf("%c", str[i]);
    }

    return 0;
}