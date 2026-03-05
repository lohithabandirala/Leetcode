class Solution {
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        List<List<Integer>> ans=new ArrayList<>();
        List<Integer>ds=new ArrayList<>();
        Arrays.sort(candidates);
        func(0,0,ans,ds,candidates,target);
        return ans;
        
    }
    public void func(int ind,int sum,List<List<Integer>>ans,List<Integer>ds,int[] arr,int target){
        if(target==sum){
ans.add(new ArrayList(ds));
            return ;
    }
           
        for(int i=ind;i<arr.length;i++){
        if(i!=ind &&arr[i]==arr[i-1])continue;

        if(sum>target)
break;
    
              sum += arr[i];
            ds.add(arr[i]);
       func(i+1,sum,ans,ds,arr,target);
            sum -= arr[i];
            ds.remove(ds.size() - 1);
        }
        }
}