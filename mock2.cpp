#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

//For Debugging
#define debug(a...)          {cout<<" #--> ";dbg,a; cout<<endl;}
struct debugger
{
    template<typename T> debugger& operator , (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;


#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;
typedef long long LL;
const double PI = acos(-1);

int main()
{
//    freopen("0.in", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n,t;
    int k,z,s,c,i,j;

    long long a[200005];
    long long x;

    scanf("%d",&t);
    for(int l=0;l<t;l++)
    {
        scanf("%d%lld",&n,&x);
        c=0;
        for(int k=0;k<n;k++)
        {
            scanf("%lld",&a[k]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i!=j)
                {
                    s=a[i]-a[j];
                    z=abs(s);

                    if(z<=x)
                    c=c+1;

                }

            }

        }
        printf("%d\n",c);


    }

    return 0;
}
