// 

// #include<string.h>
// #include<stdio.h>

// int main(){
//     char str[100];
//     printf("Enter a number: ");
//     scanf("%99s", str);
   
//     for(int i = strlen(str)- 1; i >= 0; i--)
//     {
//         printf("%c", str[i]);
//     }

// }


// #include<stdio.h>
// int main(void)
// {
//     int Original, reverse = 0, n, remainder;

//     printf("Enter a number (for Palindrom:): ");
//     scanf("%d", &n);
//     Original =  n;

//     while (n > 0)
//     {
//          remainder =  n % 10;

//          reverse =  reverse * 10 +  remainder;

//          n =  n / 10;
//     }

//     if(Original == reverse){
//         printf("%d is Palindrom", Original);
//     }
//     else
//     {
//         printf("Try Again");
//     }
    
    
// }


// #include <stdio.h>
// #include<string.h>

// int main(void)
// {
//     char str[100];
//    char rev[100];
//    char original[100];
//    int j = 0;
//    printf("Enter strring: ");
//    scanf("%99s", str);
//    strcpy(original, str);
//    int i ;

//    for(i = strlen(str) - 1;  i >= 0; i-- )
//    {
//        rev[j]= str[i];
//        j++;
//    }

//    rev[j] = '\0';


//    if(strcmp(str, rev) == 0)
//    {
//     printf("%s is Palindrom", str);
//    }
//    else
//    {
//     printf("%s is not palindrom\n", original);
//    }
   

//    for(int k = 0;  str[k] != '\0'; k++)
//    {
//       if(str[k] >= 'a' && str[k] <= 'z')
//       {
//         str[k] = str[k] - 32;
//       }
//    }
  
//    printf("%s", str);
 


// }




// #include<string.h>
// #include<stdio.h>
// int main(void)
// {
//     char str[100];
//     char reves[100];
//     char org[100];
//     int i, j= 0, k;

//     printf("Enter a string:  ");
//     scanf("%99s", str);
//     strcpy(org, str);
//     for(i = strlen(str); i >= 0; i --)
//     {
//       reves[j] =  str[i];
//       j++;
//     }
//     reves[j] = '\0';

//     for(k = 0; reves[k] != '\0'; k++)
//     {
//         if(reves[k] >= 'a' && reves[k] <= 'z')
//         {
//           reves[k]  = reves[k] - 32;
//         }
//     }

//     printf("%s", reves);
// }


#include<stdio.h>
int main(void)
{
  
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    for (int row = 0; row < number; row++)
    {
        for(int j = 0; j < row + 1;  j++)
        {
            printf("#");
        }
        printf("\n");
    }
    

}