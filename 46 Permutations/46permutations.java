
class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> ds = new ArrayList<>();
        int n = nums.length;
        func( n, nums, ans, ds);
        return ans;
    }

    public void func(int n, int[] nums, List<List<Integer>> ans, List<Integer> ds) {
        if (ds.size() == n) {
            ans.add(new ArrayList<>(ds));
            return;
        }
for (int ind=0;ind<n;ind++){
    if(ds. contains(nums[ind])) 
       continue ;
        ds.add(nums[ind]);
        func(n, nums, ans, ds);
        ds.remove(ds.size() - 1);
        
    }
    }
}
