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

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+3];
        for(int i=0;i<n;i++)cin>>a[i];
        int ans = 0;
        for (int i = 1; i<n-1; ++i){
            if (a[i]>a[i-1] && a[i]>a[i+1]) {
                if (i+2<n) {
                    a[i+1] = max(a[i],a[i+2]);
                } else {
                    a[i+1] = a[i];
                }
                ans++;
            }
        }
        cout<<ans<<endl;
        for(int i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<endl;
    }
 return 0;
}
