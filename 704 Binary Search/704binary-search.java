class Solution {
    public int search(int[] nums, int target) {
        int n=nums.length;
        
        

        Arrays. sort(nums) ;
        int l=0;
        int h=n-1;
        while(l<=h){
            int mid=l+(h-l) /2;
            if(nums[mid] ==target) {
                return mid;
               } 
            if(target<nums[mid] ) {
               h=mid-1;}
            if (target>nums[mid] ) {
                l=mid+1;}
        }
        return -1;
    }
}