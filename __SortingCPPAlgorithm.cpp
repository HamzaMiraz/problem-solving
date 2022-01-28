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


#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;
typedef long long LL;
const double PI = acos(-1);

bool com(int a, int b){
    return a>b;
}

int main()
{
//    freopen("0.in", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    int ar[20];
    int n;

    while(cin>>n)
    {
        for(int i=0;i<n;i++)
            cin>>ar[i];

//        sort(&ar[0], &ar[n]);/// low to up
        sort(ar, ar + n, com);///up tp low
        for(int i=0;i<n;i++)    cout<<ar[i]<<", ";  cout<<endl;
    }

    return 0;
}
