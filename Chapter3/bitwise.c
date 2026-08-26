#include<stdio.h>
int main(void)
{
    // Bitwise operator: it is bit manipulation operator, it can manipulate individual bits whithin piece of data ; 
    // it can operate on inters and character but not on floating point numbers and double data type;
   
    // ~ this is bitwise NOT: it's unary operator it complement each bit of operand;
    int a = 5;
    printf("%d\n", ~a);
    

    int aa = 5;
    int bb = 3;

    printf("%d\n", aa & bb);

// Bitwise even or odd numer 
    int n = 2;
    if(!(n & 1)){
        printf("Even\n");
    }
    else
    {
        
        printf("odd\n");
    }
    


    int L = 4;
    int m = 3;
    printf("%d\n", L | m);

//  XOR ^;

int Result =  5 ^ 3;
printf("%d\n", Result);


// inclusive Or;

int xx = 4;
xx = xx | 1;

int yy = 6;
yy =  yy | 1;
 
printf("%d\n", xx);

printf("%d\n", yy);










    return 0;

}