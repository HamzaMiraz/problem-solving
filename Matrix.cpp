#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n;
    int mat[10][10];
    int b[10][10];
    int sum[10][10];

    while(scanf("%d",&n) ==1)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%d",&mat[i][j]);
            }
        }
        puts("Matrix:");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%5d",mat[i][j]);
            }
            printf("\n");
        }


    }
    return 0;
}
