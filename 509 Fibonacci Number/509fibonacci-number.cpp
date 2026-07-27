class Solution {
public:
    int fib(int n) {
        int p1=0,p2=1,c;
if(n<=0){
    return 0;
}
 for(int i=2;i<=n;i++){
    c=p1+p2;
p1=p2;
p2=c;
 }
 return p2;
    }
};