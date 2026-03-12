class Solution {
    public int sumOfUnique(int[] nums) {
              int ans = 0;
        int[] hashArray = new int[101];
        for (int i : nums) {
            hashArray[i]++;
        }
        for (int i=0; i<101; i++) {
            if (hashArray[i]==1) ans+=i;
        }
        return ans;
    }
}