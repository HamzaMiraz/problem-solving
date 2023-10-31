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
const int oo = 1e8+0.5;

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
       int t,r,g,b,R,G,B;
    char str[10];
    cin>>t;
    while(t--)
    {
        scanf(" %[^\n]",str);
        for(int i =0;i<6;i++)
        {
            if(str[i]=='R')
                R=i;
            if(str[i]=='r')
                r=i;
            if(str[i]=='G')
                G=i;
            if(str[i]=='g')
                g=i;
            if(str[i]=='B')
                B=i;
            if(str[i]=='b')
                b=i;
        }
        if(R>r&&G>g&&B>b)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
