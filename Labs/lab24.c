#include<stdio.h>
void bubbleSort(int arr[], int n)
{
    int i , j , temp;
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0;  j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp =  arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(void)
{
  int n;
  printf("Enter number of Element:  ");
  scanf("%d", &n);

  printf("Number of Element %d:", n);

  int arr[n];
 int j;
  for(j = 0;  j < n; j++)
  {
    scanf("%d", &arr[j]);
  }
   
  bubbleSort(arr, n);

    int i;

    for(i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
         printf("\n");
    }
   

    return 0;
}