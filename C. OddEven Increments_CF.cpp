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

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int t,n,ar[1005],p,q,r,s,ar1[1005],ar2[1005];
    cin>>t;
    while(t--)
    {
        cin>>n;
        int x=0,y=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(i%2==0){
                ar1[x++]=ar[i]%2;

            }
            if(i%2==1){
                ar2[y++]=ar[i]%2;

            }
        }
        int flg=1;
        for(int i=0;i<x;++i){
            if(ar1[i]!=ar1[i+1] && i+1!=x){
                flg=0;
                break;
            }

        }
         for(int i=0;i<y;++i){
            if(ar2[i]!=ar2[i+1] && i+1!=y){
                flg=0;
                break;
            }
        }

        if(flg==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;



    }
    return 0;
}

