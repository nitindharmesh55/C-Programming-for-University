#include<stdio.h>
typedef int Number;
typedef char string[50];




int main(void)
{
    // Typedef =  it's a reserved keyword that gives an existing data type a nickName
    
    string names [3][20] = {0};

    for(int i = 0; i < 3; i++)
    {
        printf("Enter Your name[%d]: ", i + 1);
        scanf("%s", &names[i]);
    }

    for(int i = 0; i < 3; i++)
    {
        printf("%d.  %s\n",i + 1,  names[i]);

    }

    return 0;



}