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
/*
    if(st.find(val)!=st.end())
    {

    }
*/

typedef long long LL;
const double PI = acos(-1);
const double EPS = 1e-7; ///1*10^-7
const int oo = 99999999;

#define MAX_COINS 20
#define MAX_Weight 10000

int memo[7][7500],val[5]={50,25,10,5,1},n;
int way(int i,int W)
    {
        if(W>n)return 0;
        if(i==5){
            if(W==n)return 1;
            else return 0;
        }
        int &rf=memo[i][W];
        if(rf!=-1)return rf;

        int p=way(i,W+val[i]);
        int q=way(i+1,W);
        return rf=p+q;
    }
int main()
{
//    freopen("dp1.in","r",stdin);
//    freopen("out.txt","w",stdout);

    while(cin>>n)///NC = number of coin , n = reach Destination
    {
        memset(memo, -1, sizeof memo);

        cout<<way(0,0)<<endl;
    }

    return 0;
}

