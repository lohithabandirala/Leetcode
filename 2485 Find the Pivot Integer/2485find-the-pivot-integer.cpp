class Solution {
public:
    int pivotInteger(int n) {
        int tsum=n*(n+1)/2;
        for(int i=1;i<=n;i++){
            int fsum=i*(i+1)/2;
            int lsum=tsum-fsum+i;
         if(fsum==lsum){
        return i;
         
        }
            }
        return -1;
         }       
};