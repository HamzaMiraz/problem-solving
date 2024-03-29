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
const double EPS = 1e-7; ///1*10^-7

int ar[110],N;
int dp[110];

int go(int pos)
{
    if(pos>=N)
        return 0;

    if(dp[pos]!=-1)
        return dp[pos];

    int a = go(pos+1)+ar[pos];
    int b = go(pos+2)+ar[pos];

    dp[pos] = max(a,b);

    return dp[pos];
}

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    while(scanf("%d",&N) ==1)
    {
        for(int i=0;i<N;i++)
            scanf("%d",&ar[i]);

        memset(dp,-1,sizeof dp);
        int a = go(0);

        memset(dp,-1,sizeof dp);
        int b = go(1);

        printf("Result is = %d\n",max(a,b));
    }
    return 0;
}
/**
input:

10
-1 -5 -7 6 9 -1 17 -3 3 5

**/
