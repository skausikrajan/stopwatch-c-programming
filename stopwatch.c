#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
int main()
{
    int hours,minutes,seconds;
    int x,y,z;
    hours=minutes=seconds=0;
    printf("enter the hours for stopwatch:");
    scanf("%d",&x);
    printf("enter the minutes for stopwatch:");
    scanf("%d",&y);
    printf("enter the seconds for stopwatch:" );
    scanf("%d",&z);
    while(1)
    {
        system("clear");
        printf("%02d:%02d:%02d",hours,minutes,seconds);
        fflush(stdout);
        seconds++;
        if(seconds==x)
        {
            minutes+=1;
            seconds=0;
        }
        if(minutes==y)
        {
            hours+=1;
            seconds=0;
        }
        if(hours==z)
        {
            hours=0;
            minutes=0;
            seconds=0;
        }
        sleep(1);
    }
    return 0;
}
