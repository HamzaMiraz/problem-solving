int n,m;
vector<vector<int>>memo,ar;

int go(int p,int q){

    if(p >= n || q >= m)return 0;

    int &rf = memo[p][q];

    if(rf!=-1)return rf;

    int a = go(p+1,q)+ar[p][q];
    int b = go(p,q+1)+ar[p][q];

    rf=min(a,b);
    return rf;

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        n=grid.size()-1;
        m=grid[0].size()-1;
        ar=grid;
        memo = vector<vector<int>>(n, vector<int>(m,-1));

        return go(0,0);
    }
};
