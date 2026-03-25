class Solution {
    public int returnToBoundaryCount(int[] nums) {int n=nums.length ;
                                                  int p=0,c=0;
        for(int i=0;i<n;i++){
        if(nums[i] >0){
            p+=nums[i];
        }
             else if(nums[i]<0){
         p-=Math.abs(nums[i]); }
            if(p==0){
                 c++;} 
                    } 
         return c;
    }
}