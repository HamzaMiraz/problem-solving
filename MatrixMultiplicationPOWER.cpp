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

int sum[10][10];
int A[10][10];
int B[10][10];
int n;
void power(int p)
{
    for(int t=0;t<p-1;t++)
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                int s = 0;
                for(int k=0;k<n;k++)
                    s+=(sum[i][k]*A[k][j]);
                B[i][j]=s;
            }

        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                sum[i][j]=B[i][j];
    }
}

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    int p;
    while(scanf("%d%d",&n,&p)==2)
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                scanf("%d",&A[i][j]), sum[i][j]=A[i][j];
        power(p);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                printf("%d ", sum[i][j]);
            printf("\n");
        }
    }
    return 0;
}
