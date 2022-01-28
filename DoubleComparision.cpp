#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    double a, b;


    a = 1.111223344;
    b = 1.111223345;

    printf("%.25lf\n",a);
    printf("%.25lf\n",b);

    double x = 1e200;
    printf("x = %lf\n",x);

//    if(fabs(a-b) < 0.00001)
    if(fabs(a-b) < 1e-9)
    {
        puts("Equal.");
    }

    a = 49.9999999;

    printf("a = %.10lf\n", a);
    printf("a = %.0lf\n", a);
    int i;
    i = a;
    printf("i: %d\n",i);

    i = a+1e-3;
    printf("i: %d\n",i);

    return 0;
}
