#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);   ///To write  a file.
    int n , i ,j ;
    while(scanf("%d",&n) ==1)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                printf(" ");
            }
            for(j=0;j<n-i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
