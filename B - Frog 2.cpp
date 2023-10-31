//#include<bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <set>
#include <bitset>
#include <algorithm>
#include <list>
#include <utility>
#include <functional>
#include <deque>
#include <numeric>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <assert.h>

#include <unordered_set>
#include <unordered_map>

using namespace std;

#include<cmath>
#include<math.h>

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

//For Debugging
#define debug(a...)          {cout<<__LINE__<<" #--> ";dbg,a; cout<<endl;}
struct debugger
{
    template<typename T> debugger& operator , (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;



#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;
#define GCD(a,b)  __gcd(a,b)
#define LCM(a,b)  (a*b)/__gcd(a,b)
#define sqr(a)      ((a)*(a))
typedef long long LL;
const double PI = acos(-1);
const double EPS = 1e-7; ///1*10^-7
const int oo = 1e8+0.5;
int memo[100005];
int h[100005],n,k;
int go(int p)
{
    if(p==n)return 0;
    if(p>n)return oo;

    int &rf=memo[p];
    if(rf!=-1)return rf;
    rf=oo;
    for(int i=1;i<=k;++i)
    {
        rf=min(rf,go(p+i)+abs(h[p]-h[p+i]));
    }
    return rf;
}

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    while(scanf("%d%d",&n,&k) ==2)
    {
        memset(memo,-1,sizeof memo);
        for(int i=1;i<=n;i++)
            scanf("%d",&h[i]);

        printf("%d\n",go(1));
    }
    return 0;
}

