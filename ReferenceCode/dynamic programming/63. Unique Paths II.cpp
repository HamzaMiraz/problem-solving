int n,m;
vector<vector<int>>memo,ar;

int go(int p,int q){

    if(p==n-1 && q==m-1 && ar[p][q]==0)
        return 1;
    if(p > n-1 || q > m-1)
        return 0;
    if(ar[p][q]==1)
        return 0;

    int &rf = memo[p][q];
    if(rf>-1)
        return rf;
    rf=0;
    if(ar[p][q]==0){
        rf=go(p,q+1)+go(p+1,q);
    }

    return rf;
}

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        n = obstacleGrid.size();
        m = obstacleGrid[0].size();
        ar = obstacleGrid;
        memo = vector<vector<int>>(n+1, vector<int>(m+1,-1));

        return go(0,0);
    }
};
