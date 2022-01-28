#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int a,n,r,N;

    while(scanf("%d%d%d",&a,&r,&n) ==3)
    {
        int i=0;
      //  int sum  = 0;
        while(i<n)
        {
            N=a*(pow(r,i) + 1e-5 ) ;
            printf("%d# %d\n",1+i,N);
         //   sum += on;  /// sum = sum +on;

            i++;
        }

    }
    return 0;
}
