class Solution {
    public int countPairs(List<Integer> nums, int target) {
        Collections.sort(nums); // Sort the list to make it easier to find pairs

        int n = nums.size();
        int count = 0;
        int left = 0, right = n - 1;

        while (left < right) {
            int currentSum = nums.get(left) + nums.get(right);
            
            if (currentSum < target) {
               
                count += right - left;
                left++;
            } else {
               
                right--;
            }
        }

        return count;
    }
}