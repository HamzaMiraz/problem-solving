#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int i,j,n,m;
    int a[10][10];
    int b[10][10];
    int sum[10][10];

    while(scanf("%d",&n) ==1)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
       printf("Matrix A:\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%5d",a[j][i]);
            }
            printf("\n");
        }

    }
    return 0;
}
