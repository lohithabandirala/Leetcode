class Solution {
public:
    int climbStairs(int n) {
        int p1=1,p2=2,c;
        if(n==1){
            return 1;
        }
    for(int i=3;i<=n;i++){
        c=p1+p2;
        p1=p2;
        p2=c;
    }
    return p2;
    }
};