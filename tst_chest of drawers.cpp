#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
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
typedef long long ll;
const double PI = acos(-1);
const double EPS = 1e-7; ///1*10^-7
const int oo = 1e8+0.5;

#define lock 1
#define unlock 0


ll dp[70][70][2];

ll solve(int pos ,int cntSecure,int prev)
{
    if( pos < 0 || cntSecure < 0 || prev < 0 )return 0;

    else if( pos == 0 && cntSecure ==0 )    return 1;

    ll &ret =dp[pos][cntSecure][prev];
    if(ret != -1 )return ret ;
    if(prev == lock)
        ret = solve(pos-1,cntSecure-1,lock) + solve(pos-1,cntSecure,unlock);

    else
        ret = solve(pos-1,cntSecure,lock)   + solve(pos-1,cntSecure,unlock);

    return ret;
}
int main()
{
    int n , s ;

    memset(dp,-1,sizeof dp);

    while(scanf("%d %d",&n,&s)){

        if( n < 0  )break;

        ll ret = solve(n,s,lock);

        printf("%lld\n",ret);
    }
}
