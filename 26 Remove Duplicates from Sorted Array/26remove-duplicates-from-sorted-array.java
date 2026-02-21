class Solution {
    public int removeDuplicates(int[] nums) {
       
        
           
           
  



    int distinctCount = 1;
    int n = nums.length;

    for (int i = 1; i < n; ++i) {
        if (nums[i] != nums[i - 1]) {
            nums[distinctCount] = nums[i];
            distinctCount++;
        }
    }

    return distinctCount;

    }
}