class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n=nums.size(),s2=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i+=2){
        s2+=min(nums[i],nums[i+1]);
       } 
       return s2;
    }
};