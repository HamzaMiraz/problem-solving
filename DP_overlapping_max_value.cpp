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
int val[20];
int n;
int go(int sum){

     for(int i=0;i<n;i++){
        go(sum)=max(go(sum+val[i+1]),go(sum+val[i+2]));
    }
    return sum;
}

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.


    while(scanf("%d",&n) ==1)
    {
        for(int i=0;i<n;i++){
            scanf("%d",&val[i]);
        }
    int ans= go(0);
    printf("%d",ans);
    }
    return 0;
}
