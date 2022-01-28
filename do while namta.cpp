/// Using do-while loop


#include<stdio.h>

int main()
{
    int x=0;
    int n;
    int t=1;

    scanf("%d",&n);
    do
    {
        x=n*t;
        printf(" %d x %d = %d\n",n,t,x);
        t++;

    }
    while(t<=10);

    return 0;
}
