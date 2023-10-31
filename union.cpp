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

union tst
{
    int x,y;
};

int main()
{
    tst t1;
    t1.y=120;
    cout<<"t1.x="<<t1.x<<endl;
    cout<<"t1.y="<<t1.y<<endl;

    tst t2;
    t2.x=1324;
    cout<<"t2.x="<<t2.x<<endl;
    cout<<"t2.y="<<t2.y<<endl;


    return 0;
}
