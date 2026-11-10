#include<stdio.h>
#include<string.h>

int main(void)
{
    char fruits[][10] = {"Apple", "Banana", "Coconuts"};
    int size = sizeof(fruits) /  sizeof(fruits[0]);
    
    
    for(int l = 0; l < size; l++)
    {
      fruits[l][0] = 'N';
    }

    for(int i = 0; i < size; i++)
    {
        printf("%s\n", fruits[i]);
    }
   
  
    char names[3][25] = {0};

for(int n = 0; n < 3; n++)
{
    printf("Enter Your Name: ");
    fgets(names[n], sizeof(names[n]), stdin);
    names[n][strlen(names[n]) - 1] = '\0';

}

for(int m = 0; m < 3; m++)
{
    printf("%s\n", names[m]);
}

    



    return 0; 
}