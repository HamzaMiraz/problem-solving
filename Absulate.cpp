#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    int diff;

    scanf("%d%d",&a,&b);
    diff = a-b;

    if(diff<0)
    {
///        diff = diff * -1;
        diff = -diff;
    }
    printf("->  %d\n", diff);


    int diff2 = abs(a-b);       ///fabs for double.

    printf("abs:  %d\n", diff2);


    double x = fabs(-9.81);
    printf("Fabs: %lf\n",x);


    return 0;
}
