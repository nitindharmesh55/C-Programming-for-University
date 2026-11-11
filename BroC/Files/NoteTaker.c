#include<stdio.h>
int main(void)
{
    // 1. Open a file named note.text in write mode;
    FILE *pFile = fopen("note.txt", "w");
    
    // Check iff file opend successfully;
    if(pFile == NULL)
    {
        printf("Error Opening Files!\n");
        return 1;
    }

    // 2. Writing text into the file using pointer;
    fprintf(pFile, "Hello! This is Nitin This is my new Starting of my life\n");

    // Always close The files when you are done;
    fclose(pFile);
    printf("File written Successfully Check your folder");

    return 0; 
}