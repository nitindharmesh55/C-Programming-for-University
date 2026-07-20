#include <stdio.h>

// Write a c program to enter a distance into kilometer and covert it into meter, feet , inches, and centimeter;

int main(void)
{
    float km, m, cm, inch, feet;

    printf("Enter the distance in kilometer: ");
    scanf("%f", &km);

    m = km * 1000;
    cm = m * 100;

    feet = km * 3280.8;

    inch = feet * 12;

    printf("The distance in meters is: %f\n", m);
    printf("The Distance in centimeter is: %f\n", cm);

    printf("The Distance in feet is: %f\n", feet);

    printf("The Distance in Inch: %f\n", inch);
    return 0;
}