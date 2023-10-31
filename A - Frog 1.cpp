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
const int oo = 2e9+10;
int memo[100010][2];
int h[100010],n;

int go(int p,int k)
{
    if(p==n)
    {
        if(k==0)
            return abs(h[p]-h[p-1]);
        return abs(h[p]-h[p-2]);
    }
    if(p>n)
        return oo;

    int &rf=memo[p][k];
    if(rf!=-1)
        return rf;

    //rf = oo;
    if(p==1)
        rf = min(go(p+1,0), go(p+2,1));
    else if(k==0)
        rf = abs(h[p]-h[p-1]) + min(go(p+1,0), go(p+2,1));
    else
        rf = abs(h[p]-h[p-2]) + min(go(p+1,0), go(p+2,1));

    return rf;
}

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    while(scanf("%d",&n) ==1)
    {
        memset(memo,-1,sizeof memo);

        for(int i=1;i<=n;i++)
            scanf("%d",&h[i]);

        printf("%d\n",go(1,0));
    }
    return 0;
}

