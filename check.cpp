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

bool fun(char ch[])
{
    int i,j,len,sum,m;

    len = strlen(ch);
    sum=0;
    m=0;

    for(i=0; i<len; i++)
    {
        sum = m*10 + ch[i]-48;

        m = sum%11;
    }

    return m==0;
}

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    int i,j,len,sum;
    char ch[1010];
    ch[0] = 'a';
    ch[1] = 'b';
    ch[2] = 'c';

    deb(strlen(ch));

    return 0;
}
