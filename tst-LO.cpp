#include<bits/stdc++.h>
using namespace std;


const int SIZE=20005;

vector<int>graph[SIZE];
int vis[SIZE];
int dis[SIZE];

map<int,int>mp;
vector<int>LIST[SIZE];
void BFS(int s,int row)
{
    queue<int>Q;
    vis[s]=1;
    Q.push(s);
    while(!Q.empty())
    {
        int u=Q.front();
        LIST[row].push_back(u);
        Q.pop();

        for(int i=0;i<graph[u].size();i++)
        {
            int v=graph[u][i];

            if(vis[v] == 1)
                continue;

            vis[v]=1;
            Q.push(v);
        }
    }
}

int main()
{
    int E,i,j,u,v,ts;
    scanf("%d",&ts);
    for(int t=1;t<=ts;t++)
    {
        scanf("%d",&E);
        for(i=0;i<20005;i++)
        {
            graph[i].clear();
            vis[i]=0;
            LIST[i].clear();
        }

        for(i=0;i<E;i++)
        {
            scanf("%d%d",&u,&v);
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        int r=0;
        for(int i=1;i<=20005;i++)
        {
            if(vis[i]==0)
            {
                BFS(i,r);
                ++r;
            }
        }
        int sum=0;
        for(int i=0;i<=r;i++)
        {
            int MX=0;
            for(int j=0;j<LIST[i].size();j++)
            {
                ++mp[LIST[i][j]];
                MX=max(MX,mp[LIST[i][j]]);
            }
            mp.clear();
            sum+=MX;
        }
        printf("Case %d: %d\n",t,sum);
    }
    printf("\n");

    return 0;
}

/**
8 6
1 2
1 3
3 4
4 5
6 7
7 8
*/


