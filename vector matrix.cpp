#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <vector>
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



void printVector(vector<int>&v, string s="")
{
    cout<<s<<" # Size: "<<v.size()<<" => {";

    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<"}"<<endl;
}
#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;
typedef long long LL;
const double PI = acos(-1);

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    vector<int>v[10];
    int m,n;
    m=n=2;
    int a;

    for(int i=1; i<=m; i++){
        for(int j=0; j<n;j++)
        {
            scanf("%d",&a);
            v[i].push_back(a);
        }
    }
    printVector(v,"first");

    return 0;
}
