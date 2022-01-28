#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

//For Debugging
#define debug(a...)          {cout<<__LINE__<<"#--> ";dbg,a; cout<<endl;}
struct debugger
{
    template<typename T> debugger& operator , (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;


typedef long long LL;
const int Size = 100000;
const double EPS = 1e-7; ///1*10^-7

vector<int>V;
    int l;
    int memo[10000];
    int go(int n)
    {
        int &r=memo[n];
        if(n>=l)
            return 0;
        if(r!=-1)
            return r;
        return r=min(go(n+1),go(n+2))+V[n];
    }
    int minCostClimbingStairs(vector<int>& cost){

        memset(memo ,-1, sizeof memo);
        l=cost.size();
        V.clear();
        for(int i=0;i<l;i++)
            V.push_back(cost[i]);
        return min(go(0),go(1));
    }

int main()
{
    vector<int>a = {1,100,1,1,1,100,1,1,100,1};
    cout << minCostClimbingStairs(a);
    return 0;
}
