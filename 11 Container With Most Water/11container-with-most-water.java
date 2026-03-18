class Solution {
    public int maxArea(int[] height) {
        int l=0,r=height.length-1, maxarea=0;
        while(l<r) { 
            int length=Math. min(height [l], height[r]) ;
            int width=r-l;
            int area=length *width;
            maxarea=Math.max(area,maxarea);
           if(height[l] <height[r]) {
               l++;
              } 
            else{
                r--;
               } 
           } 
        return maxarea;
            
        
    }
}