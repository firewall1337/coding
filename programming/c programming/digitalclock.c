#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() 
{
    struct tm ct; 
    printf("\e[?25l");
    while (1)
    {
        time_t m = time(NULL); //  time_t. time(NULL) returns the number of seconds elapsed since 00:00:00 hours, GMT (Greenwich Mean Time), January 1, 1970. 
        localtime_r(&m,&ct); //  function shall convert the time in seconds since the Epoch pointed to by timer into a broken-down 
        printf("%i:%i:%i \r", ct.tm_hour,ct.tm_min,ct.tm_sec);
        fflush(stdout);
        sleep(1);
    }
 //    printf("%s", ctime(&m));
  //  printf("%i",ct.tm_year+1900);
    
}