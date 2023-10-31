#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
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

int fun(int ar1[],int ar2[],int n1 ,int n2,int ar3[])
{
    int i,j,k;

    i=j=k=0;

    while(i<n1 || j<n2)     ///i==n1
    {
        int const oo = 99999999;
        int v1 = oo;
        if(i<n1)
            v1 = ar1[i];

        int v2 = oo;
        if(j<n2)
            v2 = ar2[j];

        if(v1 < v2)
            ar3[k++]=ar1[i++];
        else
            ar3[k++]=ar2[j++];
    }
}

int Merge(int ar[], int l, int h)
{
    int N = h-l+1;
    // debug(l, h, N);
    int mid = (l+h)/2;
    int i = l;
    int j = mid+1;

    int k=0;
    int stor[N];
    int const oo = 99999999;

    while(i<=mid || j<=h)     ///i==n1
    {

        int v1 = oo;
        if(i<=mid)
            v1 = ar[i];

        int v2 = oo;
        if(j<=h)
            v2 = ar[j];

        if(v1 < v2)
            stor[k++]=ar[i++];
        else
            stor[k++]=ar[j++];
    }

    for(int i=l,j=0;j<N;j++)
    {
        ar[i++] = stor[j];
        // debug(j, stor[j]);
    }
}

int in[1000];

int main()
{
   // freopen("1.in", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n, l;

    /*
5 21
3 5 9 7 8
    */

    while(cin>>n>>l)
    {
        for(int i=0;i<n;i++)
            cin>>in[l+i];

        int h = l+n-1;

        Merge(in, l, h);

        for(int i=0;i<n;i++)    cout<<in[l+i]<<", "; cout<<endl;
    }

    return 0;
}
