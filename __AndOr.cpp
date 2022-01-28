#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int a,b;

    while(scanf("%d%d",&a,&b) ==2)
    {
/**
        && Logical AND
        || Logical OR
*/
        if(a%5==0 || (a==b && a%2==0))
        {
            printf("Good\n");
        }
        else
        {
            printf("Bad\n");
        }
    }

    return 0;
}
