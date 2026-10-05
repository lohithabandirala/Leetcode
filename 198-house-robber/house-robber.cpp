class Solution {
public:
    int rob(vector<int>& nums) {
      
        int ans=0,n=nums.size();
          vector<int>dp1(n,-1);
    
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }
        ans=max(ans,m(nums,0,n-1,dp1));
  
        return ans;
    }

    int m(vector<int>&a,int i, int j,vector<int>&dp ){

     if(i==j){
        return a[i];

     }
     if(i>j){return 0;}
     if(dp[j]!=-1){return dp[j];}
     int p=a[j]+m(a,i,j-2,dp);
     int np=m(a,i,j-1,dp);
     return dp[j]= max(p,np);
    }
};