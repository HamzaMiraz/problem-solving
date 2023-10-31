#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
double bolod(double r,double aria)
{
    aria=3.14159*pow(r,2);
    return aria ;
}

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    double r,aria;
    while(scanf("%lf",&r)==1)
    {
        aria=bolod(r,aria);

        printf("Aria=%lf\n",aria);

    }
    return 0;
}
