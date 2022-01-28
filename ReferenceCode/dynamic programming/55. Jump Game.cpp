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
        int maxdistance = 0;
        for(int i=0;i<V.size();i++)
        {
            if(maxdistance < i)
                return false;
            maxdistance = max(maxdistance, i+V[i]);
        }
        return true;
    }
    bool canJump(vector<int>& nums) {

        memset(memo,-1,sizeof(memo));

        l=nums.size();
        for(int i=0; i<l;i++)
            V.push_back(nums[i]);

        return go(0);
    }

int main()
{
    vector<int>a = {3,2,1,0,4};
    cout << canJump(a);
    return 0;
}
