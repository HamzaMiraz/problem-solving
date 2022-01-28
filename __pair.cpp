#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <vector>
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



int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    pair<int,int>p;

    p.first = 2;
    p.second = 4;

    debug(p.first, p.second);

    p = make_pair(-1,3);
    debug(p.first, p.second);

    p = {6, 7};
    debug(p.first, p.second);


    pair<int,string>pis;
    pair<string, int>psi;

    vector<pair<string, int>> v;

    v.push_back({"maira", 8});
    v.push_back({"hamza", 7});
    v.push_back({"naim", 10});
    v.push_back({"naim", 5});


    for(auto itm: v)        ///for each loop.
        cout<<itm.first<<" "<<itm.second<<endl;

    sort(v.begin(), v.end());
    puts("\nSorted: ++++++++++++++++++++++++++\n");
    for(auto itm: v)        ///for each loop.
        cout<<itm.first<<" "<<itm.second<<endl;

    return 0;
}
