#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int i,j,n,m,k,r1,c1,r2,c2;
    int a[10][10];
    int b[10][10];
    int sum[10][10];

    while(scanf("%d%d%d%d",&r1,&c1,&r2,&c2) ==4)
    {
        if(c1!=r2)
        {
            printf("matrix error !!!");

        }
        else
        {
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
           printf("Matrix A:\n");
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                {
                    printf("%5d",a[i][j]);
                }
                printf("\n");

            }
            for(i=0;i<r2;i++)
            {
                for(j=0;j<c2;j++)
                {
                    scanf("%d",&b[i][j]);
                }
            }
            printf("Matrix B:\n");
            for(int i=0;i<r2;i++)
            {
                for(j=0;j<c2;j++)
                {
                    printf("%5d",b[i][j]);
                }
                printf("\n");
            }
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c2;j++)
                {
                    m=0;
                    for(k=0;k<c1;k++)
                    {
                        m=m+a[i][k]*b[k][j];
                    }
                    sum[i][j]=m;

                }
            }
            printf("Matrix c:\n");
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c2;j++)
                {
                    printf("%5d",sum[i][j]);
                }
                printf("\n");
            }

        }

    }
    return 0;
}
