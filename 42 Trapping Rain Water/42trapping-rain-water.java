class Solution {
    public int trap(int[] height) {
        int n=height.length,l=0,r=n-1,maxl=height[l],maxr=height[r],ans=0;
        while(l<r){
            if(maxl<=maxr){
                l++;
                maxl=Math.max(maxl,height[l]);
                ans+=maxl-height[l];
            }
            else if(maxl>maxr){
                r--;
                maxr=Math.max(maxr,height[r]);
                ans+=maxr-height[r];
                
            }
        }
        return ans;
    }
}