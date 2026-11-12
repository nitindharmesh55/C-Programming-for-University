#include<stdio.h>

int main(void)
{

  FILE *pfile =  fopen("note.txt", "w");


  if(pfile == NULL)
  {
    printf("Oops! Could not Open the File.\n");
    return 1;
  }

  fprintf(pfile , "%s", "Hello this is a new files/n");

  fclose(pfile);

  printf("Done! Check Your Folder For 'Note.txt");
  return 0;







    return 0;
}