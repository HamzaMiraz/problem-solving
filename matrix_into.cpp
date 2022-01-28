#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int i,j,n,m,k;
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
                printf("%5d",a[i][j]);
            }
            printf("\n");

        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("Matrix B:\n");
        for(int i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%5d",b[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                m=0;
                for(k=0;k<n;k++)
                {
                    m=m+a[i][k]*b[k][j];
                }
                sum[i][j]=m;

            }
        }
        printf("Matrix ANS:\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%5d",sum[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
