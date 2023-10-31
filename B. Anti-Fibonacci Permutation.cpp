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
        vector<int>v;
        for(int i=n;i>=1;i--)
            v.push_back(i);
        if(n==3)
        {
            cout<<"1 3 2"<<endl;
            cout<<"3 1 2"<<endl;
            cout<<"3 2 1"<<endl;
        }
        else if(n%2==0)
        {
            for(int i=0;i<v.size();i++)
                cout<<v[i]<<" "<<endl;
                for(int i=0;i<n-1;i++)
                {
                    swap(v[i],v[i+1]);
                    for(int j=0;j<v.size();j++)
                        cout<<v[j]<<" "<<endl;

                }
        }
        else
        {
            for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
                cout<<endl;
                for(int i=0;i<v.size()-2;i++)
                    cout<<v[i]<<" ";
                cout<<v[n-1]<<" "<<v[n-2]<<endl;
                for(int i=1;i<n-1;i++)
                {
                    swap(v[i],v[i+1]);
                    for(int j=0;j<v.size();j++)
                        cout<<v[j]<<" ";
                    cout<<endl;
                }
        }
    }
    return 0;
}
