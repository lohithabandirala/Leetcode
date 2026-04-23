class Solution {
    public int numSubarraysWithSum(int[] nums, int goal) {
        int count = 0;

        int left1 = 0, left2 = 0;

        int sum1 = 0, sum2 = 0;

        

        for (int right = 0; right < nums.length; right++) {

            sum1 += nums[right];

            sum2 += nums[right];

            

            if (sum1 > goal) {

                while (left1 <= right && sum1 > goal) {

                    sum1 -= nums[left1];

                    left1++;

                }

            }

            

            if (sum2 >= goal) {

                while (left2 <= right && sum2 >= goal) {

                    sum2 -= nums[left2];

                    left2++;

                }

            }count += left2 - left1;

        }

        

        return count;
    }
}