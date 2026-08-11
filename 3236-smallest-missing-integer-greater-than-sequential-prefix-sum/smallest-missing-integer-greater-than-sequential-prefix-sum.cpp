class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int s=nums[0];
          unordered_set<int> seen(nums.begin(), nums.end());
       for(int i=1;i<nums.size();i++){
        if((nums[i]-nums[i-1])!=1){
            break;
        }
        else{
            s+=nums[i];
        }
       } 
      
        while (seen.count(s))
            s++;

        return s;
    }
};