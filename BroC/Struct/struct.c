#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef  int Number;
typedef float Decimal;
typedef char string[50];
typedef enum{
    MAX = 100 , STATUS = 0
}Fire;

typedef struct  
{
     string name;
     Number age;
     Decimal gpa;
     bool isFullTime;
     
} Student;

void printStudent( Student student);
int main(void)
{
    // Struct: A Custom container That hold multiple pieces of related information
    // Similar to objects in other languages ;

    Fire status = STATUS;

            Student  student1 = {"Spongbob", 30, 2.5, true};
        Student Nitin = {"Nitin", 23, 3.9, true};
        Student Sahra  = {0};

    strcpy(Sahra.name, "Sahra");
    Sahra.age =  24;
    Sahra.gpa = 3.5;
    Sahra.isFullTime = true;
    
    printStudent(Nitin);
    printStudent(student1);
    printStudent(Sahra);
  

    return status;
}


void printStudent( Student student)
{
 printf("%s\n", student.name);
    printf("%d\n", student.age);
    printf("%.2f\n", student.gpa);
    printf("%d\n", student.isFullTime);

}