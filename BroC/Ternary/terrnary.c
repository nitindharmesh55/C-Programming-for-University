#include<stdio.h>

int main(void)
{
    // Ternary Operator: Short hand for If-else statement;

    // condition ? Value_if_true : value_if_false;


    int x = 5;
    int y = 6;
    int max =  (x > y) ? x : y;
   
    printf("%d", max);


}