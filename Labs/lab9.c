#include<stdio.h>

// Write a program to read three numbers from keyboard and find out maximum out of these three

int main(void)
{
    double n1, n2, n3;
    printf("Enter Three Different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if(n1 >= n2 && n1 >= n3)
    {
        printf("%.2f is the largest number\n", n1);
    }
    if(n2 >= n1 && n2 >= n3)
    {
        printf("%.2f is the larget number\n", n2);
    }
    if(n3 >= n1 && n3 >= n2)
    {
        printf("%.2f is the largest number\n", n3);
    }

    return 0;
}