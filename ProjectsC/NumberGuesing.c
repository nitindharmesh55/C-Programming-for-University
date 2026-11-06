// Objective: Build a game where to computer generate a secret number between 1 and 100 and the player tries to guess it 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
    // srand(time(NULL));
    // int number = rand() %  (20 - 10 + 1) + 10;
    // printf("%d", number);
    // return 0;

//     srand() sets the starting seed for the random number generator.



// time(NULL) gives the current time in seconds.



// This makes the sequence different when you run the program at different times.

    time_t now = time(NULL);
    struct tm *current =  localtime(&now);
    printf("%s", asctime(current));

    // Time(NULL): get the current calender time;
    // localtime(&now) ; convert into local date time/ components
    // asctime(current): convert those components into readable text;

    printf("Year: %d\n", current->tm_year + 1900);
    printf("Moth: %d\n", current->tm_mon + 1);
    printf("Day: %d\n", current->tm_mday);
    printf("Hour : %d\n", current->tm_hour);
    printf("Minutes :  %d\n", current->tm_min);
    printf("Second: %d\n", current->tm_sec);


    

    return 0;
}