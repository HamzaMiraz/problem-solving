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

int main()
{
//    freopen("ms.in","r",stdin);
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int i,j,m,n,s=0,k;
    int v[105][105];
    char p[105][105],ch;

    while(scanf("%d%d",&n,&m)== 2)
    {
        if(n==0 || m==0)break;
        //if(s!=1)
          // printf("\n");
        for(i=0;i<n;i++)
        {
            scanf("%s",p[i]);

        }
        memset(v,0,sizeof(v));
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(p[i][j]=='*')
                {
                    //int r, c;
                  //  r = i-1; c = j+1;
                 //   if(0<=r&& r <n && 0<=c && c<m)

                    if(i-1>=0 && j-1>=0)
                        v[i-1][j-1]+=1;
                    if(i-1>=0)
                        v[i-1][j]+=1;
                    if(i-1>=0 && j+1<m)
                        v[i-1][j+1]+=1;
                    if(j+1<m)
                        v[i][j+1]+=1;
                    if(i+1<n && j+1<m)
                        v[i+1][j+1]+=1;
                    if(i+1<n)
                        v[i+1][j]+=1;
                    if(i+1<n && j-1>=0)
                        v[i+1][j-1]+=1;
                    if(j-1>=0)
                        v[i][j-1]+=1;
                }
            }
        }
        ++s;
        printf("Field #%d:\n",s);

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(p[i][j]=='*')
                    printf("*");
                else
                    printf("%d",v[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
