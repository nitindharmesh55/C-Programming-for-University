#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[100];

    printf("Enter a String: ");
    scanf("%s", str);

    int length =  strlen(str);
    int i ;

    for(i = 0; i < length; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }


        
    }
    printf("UpperCase: %s", str);

    return 0;
}