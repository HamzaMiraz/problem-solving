#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

typedef long long LL;

int fun(int n,int ar[50])
{
    int i,j,k;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(ar[j]>ar[j+1])
            {
                k=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=k;

            }
        }

    }
    for(i=0;i<n;i++)
    {
         printf("%d",ar[i]);
    }

}



int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n,ar[50],i;
    while(scanf("%d",&n) == 1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }

        fun(n,ar);

    }
    printf("\n");
    return 0;
}
