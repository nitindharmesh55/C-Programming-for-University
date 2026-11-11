#include<stdio.h>
#include<string.h>
typedef char string[1000];

int main(void)
{
    string message = {0};

    printf("Your Message: ");
    fgets(message, sizeof(message), stdin);
    message[strlen(message) - 1] = '\0';

    FILE *pFile = fopen("user_note.txt", "a");
    if(pFile == NULL)
    {
        printf("Error Opening File");
        return 1;
    }

    fprintf(pFile,"%s", message);

    fclose(pFile);
   
    printf("The File is added Successfully\n");
    return 0;

}