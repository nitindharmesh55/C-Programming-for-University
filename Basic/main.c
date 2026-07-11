#include <stdio.h>
#include <stdbool.h>
// Preprocess directive: we're telling compiler to include input and output librrary;
// Header file: we need to include header file in order to display text to the screen;

// Entry point for the programm is the main funciton;

int main(void)
{

  printf("Hello, Nitin \n");
  printf("It's Really good \n");

  //  single comment;
  /*
    Multiple comment;
    this is
    also
    comment;
  */

  //   Variable = : A reusable container for a value;
  //                Behaves as if it were the value it contain;

  // Integer;
  int age = 25;
  int year = 2025;
  int quantity = 1;

  printf("You are %d years old \n", age);
  printf("The Year is %d\n", year);
  printf("You have order %d x items\n", quantity);

  //   Decimal numbers ;
  float gpa = 2.5;
  printf("Your gpa is %.2f\n", gpa);

  float price = 99.99;
  printf("The Price is $%.2f\n", price);

  float temprature = -10.1;
  printf("Temprature is %f\n", temprature);

  // with Big Numbers;

  double pi = 3.14545454545454;
  double e = 2.71554545455754;
  printf("The Value of PI is %0.15lf\n", pi);
  printf("The Value of e is %.15lf\n", e);

  // String or charcter;

  char grade = 'A';
  printf("Your grade is %c\n", grade);

  char symbol = '!';
  printf("Your Favorite symbol is %c", symbol);

  char currency = '$';
  printf("The currency is %c\n", currency);

  // in c programming we use array of charcter to represent the string;
  // array hold more than one value;
  char name[] = "Nitin-Rajdharmesh";
  printf("Hello %s\n", name);

  char food[] = "Pizza";
  printf("Your Favorite food is %s\n", food);

  char email[] = "Nitin@gmail.com";
  printf("Here is your Email: %s\n", email);

  // Boolean : either true or false;

  bool isOnline = true;
  printf("%d\n", isOnline);
  // 1 meanse true;
  // 0 means false;

  if (isOnline)
  {
    printf("You are online \n");
  }
  else
  {
    printf("you are not online\n");
  }

  bool isStudent = true;

  if (isStudent)
  {
    printf("You are a student");
  }
  else
  {
    printf("You are not student");
  }

  // int = whole number (4 bytes in morden system);
  // float = single-precision decimal number (4 bytes);
  // double =  double-precision decimalnumber (8 bytes);
  // char =  single character (1byte);
  // char[] = array of character (size veries);
  // bool =  true or false (1 byte requires <stdbool.h);

  /*Formate specifier = special token that begins with % symbol;
  followed by a character that specifies the data type and modifiers(width precision, flags)
  they control how data is displayed;

 */

  int number = 25;
  float deciNumber = 1.85;
  double PI = 3.14159;
  char Letter = 'N';
  char NAME[] = "NitinDharmesh";

  printf("%d \n", number);
  printf("%f\n", deciNumber);
  printf("%lf", PI);
  printf("%c\n", Letter);
  printf("%s\n", NAME);

  //  Width
  int num1 = 1;
  int num2 = 10;
  int num3 = 100;

  // Width specifices the minimum numbers of chacrter to print;

  printf("%03d\n", num1);
  printf("%03d\n", num2);
  printf("%03d\n", num3);

  printf("%+d\n", num1);
  printf("%+d\n", num2);
  printf("%+3d\n", num3);

  // This pluse sign will shows the number if it is negtive or positive;

  float PRICE = 19.99;

  float PRICE2 = 19.99;

  float PRICE3 = 19.99;

  printf("%+7.2f\n", PRICE);
  printf("%.2f\n", PRICE2);
  printf("%.2f\n", PRICE3);

  // Arithimatics; operator

  int x = 2;
  int y = 3;
  int z = 0;

  // // addition
  // z = x + y;

  // // Subtract;
  // z = x - y;

  // // Mutiplication;

  // z =  x * y;

  // // Division;

  // z =  x / y;

  // // Modeules or remainder;

  // z = x % y;

  // // increament;
  // x++; //increment by one;
  // x--; // decrement by one;

  // // Agumented assingment;
  // x+=2;
  //  X-=2;
  //  x *= 2;
  //  X /= 2;

  // Shortcut if we reassigning the same variable

  printf("Answer: %d\n", z);

  // Accepting user input;
  int Age = 0;
  float GPA = 0.0f;
  char gradee = '\0';
  char Name[30] = "";

  printf("Enter Your Age: ");
  scanf("%d", &Age);

  printf("Enter Your GPA: ");
  scanf("%f", &GPA);


  // clearing input buffer;
  printf("Enter Your grade: ");
  scanf(" %c", &gradee);


  printf("Nitin\n");
  printf("%d\n", Age);
  printf("%.1f\n",GPA);

  return 0; // it return this to the operating systeml
}

// Video: 1:02:02;