#include<stdio.h>
void addTen(int *numPtr);

int main(void)
{
    int age = 25;
    int *pAge = &age;

    printf("Value of age: %d\n", age);
    printf("Memory Address of age: %p\n", &age);
    printf("Value Stored inside pAge: %p\n", pAge);
    printf("Values at the address ptr pointers: %d\n", *pAge);


    int score = 50;
    int *pScore = &score;

    printf("Original Score: %d\n", score);

    *pScore = 100;

    printf("New Score: %d\n", score);


    int points = 20;
    printf("Points before function: %d\n", points);

    addTen(&points);

    printf("Pointer after funciton: %d\n", points);

    int numbers[3] = {10, 20, 30};
    int *ptr =  numbers;

    printf("First Element: %d\n", *ptr);

    printf("Second Element: %d\n", *(ptr + 1));
    printf("Third Element: %d\n", *(ptr + 2));
    


    return 0; 
}

void addTen(int *numPtr)
{
    *numPtr =  *numPtr + 10;
}