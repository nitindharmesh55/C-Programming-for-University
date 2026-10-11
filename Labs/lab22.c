#include<stdio.h>
int main(void)
{
    int rollno[20],mark[20],i;

    for(i = 0; i < 20; i++)
    {
        printf("Enter roll of Student %d:", i + 1);
        scanf("%d",&rollno[i]);

        printf("Enter the marks of Student %d: ", i + 1);
        scanf("%d", &mark[i]);
    }
    return 0;
}