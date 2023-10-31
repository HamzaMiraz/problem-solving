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
int ar[1000005],arr[1000005];

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>ar[i];
            arr[i]=ar[i];
        }
        int c=0,u=INT_MAX,ts;
        ts=n;
        while(ts--){
            if(ar[1]>=ar[n]){
                u=ar[0];
                --n;
                if(ar[1]<=u)
                    ++c;
                for(int j=1;j<=n;j++){
                    ar[j]=arr[j+1];
                }
                for(int i=1;i<=n;i++){
                    arr[i]=ar[i];
                }
            }
            if(ar[1]>ar[n]){
                u=ar[n];
                --n;
                if(ar[n]>=u)
                    ++c;
            }
            if(n==1)++c;
        }
        cout<<c<<endl;

    }
    return 0;
}

