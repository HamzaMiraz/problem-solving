//#include<bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <set>
#include <bitset>
#include <algorithm>
#include <list>
#include <utility>
#include <functional>
#include <deque>
#include <numeric>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <assert.h>

#include <unordered_set>
#include <unordered_map>

using namespace std;

#include<cmath>
#include<math.h>

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

//For Debugging
#define debug(a...)          {cout<<__LINE__<<" #--> ";dbg,a; cout<<endl;}
struct debugger
{
    template<typename T> debugger& operator , (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;



#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;
#define GCD(a,b)  __gcd(a,b)
#define LCM(a,b)  (a*b)/__gcd(a,b)
typedef long long LL;
const double PI = acos(-1);
const double EPS = 1e-7; ///1*10^-7
const int oo = 1e8+0.5;



int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    string s1[1010],s2[1010],s3[1010];
    int t,n;
    map<string,int>mp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>s1[i];
            ++mp[s1[i]];
        }
        for(int i=0;i<n;i++){
            cin>>s2[i];
            ++mp[s2[i]];
        }
        for(int i=0;i<n;i++){
            cin>>s3[i];
            ++mp[s3[i]];
        }
        LL a1=n*3,a2=n*3,a3=n*3;
        LL arr[4];
        for(int i=0;i<n;i++){
            if(mp[s1[i]]==2)a1-=2;
            if(mp[s1[i]]==3)a1-=3;
            if(mp[s2[i]]==2)a2-=2;
            if(mp[s2[i]]==3)a2-=3;
            if(mp[s3[i]]==2)a3-=2;
            if(mp[s3[i]]==3)a3-=3;
        }
        cout<<a1<<" "<<a2<<" "<<a3<<endl;
        mp.clear();

    }
    return 0;
}
