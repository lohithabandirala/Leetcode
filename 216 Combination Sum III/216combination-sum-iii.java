class Solution {
    public List<List<Integer>> combinationSum3(int k, int n) { 
        List<List<Integer>>ans=new ArrayList<>();
        List<Integer>ds=new ArrayList<>();
        func(1,9,k,n,ds,ans);
        return ans;
        }
        
    void func(int l,int h,int k,int n,List<Integer>ds,List<List<Integer>>ans){
        if(n==0&&ds.size()==k){
        ans.add(new ArrayList(ds));
        }
        for(int i=l;i<=h;i++){
ds.add(i);
        func(i+1,h,k,n-i,ds,ans);
        ds.remove(ds.size()-1);
        }
    
    }
}