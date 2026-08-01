#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    // Weight convertor
    printf("======== Weight Convertpr ========\n");

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;
    
    printf("1. Kilograms to pounds\n");
    printf("2. Pounds to kilograms\n");

    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        // Kiolograms to pounds;
        printf("Enter the Weight in kilograms:  ");
        scanf("%f", &kilograms);
        pounds =  kilograms  * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);



    }
    else if(choice == 2)
    {
        // Pounds to kiolograms

         printf("Enter the Weight in Pounds:  ");
        scanf("%f", &pounds);
        kilograms =  pounds  / 2.20462;
        printf("%.2f Pounds is equal to %.2f kilograms\n",pounds, kilograms);
    }
    else
    {
        printf("Enter the valid choice\n");
    }
    






}