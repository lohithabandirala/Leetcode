class Solution {
    public int maxFrequencyElements(int[] nums) {
        int[] freq = new int[101];

        int maxF = 0;

        for (int x : nums) {

            freq[x]++;

            maxF = Math.max(maxF, freq[x]);

        }

        int ans = 0;

        for (int f : freq) {

            if (f == maxF) {

                ans += f;

            }

        }

        return ans;
    }
}