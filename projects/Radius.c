#include<stdio.h>
#include<math.h>

int main()
{
     double radius = 0.0;
     double area = 0.0;
     double surfacaeArea = 0.0;
     const double PI = 3.14159;
     double volume = 0.0;

     printf("Enter the radius of the circle: ");
     scanf("%lf", &radius);

     area = PI * pow(radius, 2);
     surfacaeArea =  4 * PI * pow(radius, 2);

     volume = (4.0 / 3.0) * PI * pow(radius, 3);

     printf("Area: %.2lfcm\n", area); // 2d Circle
     printf("Surface Area: %.2lfcm\n", surfacaeArea); // 3D Circle area;
    
     printf("Volume: %.2lfcm^3\n", volume); // volume
}