class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int c=0;
      for(int i=0;i<nums.size();i++){
          int p=1;
          for(int j=i;j<nums.size();j++){
              p*=nums[j];
              if(p<k){
                  c++;
              }
              else{
                  break;
              }
          }
          
      }
        return c;
    }
};