#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n,j,i;
    while(scanf("%d",&n) ==1)
    {

        for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                printf(" ");
            }
            for(j=0;j<i+1;j++)
            {
                printf("*");
            }

            printf("\n");
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<i+1;j++)
            {
                printf(" ");
            }
            for(j=0;j<n-i-1;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}

