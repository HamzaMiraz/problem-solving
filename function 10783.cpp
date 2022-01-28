#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

int fun(int a, int b)
{   int i;
    int sum=0;

    for(i=a;i<=b;i=i+2)
    {
        if(i%2==0)
        {
            i++;
        }
        sum=sum+i;
    }

    deb(sum);

    return sum;
}

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int i,j,a,b,n, sum;


    scanf("%d",&n);

    for(j=1;j<=n;j++)
    {
        scanf("%d%d",&a,&b);

        sum = fun(a,b);

        printf("Case %d: %d\n",j,sum);
    }
    return 0;
}
