#include<stdio.h>

int main(){
    // Write A FILE;
   
    FILE  *pFile = fopen("output.txt", "w");

    char text[] = "Booty Booty \n Rockin Roll";
    
    if(pFile == NULL)
    {
        printf("Error Opening File");
        return 1;
    }

    fprintf(pFile, "%s", text);
    printf("File Was Written Sucessfully ");
    
   
   fclose(pFile);
    return 0;
}