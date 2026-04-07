class Solution {
    public int[] getSumAbsoluteDifferences(int[] nums) { 
                                            int n=nums.length;
int result[] =new int[n] ;
        for(int i=0;i<n;i++) {
   int totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }
        

        int leftSum = 0;
        for(i = 0; i < n; i++) {
result[i] = i * nums[i] - leftSum + (totalSum - leftSum - (n - i) * nums[i]);
            leftSum += nums[i];
        }
        }                                  return result;
                 
    }
} 