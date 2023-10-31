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

union tst1
{
    int x,y;
};

union tst2
{
    int x;double y;/// size of tst2 = sizeof(double),becouse doubles size > integer size
};

union tst3
{
    char x[20];long long y;/// size of tst3 = sizeof(char x[20]),becouse char x[20] size > long long size
};

int main()
{
    cout<<"sizeof(tst1) ="<<sizeof(tst1)<<endl;
    cout<<"sizeof(tst2) ="<<sizeof(tst2)<<endl;
    cout<<"sizeof(tst3) ="<<sizeof(tst3)<<endl;

    return 0;
}
