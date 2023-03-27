class Solution {
    int dp[205][205];
    int n , m ;
    int oo=1e9;
    bool valid(int i,int j){
        return (i>=0&&i<n&&j>=0&&j<m);
    }
    int solve(int i,int j,vector<vector<int>>& grid){
        if(i==n-1&&j==m-1)
            return grid[i][j];
        
        if(!valid(i,j))
            return oo;
        
        int &ret=dp[i][j];
        if(ret!=-1)
            return dp[i][j];
        int ch1=grid[i][j]+solve(i+1,j,grid);
        int ch2=grid[i][j]+solve(i,j+1,grid);
        
        return ret=min(ch1,ch2);
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        memset(dp,-1,sizeof dp);
        return solve(0,0,grid);
    }
};