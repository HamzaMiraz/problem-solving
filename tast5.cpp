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
//    freopen("in.in", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n,i;
    char c[50];
    while(scanf("%s",c) == 1)
{
        n=strlen(c);

        for(i=n-1;i>=0;i--)
        {

            printf("%c",c[i]);

        }
        printf(" ");

    }

    return 0;
}
