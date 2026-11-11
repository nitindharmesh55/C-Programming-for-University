#include<stdio.h>

int main(void)
{
    FILE *pFile = fopen("user_note.txt", "r");

    if(pFile ==  NULL)
    {
        printf("Error");
        return 1;
    }
    char buffer[1000];
    
    while (fgets(buffer, sizeof(buffer), pFile) != NULL)
    {
         printf("%s", buffer);
    }
    

    fclose(pFile);
    printf("Done Successfully");

    return 0;
    
}