class Solution {
    public int[] runningSum(int[] nums) {
        int runningSum=0;
         int[] runningSums = new int[nums.length]; // Create an array to store the running sums

    for (int i = 0; i < nums.length; i++) {
        runningSum += nums[i]; 
        runningSums[i] = runningSum; // Sy
    }

    return runningSums;

        
    }
}