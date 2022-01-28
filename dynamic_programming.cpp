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
int n=60;
int DP[100010];

int go(int sum)
{
    //printf("%d\n",sum);
    if(sum==n)
        return 1;
    if(DP[sum]!=-1)
        return DP[sum];
    int result =0;
    DP[sum]=0;
    if(sum+1<=n)
        result+=go(sum+1);
    if(sum+7<=n)
        result+=go(sum+7);
    if(sum+5<=n)
        result+=go(sum+5);
    DP[sum]= result;
    return result;
}
int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    memset(DP,-1,sizeof(DP));
    int ans = go(0);

    printf("%d\n",ans);

    return 0;
}
