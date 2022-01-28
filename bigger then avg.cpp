#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n;
    int i, cnt, sum;
    int ar[10];

    while(scanf("%d",&n) ==1)
    {
        for(int i=0;i<n;i++){
            scanf("%d",&ar[i]);
        }
        int sum  = 0;
        for(int i=0;i<n;i++){
            sum += ar[i];
        }

        double avg = sum/(double)n;

        printf("\t\tAverage: %lf\n\n",avg);

        for(int i=0;i<n;i++){
            if(ar[i]>avg)
                {
                printf("Bigger than avg. %d -> %d\n",i, ar[i]);
            }
        }
    }
    return 0;
}
