#include<stdio.h>
#include<stdlib.h>
int sum(int numbers[], int size);
float average(int numbers[], int size);

int largest(int numbers[], int size);
int smallest(int numbers[], int size);

int main(void)
{
    int number;
    printf("How Many Number: ");
    scanf("%d", &number);

 

   

    int *numbers =  malloc(number * sizeof(int));

    if(numbers == NULL)
    {
        printf("Memory Allocation Failed\n");
        return 1;
    }

    for(int i = 0; i < number; i++)
    {
        printf("Enter Number[%d]: ", i + 1);
        scanf("%d", &numbers[i]);

    }
    int total_sum =  sum(numbers, number);
    float total_Average = average(numbers, number);
    int largestt =  largest(numbers, number);
    int  small = smallest(numbers, number);
     char *my_memory =  malloc(200  *  sizeof(char));
    if(my_memory == NULL)
    {
        printf("Memory ALLocation Failed\n");
        free(numbers);
        return 1;
    }


   sprintf(my_memory, "Sum: %d | Average: %.2f | Largest: %d | Smallest: %d", total_sum, total_Average, largestt, small);

      FILE *pFile = fopen("Status.txt", "w");

      if(pFile == NULL)
      {
        printf("Oops! could not open the files!!");
        free(numbers);
        free(my_memory);
        return 1;
        
      }

      fprintf(pFile, "%s", my_memory);

      fclose(pFile);

      printf("Files Added!\n");
      free(numbers);
      free(my_memory);




    return 0;
}
int sum(int numbers[], int size)
{
    int sum = 0;

    for( int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }

    return sum;

}

float average(int numbers[], int size)
{
    float average = 0;

    for(int i = 0; i < size; i++)
    {
        average += numbers[i];
    }

    return  average / (float)size;
}

int largest(int numbers[], int size)
{
    int largest = numbers[0];

    for(int i = 0; i < size; i++)
    {
        if(largest < numbers[i])
        {
            largest = numbers[i];
        }
    }

    return largest;
    
}

int smallest(int numbers[], int size)
{
    int smallest = numbers[0];
    for(int i = 0; i < size; i++)
    {
        if(smallest > numbers[i])
        {
            smallest = numbers[i];
        }
    }
    return smallest;
}