#include<stdio.h>
#include<string.h>

int main(void)
{
    char name[50] = "";

  
    printf("Enter your full Name: ");

    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("%s\n", name);
// Fgets file getts string


// Shopping cart projects;

char items[50] = "";
float price = 0.0f;
int qunantity  = 0;
char currency = "$";

// 1:08;48



    return 0;
}