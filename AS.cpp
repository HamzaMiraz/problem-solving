#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int a,n,d,N;

    while(scanf("%d%d%d",&a,&d,&n) ==3)
    {
        int fn;
        scanf("%d",&fn);
        int N ;
        int i=0;

        while(i<fn)
        {
            N=a+(n-1)*d;
            printf("%d# %d\n",n,N);
            n++;
            i++;
        }

    }
    return 0;
}


