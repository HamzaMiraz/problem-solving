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

long long ar[2][20000+5];
int vis[2][20000+5],m,sum;

int fun(int i ,int j){
    if(i>2 ||j>m)return 0;

    if(i=1 && vis[i+1][j-1]!=0){
        int a =min(ar[i+1][j],ar[i][j+1]);
        sum=max(sum,a)+1;
    }
    else if(i=1){
        if(j<m){
            sum=max(sum,ar[i][j+1])+1;
        }
        else
            sum=ar[i+1][j]+1;
    }
    else if(i=2 && vis[i-1][j-1]!=0){
        int a =min(ar[i-1][j],ar[i][j+1]);
        sum=max(sum,a)+1;
    }
    else if(i=2){
        if(j<m){
            sum=max(sum,ar[i][j+1])+1;
        }
        else
            sum=ar[i-1][j]+1;
    }
    return sum;
}
int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    while(scanf("%d",&m) ==1)
    {
        memset(vis,0,sizeof vis);
        vis[1][1]=1;
        for(int i=1;i<=2;i++)
            for(int j=1;j<=m;j++)
                cin>>ar[i][j];
        sum=0;

        cout<<fun(1,1)<<endl;

    }
    return 0;
}
