
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <queue>
#include <map>
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


typedef long long LL;
const int Size = 100000;
const double EPS = 1e-7; ///1*10^-7

    vector<int>V;
    int l;
    int memo[100000];
    int go(int n)
    {
        int &r=memo[n];
        if(n>=l-1)
            return 0;
        if(r!=-1)
            return r;
        int J=INT_MAX-1;
        for(int i=n;i<n+V[n]; i++)
            J=min(J,go(i+1)+1);

        return J;
    }
    int jump(vector<int>& nums) {

        memset(memo,-1,sizeof(memo));
        l=nums.size();

        for(int i=0; i<l;i++)
            V.push_back(nums[i]);

        return go(0);
    }

int main()
{
    vector<int>a = {2,3,1,1,5,1,2,1,31,1,1,1,1,1,1,1,1,1,1,1};
    cout << jump(a);
    return 0;
}
