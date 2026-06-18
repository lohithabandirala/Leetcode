class Solution {
public:
 
    int backtrack(int r,int c,int m,int n,vector<vector<int>>& grid) {
        if(r>=m || r<0 || c>=n || c<0) return 0;
        if(grid[r][c]==0) 
            return 0; 
        int count=grid[r][c];
        grid[r][c]=0;
        int ans = count+ max(max(backtrack(r-1,c,m,n,grid),backtrack(r,c-1,m,n,grid)),max(backtrack(r+1,c,m,n,grid),backtrack(r,c+1,m,n,grid ))); 
        grid[r][c] = count; 
        return ans;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int ans=0;
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(grid[i][j]==0) continue; //never visit a place with value 0
                ans = max(ans,backtrack(i,j,m,n,grid));
            }
        }
        return ans;
    }
};