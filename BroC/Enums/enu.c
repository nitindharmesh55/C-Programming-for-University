#include<stdio.h>
typedef enum{
  SUNDA,  MONDAY, TUESDAY, WEDNESDAY,THURSDAY, FRIDAY,SATURDAY 
} Day;


typedef enum{
    SUCCESS, FAILURE, PENDING
 }Status;
 void connectStatus(Status status);

int main(void)
{
    // Enums: A User defined data type that consist of a set of named integer constants,
    // Replace number with readable name;



      Day today =  SUNDA;

    printf("%d\n", today);
   
    Status status  = FAILURE;

   connectStatus(status);
     

 return  status;
}


void connectStatus(Status status){

    switch (status)
    {
    case SUCCESS:
         printf("Connection was Good");
        break;
    case FAILURE:
      printf("Connection failed!\n");
      break;

    case PENDING:
    printf("Connection is pending....");
    break;
    
    default:
    printf("No Status Response!");
        break;
    }

}