#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n;
    int i, cnt, sum;

    while(scanf("%d",&n) ==1)
    {
        for(i=1, cnt=0, sum = 0; i<=n; i++)
        {
            if(i%23==0 || i%19==0)
            {
                printf("%5d\n",i);
                cnt++;
                sum=sum+i;
            }
        }
        printf("Total %d numbers.!!!!!!!!!\n",cnt);
        printf("SUM: %d\n",sum);
    }
    return 0;
}
