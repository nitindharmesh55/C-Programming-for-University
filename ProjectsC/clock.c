#include<stdio.h>
#include<time.h>
#include<unistd.h>
int main(void)
{
    while(1)
    {
        time_t now = time(NULL);
        struct tm *current = localtime(&now);
        
        printf("\rHour:%02d: Min:%02d: Sec:%02d",
                                           current->tm_hour,current->tm_min,
                                        current->tm_sec);

                                        fflush(stdout);
                                        sleep(1);
    }

    return 0;
}