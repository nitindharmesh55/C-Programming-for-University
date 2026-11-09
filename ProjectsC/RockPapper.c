#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include<string.h>

int main()
{
    srand(time(NULL));
    int playerChoice, computerChoice;

    printf("Let's Play Rock, Paper, Scissors!\n");
    printf("Choose Your Move: \n");
    printf("1 for Rock\n");
    printf("2 For Paper\n");
    printf("3 For Scissor\n");
    printf("Enter Your Choice: ");

    if(scanf("%d", &playerChoice) != 1 || playerChoice < 1 || playerChoice > 3 ){
        printf("Invalid Input !!");
        return 1;
    }

    computerChoice =  rand() % 3 + 1;

    char *choice[] =  {"Rock", "Paper", "Scissors"};

    printf("You Chose: %s\n", choice[playerChoice - 1]);
    printf("Computer Choose: %s\n", choice[computerChoice -  1]);

    if(playerChoice == computerChoice)
    {
        printf("It's a Draw!!");
    }
    else if((playerChoice == 0 && computerChoice == 2) || 
               (playerChoice == 1 && computerChoice == 0) || (playerChoice == 2 &&  computerChoice == 1)   ){
                printf("Congratulations, You Win!!\n ");
               }
               else
               {
                printf("Computer Wins! Better Luck Next Time");
               }
               
               return 0;
}