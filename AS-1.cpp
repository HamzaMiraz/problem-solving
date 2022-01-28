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
        int N ;
        int i=0;
        while(i<n)
        {
            N=a+i*d;
            printf("%5d#%5d\n",1+i,N);
            i++;
        }

    }
    return 0;
}


