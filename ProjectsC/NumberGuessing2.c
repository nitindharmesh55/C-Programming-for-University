// Objective: Build a game where the computer generates a secret number between 1 and 100, and the player tries to guess it.
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void)
{  
    srand(time(NULL));
    int number , guess, min, max;
    printf("Enter Range: ");
    printf("Starting: ");
    if(scanf("%d", &min) != 1)
    {
        printf("Invalid Input");
        return 1;
    }
    printf("End: ");
    if(scanf("%d", &max) != 1)
    {
        printf("Invalid Input");
        return 1;
    }

    number = rand() % (max - min + 1) +  min;
    int count = 0;
    while (1)
    {
          printf("What's your guess: between [%d - %d]: ", min, max);
   if(scanf("%d", &guess) != 1)
   {
    printf("Invalid Input");
    return 1;
   }
   if(guess == 0)
   {
    printf("Game Stopped!\n");
    break;
   }
    
    count++;

    if(guess == number)
    {
        printf("Correct Guess!: %d\n", number);
        printf("Attempts: %d\n", count);
        break;
    }
    else{
        printf("Wrong Guess! Try Again or Type 0 to Exit()\n");
    }
}
 
  
return 0;

}