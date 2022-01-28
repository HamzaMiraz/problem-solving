#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int a,b,c;
    double Aria ,s ;
    while(scanf("%d%d%d",&a,&b,&c) ==3)
    {
        if (a+b>c && b+c>a && c+a>b)
        {
            s = (a+b+(double)c)/2;
            Aria = sqrt(s*(s-a)*(s-b)*(s-c));
            printf("Triangle possible Aria = %lf\n",Aria);
        }
        else
        {
            printf("Triangle Impossible\n");
        }
    }


    return 0;
}
