#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
using namespace std;

//For Debugging
#define debug(a...)          {cout<<" #--> ";dbg,a; cout<<endl;}
#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;
typedef long long LL;


struct debugger
{
    template<typename T> debugger& operator , (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;


///<Return Type> <Function_Name>(<Parameters>)



void marge(int ar[], int l, int r)
{
    int mid = (l + r )/2;

}

void ms(int ar[],int r,int l)
{
    if(l==r)    return;

    int m=(r+l)/2;
    ms(ar,l,m);
    ms(ar,m+1,r);
}


int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.


    return 0;
}
