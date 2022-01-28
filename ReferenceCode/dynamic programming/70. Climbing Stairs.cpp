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

int memo[100];
int N;
int go(int a)
    {
        if(a==N)
            return 1;
        if(a>N)
            return 0;
        int &res = memo[a];
        if(res !=-1)
            return res;
        return res=go(a+1)+go(a+2);
    }
    int climbStairs(int n) {
        memset(memo , -1 , sizeof memo);
        N=n;
        return go(0);
    }

int main(){

    int n,m;
    while(cin>>n){
        cout<<"result = "<<climbStairs(n)<<endl;
    }
    return 0;
}
