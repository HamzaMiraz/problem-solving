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


// Recursive Function
int minCoins(int coins[], int m, int N)
{
  // base case
  if (N == 0)
    return 0;

  // Initialize result
  int res = INT_MAX;

  // Try every coin that has smaller value than m
  for (int i=0; i<m; i++)
  {
    if (coins[i] <= N)
    {
      int sub_res = 1 + minCoins(coins, m, N-coins[i]);
      // see if result can minimized
      if (sub_res < res)
        res = sub_res;
    }
  }
  return res;
}

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
int n,k,coins[50];
    while(scanf("%d%d",&n,&k) ==2)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&coins[i]);
        }
     cout << minCoins(coins,n,k);
    }
    return 0;
}
