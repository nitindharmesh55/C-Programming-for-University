#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    // Malloc:  A function in c that dynamically allocates a specified number of bytes in memory;

    int number = 0;
    printf("Enter number of GRADE: : ");
    scanf("%d", &number);


    char  *grades = malloc( number * sizeof(char) );

    if(grades == NULL)
    {
        printf("Memory Allocation Failed");
        return 1;
    }

    for(int i = 0; i < number; i++)
    {
       printf("Enter Your Grade %d: ", i + 1);
       scanf(" %c",  &grades[i]);
    }

    for(int i = 0; i < number; i++)
    {
        printf(" %c ", grades[i]);
    }


    free(grades); // returning rented space back to the os ;
    grades = NULL; // Avoid Dangling Pointers 
 



    return 0;
}