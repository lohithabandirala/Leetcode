class Solution {
    public int numIdenticalPairs(int[] nums) {
        int k=0;
        int n=nums.length;
        for(int i=0;i<n;i++){
for(int j=i;j<n;j++){
    if ((nums[i]==nums[j]) && i<j){
        k++;
}
}}
        return k;
    }
}