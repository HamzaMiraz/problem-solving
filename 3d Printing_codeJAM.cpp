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
//    freopen("f1.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    long long t,c[10],m[10],y[10],k[10],n[10];
    cin>>t;
    int cs=0;
    while(t--)
    {
        long long C=oo,M=oo,Y=oo,K=oo;
        for(int i=0;i<3;i++){
            cin>>c[i]>>m[i]>>y[i]>>k[i];
            if(c[i]<C){
                C=c[i];
                n[0]=c[i];
            }
            if(m[i]<M){
                M=m[i];
                n[1]=m[i];
            }
            if(y[i]<Y){
                Y=y[i];
                n[2]=y[i];
            }
            if(k[i]<K){
                K=k[i];
                n[3]=k[i];
            }
        }
        int sum=C+M+Y+K;

        cout<<"Case #"<<++cs<<":";
        if(sum<1000000)
            cout<<" IMPOSSIBLE";
        else{
            int s=0,q=0;
            for(int i=0;i<=3;i++){
                s+=n[i];
                if(s<1000000){
                    cout<<" "<<n[i];
                }
                else if(s==1000000){
                    cout<<" "<<n[i];
                }
                else{
                    int a=s-1000000;
                    n[i]-=a;
                    cout<<" "<<n[i];
                    if(q<3){
                        for(int i=q;i<3;i++)
                        cout<<" 0";
                    }
                    break;
                }
                ++q;
            }

        }

        cout<<endl;
    }
    return 0;
}
