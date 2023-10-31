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
    int n,t,a[1000],b[1000],k,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i =0;i<n;i++)
            cin>>a[i];
        for(int i =0;i<n;i++)
            cin>>b[i];

        vector<pair<int,int>>v;

        for(int i=0;i<n;i++)
            v.push_back({a[i],b[i]});

        sort(v.begin(),v.end());

        ans=k;
        for(int i=0;i<n;i++){
           int x=v[i].first;
           int y=v[i].second;
           if(ans>=x)ans+=y;
           else break;
        }
        cout<<ans<<endl;
    }
    return 0;
}
