#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    // int age = 21;

    // if(age >= 18)
    // {
    //     printf("You are an adult \n");
    // }
    // else
    // {
    //   printf("You are not an adult \n");
    // }
    //  using Booleans Value

    bool isStudent = true;
    
    if(isStudent)
    {
        printf("You are a Student\n");
    }
    else
    {
        printf("You are NOT a Student\n");
    }

    char name[50]  = "";

    printf("Enter your name: ");
    fgets(name , sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // Remove the newline character from the input

    if(strlen(name) == 0)
    {
        printf("You did not enter your name\n ");

    }
    else
    {
        
        printf("Hello %s\n", name);
    }
    

    return 0;
    
}