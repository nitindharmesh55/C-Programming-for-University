#include <stdio.h>
int main(){
    int place = 1;
    int groups ;
    int digit1, digit2, digit3, octal = 0, binary;

    printf("Enter Binary: ");
    scanf("%d", &binary);

    while (binary > 0)
    {
         digit1 = binary % 10;
         binary = binary / 10;

         digit2 = binary % 10;
         binary = binary / 10;

         digit3 = binary % 10;
         binary =  binary / 10;

         groups = (digit3 * 4) + (digit2 * 2) + (digit1 * 1);

         octal =  octal +  (groups * place);
         
         place = place * 10;

    }

    printf("Octal:%d", octal);
    return 0;
    
    
}