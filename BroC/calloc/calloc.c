#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    // Calloc: Contiguous Allocation;
    //            Allocate memory dynamically and sets all allocated bytes to 0
    // Malloc is faster but calloc leads to less bugs 



    int number = 0;
    printf("Enter the number of player: ");
    scanf("%d", &number);


    int *scores = calloc(number ,  sizeof(int));
    if(scores == NULL)
    {
        printf("Memory Allocation Failed\n");
        return 1;
    }

    for(int i = 0; i < number; i++)
    {
        printf("Enter score[%d]: " , i + 1);
        scanf("%d", &scores[i]);
    }

    for(int i = 0; i < number; i++)
    {
        printf(" %d ", scores[i]);
    }


    free(scores);
    scores == NULL;


    return 0; 
}