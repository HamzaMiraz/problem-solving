#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d",&n);
    int ar[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);

    }
    m=ar[0];
    for(int i=0;i<n;i++)
    {
        if(ar[i]<m) m=ar[i];

    }
    printf("minimum = %d\n",m);

    return 0;
}
