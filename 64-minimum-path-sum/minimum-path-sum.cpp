class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int up,lf;
        vector<vector<int>>dp(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0&&j==0){
                    dp[i][j]=grid[i][j];
                }
                else{
                    up=INT_MAX;
                    lf=INT_MAX;
                    if(i>0){
                     up=dp[i-1][j];
                }
                if(j>0){
                     lf=dp[i][j-1];
                }
                 dp[i][j]= grid[i][j]+min(up,lf);
                }

            }
        }
        return dp[m-1][n-1];
       
    }
};