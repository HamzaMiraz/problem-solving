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
int stor[50];
print(int stor[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<stor[i]<<' ';
    }
}

void merge(int ar[],int l,int m,int h)
{
    int i,j,k=0;
    i=l;
    j=m+1;

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
void mergesort(int ar[],int l,int h)
{
    if(l>=h)
    return;
    else
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
    int n;

    cin>>n;
    int ar[n];

        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        mergesort(ar,0,n-1);
        print(ar,n);


    return 0;
}
