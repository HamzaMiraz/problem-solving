
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <vector>
#include <map>
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

bool notprime[10010000] = {false};
void sieve(int n)
{
    for(int i=3;i<=n;i+=2)
    {
        if(notprime[i]== false)
        {
            if(n/i >= i)
            {
                for(int j=i*i;j<=n;j+=2*i)
                {
                    notprime[j]=true;
                }

            }

        }
    }
    for(int i=3;i<=n;i+=2)
    {
        if(notprime[i]==false)
        {
            printf("%d ",i);
        }
    }

}

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    int n;
    scanf("%d",&n);
    {
        sieve(n);
        puts("\n");
    }
    return 0;
}
