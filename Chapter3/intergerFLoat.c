#include<stdio.h>
int main(void)
{
    // Aritimatic Operator: To Solve most programming problems we need to perform arithimatic operatios
    
    // Arithimatic operation is when we perform additon substraction and multiplication and division and remainder on two operadns;

    // When both operands in an arithimatic expression are integer that expression is called integer expression and the operation is called integer arithimatic

    // When both operands in arithimatic expression are floating point number or real number then the expression is called floating point expression or real expreesion  and the operation is called floating point arithimatic;

    // The Result of integer arithimatic always have integer value;

    // The Remainder operator(%) requires both operand to be integer and the seoncd operand must be nonzero;

    // In the divison operator the second operand can not be zero

    // The result of integer division result in truncated quotient;


    // If Divison operation is carried out with tow floating number or one of them is floating number so the result is going to be floating number;

    // If both operrands are negative then addition and subtraction, multiplication, divison the result in value whose sign determine by rules of algebra

    // The result of remainder operration always get the sign of first operand;

    // integer Arithimatic;
    printf("________Integer Arithimatic ____________\n");
    int a = 14, b = 5;

    printf("%d + %d = %d \n", a , b , a + b );
    printf("%d - %d = %d \n", a , b , a - b );
    printf("%d * %d = %d \n", a , b , a * b );
    printf("%d / %d = %d \n", a , b , a / b );


    // Floating Point Arithimatic; 

    float x = 14.0, y = 5.0;



    printf("%d + %d = %d \n", x , y , x + y );
    printf("%d - %d = %d \n", x , y , x - y );
    printf("%d * %d = %d \n", x , y , x * y );
    printf("%d / %d = %d \n", x , y , x / y );




}