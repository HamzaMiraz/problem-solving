#include <stdio.h>


int main()
{
    int c=0,ar[100],i,sum1=0,sum2=0;
    printf("Runs by BAN:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]>=50) ++c;
        sum1 = sum1+ar[i];

    }
    printf("Runs by SLK:");
    for(i=10;i<20;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]>=50)++c;
        sum2 = sum2+ar[i];

    }
    if(sum1>sum2)printf("BAN won\n");
    if(sum1<sum2)printf("SLK won\n");


    printf("Total half-centuris:%d",c);

    return 0;
}
