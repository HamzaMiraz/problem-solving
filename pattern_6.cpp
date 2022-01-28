#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n , i ,j,sum ;
    while(scanf("%d",&n) ==1)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                printf(" ");
            }
            for(sum=1,j=0;j<i+1;j++)
            {
                printf("%d",sum);
                sum=sum+1;
            }

            printf("\n");
        }
    }
    return 0;
}

