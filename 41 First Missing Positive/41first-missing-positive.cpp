class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            
        
        if(n>=1&&n<=nums.size()){
            int p=n-1;
            if(n!=nums[p])
            {swap(nums[i],nums[p]);
            i--;
            }
        }
    }
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=i+1){
            return i+1;
        }
    }
    return nums.size()+1;
    
    }
};