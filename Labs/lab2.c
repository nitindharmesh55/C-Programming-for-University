#include <stdio.h>

int main(void)
{
    float base, height, area;

    printf("Enter base of triangle: ");
    scanf("%f", &base);

    printf("Enter height of triangle: ");
    scanf("%f", &height);

    area = (base *  height) / 2;

    printf("Area of triangle =  %.2fsq units\n", area);
    return 0;
}