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
    int t,R,C,c,r,l=0;
    cin>>t;
    while(t--)
    {
        cin>>R>>C;
        cout<<"Case #"<<++l<<":"<<endl;
        r=2*R+1;
        c=2*C+1;
        for(int x=1;x<=r;x++){
            for(int y=1;y<=c;y++){
                if(x==1&&y==1 || x==1&&y==2 || x==2&&y==1 || x==2&&y==2)
                   cout<<".";
                else{
                    if(x%2==1 && y%2==1)
                        cout<<"+";
                    if(x%2==1 && y%2==0)
                        cout<<"-";
                    if(x%2==0 && y%2==1)
                        cout<<"|";
                    if(x%2==0 && y%2==0)
                        cout<<".";
                    if(y==c)
                        cout<<endl;
                }
            }
        }
    }
    return 0;
}
