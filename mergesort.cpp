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
void merge(int ar[50],int l,int m,int h)
{
    int stor[50];
    int i,j,k;
    k=0,i=l,j=m+1;

    while(i<=m && j<=h)
    {
        if(ar[i]<ar[j])
        {
            stor[k++]=ar[i++];
        }
        else
        {
            stor[k++]=ar[j++];
        }
    }
    while(i<=m)
    {
        stor[k++]=ar[i++];
    }
    while(j<=h)
    {
        stor[k++]=ar[j++];
    }
    for(i=l,j=0;i<=h;i++,j++)
    {
        ar[i]=stor[j];
    }

}
void mergesort(int ar[50],int l,int h)
{
    if(l<h)
    {
        int m;
        m=(l+h)/2;
        mergesort(ar,l,m);
        mergesort(ar,m+1,h);
        merge(ar,l,m,h);
    }
}



int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n,i,ar[50];

    while(scanf("%d",&n) ==1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }
        mergesort(ar,0,n-1);
        for(i=0;i<n;i++)
        {
            printf("%d ",ar[i]);
        }

    }
    return 0;
}
