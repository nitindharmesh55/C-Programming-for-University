#include<stdio.h>
int main(void)
{

    FILE *pFile = fopen("user_note.txt", "r");
    char buffer[1024] = {0};
     
    if(pFile == NULL)
    { 
        printf("Error Opening File:");
        return 1;
    }

    while(fgets(buffer, sizeof(buffer), pFile) != NULL)
    {
        printf("%s", buffer);
    }



    fclose(pFile);
    return 0;
};