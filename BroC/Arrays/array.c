#include<stdio.h>

int main(void)
{  
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    int scores[n] ;

 for(int j = 0; j < n; j++)
 {
    printf("Enter score of Student[%d]: ", j + 1);
    scanf("%d", &scores[j]);
 }


   for(int i = 0; i < n; i++)
   {
    printf("%d ",  scores[i]);
   }



//    2D Arrays = an Array Where each element is an Array;
 int numbers[][3] = {{1, 2, 3},{4, 5, 6}, {7, 8, 9}};
 for(int k = 0; k < 3; k++)
 {
    for(int l = 0; l < 3; l++)
    {
        printf("[%d %d %d]", numbers[k][l]);
    }
    printf("\n");
 }

    return 0;
}