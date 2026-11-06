// Objective:Build a program that accepts a person age and classifies them into different age group;

#include<stdio.h>
int main(void)
{  
    // storing the age of the student;
    int age;
    // Asking user to enter their age;
    printf("Enter the age: ");
    scanf("%d", &age);

  if(age >= 60)
  {
    printf("Senior Citizen");
  }
  else if(age >= 20)
  {
    printf("Adult");
  }
  else if(age >= 13)
  {
    printf("Teenager");
  }
  else if(age >= 0)
  {
    printf("Child");
  }
  else{
    printf("Invalid age");
  }
  return 0;
}