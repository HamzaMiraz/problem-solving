#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <queue>

#include <iostream>
#include <vector>
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



//    freopen("bfs.in", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.


const int oo = 999;

vector<int>adj[1000];

int par[1000];
int dis[1000];
bool col[1000];

void BFS(int src)
{
    queue<int>Q;

    col[src] = false;
    dis[src] = 0;
    par[src]  = -1;
    Q.push(src);

    while(Q.empty()==false)
    {
        int u = Q.front();
        Q.pop();

        for(int i=0;i<adj[u].size();i++)
        {
            int v = adj[u][i];

            if(col[v]==true)
            {
                col[v] = false;
                dis[v] = 1 + dis[u];
                par[v] = u;
                Q.push(v);

            }
        }
    }
}
int main()
{
    int V, E, src;

    while(cin>>V>>E>>src)
    {
        for(int i=1;i<=V;i++)
        {
            adj[i].clear();
            dis[i] = oo;
            col[i] = true;
            par[i] = -1;
        }

        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        BFS(src);

        for(int i=1;i<=V;i++)
        {
            printf("VertexNo:%3d, Distance:%4d, Parent:%3d, Color:%2d\n", i, dis[i], par[i], col[i]);
        }
    }

    return 0;
}
/*
Sample Input for a Graph:

9 10 1
1 2
1 3
2 3
2 4
3 7
4 5
4 6
5 6
6 7
8 9

*/





