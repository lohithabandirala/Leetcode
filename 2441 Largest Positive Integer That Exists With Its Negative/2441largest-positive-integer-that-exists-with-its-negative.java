class Solution {
    public int findMaxK(int[] nums) {
      Arrays.sort(nums);
        int r=nums.length-1,l=0;
        while(l<r&&nums[l]<0){
         if(-nums[l]==nums[r]){
                return nums[r];
                }
      else if(-nums[l]>nums[r]){
          l++;
                 }
              else r--;
            }
        return -1;      
 
            
    }
}