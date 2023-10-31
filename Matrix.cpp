#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n,m;
    int mat[10][10];
    int b[10][10];
    int sum[10][10];

    while(scanf("%d%d",&n,&m) ==2)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                scanf("%d",&mat[i][j]);
            }
        }
        puts("Matrix:");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                printf("%5d",mat[i][j]);
            }
            printf("\n");
        }


    }
    return 0;
}
