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
const int Size = 10000;

int n,m;
vector<vector<int>>memo,ar;

int go(int p,int q){

    if(p==n-1 && q==m-1 && ar[p][q]==0)
        return 1;
    if(p > n-1 || q > m-1)
        return 0;

    int &rf = memo[p][q];
    if(rf!=-1)
        return rf;

    rf=0;
    if(ar[p][q]==0){
        rf=go(p,q+1)+go(p+1,q);
    }
    return rf;
}

int main()
{
    freopen("lst.in", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.


    while(scanf("%d%d",&n,&m) == 2)
    {
        n = obstacleGrid.size();
        m = obstacleGrid[0].size();
        ar = obstacleGrid;

        memo = vector<vector<int>>(n+1, vector<int>(m+1,-1));
        int a = go(0,0);

        cout<<a<<endl;
    }
    return 0;
}
/**

4 3
-5 4 6
9 4 1
-8 5 1
10 7 3


      ****
 **    **
  ** ******
   ********
      ****
**/
