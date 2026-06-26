class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        int n=nums.length;
        List<List<Integer>> result = new ArrayList<>();
        
List<Integer>ds=new ArrayList <>();
        Subsets(nums, 0, ds
, result);

        return result;
       
        

    }
    void Subsets(int[] nums, int ind, List<Integer>ds, List<List<Integer>> result) {
 if(ind>=nums.length){
      

result.add(new ArrayList<>(ds) );
     return;
    } 
        ds.add(nums[ind]); 
        Subsets(nums, ind+1,ds,result);
        ds.remove(ds. size() - 1) ;
        Subsets(nums, ind+1,ds,result);
            
   }       
      
}