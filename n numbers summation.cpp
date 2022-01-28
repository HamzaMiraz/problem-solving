#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int a,n,d,s;
    while(scanf("%d%d%d",&a,&d,&n) ==3)
    {
        s=n*(2*a+(n-1)*d)/2;
        printf("s=%d",s);
    }
    return 0;
}
