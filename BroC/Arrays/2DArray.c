#include<stdio.h>
int main(void)
{
    //    2D Arrays = an Array Where each element is an Array;
 int numbers[][3] = {{1, 2, 3},{4, 5, 6}, {7, 8, 9}};
 for(int k = 0; k < 3; k++)
 { 
    printf("[");
    for(int l = 0; l < 3; l++)
    {
        printf(" %d ", numbers[k][l]);
    }
    printf("]\n");
 }

}