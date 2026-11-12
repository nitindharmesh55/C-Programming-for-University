#include<stdio.h>

int main(void)
{
    FILE *pFile =  fopen("note.txt", "r");

    if(pFile == NULL)
    {
        printf("Oops! Could not Open File!!");
        return 1;
    }

    // Create a temporary container ;

    char buffer[100];

    while(fgets(buffer, sizeof(buffer), pFile) != NULL){
        printf("%s", buffer);
    }

    fclose(pFile);

    return 0; 
}