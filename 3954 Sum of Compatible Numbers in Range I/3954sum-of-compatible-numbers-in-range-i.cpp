class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int a=max(0,n-k),b=abs(n+k),s=0;
        for(int x=a;x<=b;x++){
            if((abs(n-x)<=k) && ((n&x)==0)){
                s+=x;
            }
        }
        return s;
    }
};