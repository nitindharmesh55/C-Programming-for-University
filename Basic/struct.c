// Struct initialization
#include<stdio.h>

struct Date
{
   int day;
   int month;
   int year;
};

struct student
{
  int roll;
  char name[12];
  struct Date Dob;
};

struct team {
  char name[50];
  int roll;
  float marks;
};

int main(){

  struct student Nitin =  {1, "Nitin", {9,10,2002}};

  printf("Name:%s\n", Nitin.name);
  printf("Roll Number: %d\n", Nitin.roll);
  printf("DOB:%d - %d-%d\n", Nitin.Dob.day, Nitin.Dob.month, Nitin.Dob.year);
     
  struct team students[2];

  students[0] = (struct team){"Nitin", 18, 99.98};
  students[1] = (struct team){"Nirmal", 19, 87.99};
  int length = sizeof(students) /  sizeof(students[0]);  
  for(int i = 0; i < length; i++ )
  {
    printf("Name: %s\n", students[i].name);
    printf("Roll: %d\n", students[i].roll);
    printf("Marks:%.2f\n", students[i].marks);
  }

  return 0;

}

