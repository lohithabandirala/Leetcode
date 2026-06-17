class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        
int row=grid.size(),col=grid[0].size();
 int score=(1<<(col-1))*row;
  for(int r=0;r<row;++r)  {
      if(!grid[r][0])
  for(int c=0;c<col;++c)
      grid[r][c]=!grid[r][c];
        }
     for(int c=1;c<col;++c) { int cnt[2]={0,0};
   for(int r=0;r<row;++r)
    cnt[grid[r][c]]++;
score+=max(cnt[0],cnt[1])*(1<<(col-1-c));
        }
        return score;
    }
};