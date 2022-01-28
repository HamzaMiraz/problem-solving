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
const LL MOD = 1000000007;
const double PI = acos(-1);
const double EPS = 1e-7; ///1*10^-7
int n=7;
int DP[100010];
int mv[1000],m;

int go(int sum)
{
    //printf("%d\n",sum);
    if(sum==n)return 1;
    if(sum>n)return 0;
    if(DP[sum]!=-1)return DP[sum];
    DP[sum] = 0;
    for(int i=0;i<m;i++)
    {
        DP[sum]=(DP[sum]+go(sum+mv[i]))%MOD;
    }
    return DP[sum];

}
int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n;
    while(cin>>n>>m){

    memset(DP,-1,sizeof(DP));
    for(int i=0;i<m;i++)
    {
        cin>>mv[i];
    }
    int ans = go(0);

    printf("%d\n",ans);
    }
    return 0;
}
