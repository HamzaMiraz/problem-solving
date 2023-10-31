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
#define sqr(a)      ((a)*(a))
typedef long long LL;
const double PI = acos(-1);
const double EPS = 1e-7; ///1*10^-7
const int oo = 2e9+10;



int w,h,tot=0;
int dis[(1<<10)][21][21];

int bfs(int i,int j,char mat[][21])
{
	int maskfrom = 0,maskto=0;
	dis[maskfrom][i][j] = 0;
	queue<pair<pair<int,int>,int>> q;
	q.push(make_pair(make_pair(i,j),maskfrom));
	while(!q.empty())
	{
		pair<int,int> p = q.front().first;
		maskfrom = q.front().second;
		int x= p.first;
		int y = p.second;
		q.pop();
		vector<pair<int,int>> v;

		v.push_back(make_pair(x-1,y));
		v.push_back(make_pair(x,y-1));
		v.push_back(make_pair(x+1,y));
		v.push_back(make_pair(x,y+1));

		for(auto pp : v)
		{
			int xx = pp.first;
			int yy = pp.second;
			if(xx>=1 && xx<=h && yy>=1 && yy<=w && mat[xx][yy]!='x')
			{
			    maskto = maskfrom;
				if(mat[xx][yy]>='0' && mat[xx][yy]<='9')
					maskto |= (1<<(mat[xx][yy]-'0'));

				if(dis[maskto][xx][yy]>dis[maskfrom][x][y]+1)
				{
					dis[maskto][xx][yy]=dis[maskfrom][x][y]+1;
					q.push(make_pair(make_pair(xx,yy),maskto));
				}
			}
		}
	}
	int mn = INT_MAX;
	for(int i=1;i<=h;i++)
	{
		for(int j=1;j<=w;j++)
			mn = min(mn,dis[(1<<tot)-1][i][j]);
	}
	if(mn<oo)
		return mn;
	else
		return -1;
}

int main()
{
    freopen("in.txt","r",stdin) ;
	while(1)
	{
		tot = 0;
		cin>>w>>h;
		if(w==0 && h==0)
			break;
		char mat[21][21];
		for(int i=1;i<=h;i++)
		{
			for(int j=1;j<=w;j++)
				cin>>mat[i][j];
		}
		int s,e;
		for(int i=1;i<=h;i++)
		{
			for(int j=1;j<=w;j++)
			{
				if(mat[i][j]=='*')
				{
					mat[i][j] = '0' + tot;
					tot++;
				}
				if(mat[i][j]=='o')
				{
					s = i;
					e = j;
				}
			}
		}
		for(int mask=0;mask<(1<<10);mask++)
		{
			for(int j=0;j<21;j++)
			{
				for(int k=0;k<21;k++)
					dis[mask][j][k] = oo;
			}
		}
		printf("%d\n",bfs(s,e,mat));
	}

	return 0;
}
