#include<stdlib.h>
#include<stdio.h>

int main(void)
{
    char *buffer =  malloc(100 *  sizeof(char));
    if(buffer == NULL)
    {
        printf("Allocation Failed\n");
        return 1;
    }
    sprintf(buffer, "%s", "This is First Project of the Memory Allocation heheh!");
   
     FILE *pFile = fopen("Project1.txt", "w");
     if(pFile == NULL)
     {
        printf("Oops! could not open the File!!\n");
        free(buffer);
        return 1;
     }

     fprintf(pFile, "%s", buffer);

     fclose(pFile);

     FILE *rFile = fopen("Project1.txt", "r");

     if(rFile == NULL)
     {
        printf("Failed\n");
        free(buffer);
        return 1;
     }

     char buff[100];

     while(fgets(buff, sizeof(buff), rFile) != NULL)
     {
        printf("%s", buff);
     }

     fclose(rFile);
  

   
    return 0;
}