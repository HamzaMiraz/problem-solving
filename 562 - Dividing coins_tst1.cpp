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
const int oo = 1e8+0.5;

int dp[105][6000];
int isSubarray(int a[],int n,int sum,int x){
    if(sum<=0){
        return x;
    }
    if(n==0){
        if(sum-a[n]>=0){
            x+=a[n];
        }
        return x;
    }
    if(a[n]>sum){
        return dp[n][x]=isSubarray(a,n-1,sum,x);
    }
 
    if(dp[n][x]==-1){
        return dp[n][x]=max(isSubarray(a,n-1,sum,x), isSubarray(a,n-1,sum-a[n],x+a[n]));
    }
    else{
        return dp[n][x];
    }
 
}
int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n,m;
    cin>>n;
    while(n--)
    {
        cin>>m;
        int a[m+10],sum=0;
        for(int i=0;i<m;i++){
            cin>>a[i];
            sum+=a[i];
        }
        memset(dp,-1,sizeof(dp));
        cout<<sum-2*isSubarray(a,m-1,sum/2,0)<<endl;
    }
 
}
