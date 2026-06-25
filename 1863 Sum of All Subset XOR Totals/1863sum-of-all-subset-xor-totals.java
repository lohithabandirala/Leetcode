class Solution {
    public int subsetXORSum(int[] nums) {
        List<List<Integer>>ans=new ArrayList<>();
        List<Integer>ds=new ArrayList<>();
        int ind=0,n=nums.length;
        int[] sum={0};
        func(ind,sum,nums,n ,ans, ds);
        return sum[0];
    }
    public void func(int ind,int[] sum, int[] nums, int n, List<List<Integer>>ans,List<Integer>ds){
        int xor=0;
        if(ind==n){
            for(int i=0;i<ds.size();i++){
             xor^=ds.get(i);
            }
            sum[0]+=xor;
            return;
        }
         func(ind+1,sum,nums,n ,ans, ds);
        ds.add(nums[ind]);
        func(ind+1,sum,nums,n ,ans, ds);
        ds.remove(ds.size()-1);
        
    }
}