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


    int diff2 = abs(a-b);       ///fabs for double., abs for int

    printf("abs:  %d\n", diff2);


    double x = fabs(-9.81);
    printf("Fabs: %lf\n",x);

    printf("%lf %lf\n",sqrt(81), sqrt(6));

    return 0;
}
