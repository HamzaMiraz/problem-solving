#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int a,b,c,d,e;
    double avg =(a+b+c+d+e)/(double)5;
    while(scanf("%d%d%d%d%d",&a,&b,&c,&d,&e) ==5)
    {printf("%lf",avg);}
    return 0;
}

