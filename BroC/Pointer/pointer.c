#include<stdio.h>
void birthDay(int *age);
int main(void)
{
    // Pointer= A Variable that store the memory address of the another variable ; 
    // Benefit: They Help avoid wasting memory by allowing you pass the address of a large data structure insted of copying the entire data ; 

int age =  25;
int *pAge = &age;

printf("%p\n", &age);
printf("%p\n", pAge);

birthDay(&age);
printf("You are %d year old\n", age);

return 0;
}

void birthDay(int *age)
{
    (*age)++;
}