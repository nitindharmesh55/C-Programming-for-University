#include<stdio.h>

int main(void)
{
    int day;
    printf("Enter day: (1 -7): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        /* code */
        printf("Monday\n");
        break;
    
    default:
        break;
    }
}