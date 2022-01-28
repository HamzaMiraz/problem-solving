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

    while(i<n1 || j<n2)
    {
        if(ar1[i]<ar2[j])
            ar3[k++]=ar1[i++];
        else
            ar3[k++]=ar2[j++];
    }

}

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n1,n2,ar1[50],ar2[50],ar3[50],k;
    while(scanf("%d%d",&n1,&n2) ==2)
    {
        for(int i=0;i<n1;i++)
        {
            scanf("%d",&ar1[i]);
        }
        for(int j=0;j<n2;j++)
        {
            scanf("%d",&ar2[j]);
        }
        fun(ar1,ar2,n1,n2,ar3);

        int n=n1+n2;
        for(k=0;k<n;k++)
        {
            printf("%d ",ar3[k]);
        }

    }
    return 0;
}
