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
    int t,l,r,k;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>k;
        int x=(r-l+1);
        int ans=x/2;
        if(l%2==1&&r%2==1)ans++;
        if(l==r){
            if(l>1)cout<<"YES"<<endl;
            else cout<<"NO\n";
        }
        else if(k>=ans)cout<<"YES\n";
        else cout<<"NO\n";



    }
    return 0;
}
