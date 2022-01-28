#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int y;
    while(scanf("%d",&y) ==1)
    {
        if (y%4==0 && y%100!=0)
        {
            printf("Leap year");
        }
        else if (y%400==0)
        {
            printf("Leap year");
        }
        else
        {
            printf("Not leap year");
        }
    }
    return 0;
}

