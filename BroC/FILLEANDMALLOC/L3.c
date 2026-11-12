#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int size = 50;

    char *my_memory =  malloc(size * sizeof(char));

    if(my_memory == NULL)
    {
        printf("Memory Allocation Failed!\n");
        return 1;
    }

    printf("Successfully Allocated %d bytes of memory!\n", size);
   


    sprintf(my_memory, "Hello , I am living inside this memory!!!");

    printf("Stored Message: %s\n", my_memory);
    
   

    free(my_memory);
    my_memory == NULL;

    return 0; 

}