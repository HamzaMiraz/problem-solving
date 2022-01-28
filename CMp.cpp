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
const double EPS = 1e-7; ///1*10^-7

struct a
{
    int val;
    char key[100];///string key;
};
a ar[100];
bool cmp(a n, a m)
{
    if(n.val!=m.val)
        return n.val>m.val;
    return strcmp(n.key,m.key)<0;///n.key<m.key;[ if we use string key]
}
int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    for(int i=0;i<3;i++)
    {
        scanf("%d",&ar[i].val);
        scanf(" %[^\n]",ar[i].key);
    }
    sort(ar,ar+3,cmp);
    for(int i=0;i<3;i++)
        printf("%d %s\n",ar[i].val,ar[i].key);
    return 0;
}
