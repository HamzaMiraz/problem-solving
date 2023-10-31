#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
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
int ar[100005];
int main()
{
//   freopen("Mock2022.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        map<int,int>frq;
        int n,mx=0,MX=0,m;
        cin>>n;
        for(int j=0;j<n;j++)
            cin>>ar[j];
        sort(ar,ar+n);
        reverse(ar,ar+n);
        for(int j=0;j<n;j++){
            ++frq[ar[j]];
            if(frq[ar[j]]>MX){
                MX=frq[ar[j]];
                m=ar[j];
            }
            if(ar[j]>mx)
                mx=ar[j];
        }
        if(MX>1){
            cout<<"Case "<<i<<": "<<m<<" "<<MX<<endl;
        }
        else
            cout<<"Case "<<i<<": "<<mx<<" 1"<<endl;
        frq.clear();

    }
    return 0;
}
