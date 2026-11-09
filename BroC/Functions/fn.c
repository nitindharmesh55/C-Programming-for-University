// Function prototype - provide the compiler information about a function ;
#include<stdio.h>
#include<stdbool.h>
void hello(char name[], int age);
bool ageCheck(int age);

int main(){
    hello("Spongbob", 39);
    return 0;
}

void hello(char name[], int age)
{
    printf("Hello %s\n", name);
    printf("You are %d years old\n",  age);
}

bool ageCheck(int age)
{
    if(age >= 16 )
    {
        return true;
    }
    else{
        return false;
    }
}