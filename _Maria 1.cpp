
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/** ---- Paknami Starts ----*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

//For Debugging
#define debug(a...)          {cout<<__LINE__<<"#--> ";dbg,a; cout<<endl;}
struct debugger
{
    template<typename T> debugger& operator , (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;
/** ---- Paknami Ends ----*/

typedef long long LL;
const int SZ = 100;
const double EPS = 1e-7; ///1*10^-7


 int main()
{

    freopen("in.txt", "r", stdin);
///    freopen("out.txt","w",stdout);

    char str[SZ];
    while (1==scanf("%s",str) && strcmp(str,"0"))
    {
        string a=str;
//        debug(a);
        string b=add(a, b);
        printf("%s\n",b.c_str());
//        cout<<a<<endl ;

    }
    return 0;
}
