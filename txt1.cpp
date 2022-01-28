#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<queue>
#include<vector>
#include<map>
using namespace std;
typedef long long LL;
const int INF = 1e9+7;
const int MAXN = 255;
int n;
double dp[MAXN], a[MAXN];
///DP [from I to end] = expectation

double DFS(int cur)
{
    if(dp[cur] != -1)
        return dp[cur];
    int cnt = min(n-cur, 6);///How many positions can you move forward on the current grid?
    dp[cur] = 0;
    for(int i=cur+1; i<=cur+cnt; i++)
        dp[cur] += 1.0/cnt * DFS(i);
    dp[cur] += a[cur];
    return dp[cur];
}

int main()
{
    int T, cas = 1;
    scanf("%d", &T);
    while(T --)
    {
        scanf("%d", &n);
        for(int i=1; i<=n; i++)
        {
            scanf("%lf", &a[i]);
            dp[i] = -1;
        }
        dp[n] = a[n];
        printf("Case %d: %.6lf\n", cas++, DFS(1));
    }

    return 0;
}
