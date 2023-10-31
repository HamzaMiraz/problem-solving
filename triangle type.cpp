#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    double a,b,c;
    while(scanf("%lf%lf%lf",&a,&b,&c) ==3)
    {
        if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
        {
            printf("Right angle\n");
        }
        else if (a*a>b*b+c*c || b*b>a*a+c*c || c*c>a*a+b*b)
        {
            printf("Obese angel\n");
        }
        else if(a*a<b*b+c*c || b*b<a*a+c*c || c*c<a*a+b*b)
        {
            printf("Acute angel\n");
        }
    }
    return 0;
}


