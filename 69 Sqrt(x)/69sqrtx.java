class Solution {
    public int mySqrt(int x) {
        long start =0;
        long end=x;
        long result=0;
        while(start<=end){
            long mid=(start+end)/2;
         long square=mid*mid;
            if(square==x){
                return (int) mid;
            }
            if(square<x){
                start=mid+1;
                result=mid;
            }
            if(square>x){
                end=mid-1;
                
            }
        }
        return (int) result;
    }
}