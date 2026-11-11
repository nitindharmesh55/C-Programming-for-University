#include<stdio.h>
typedef struct{
    char model[25];
    int year;
    int price;
}Car;

int main(void)
{

    // Array of Struct =  Array where each element contain a struct {}

    Car Cars[] = {{"BMW", 2027, 25000},
                           {"Mustang", 2027, 25000},  {"Ferrari", 2027, 25000} };
  
 int number =  sizeof(Cars) / sizeof(Cars[0]);

for(int i = 0; i < number; i++)
 {
    printf("Model: %s\nYear: %d\nPrice:%d\n", Cars[i].model, Cars[i].year, Cars[i].price);
    printf("\n");
 }
    
    
    return 0;
}