class Solution {
    public int smallestEvenMultiple(int n) {
      return lcm(2,n);
    }
    public int lcm(int a,int b){
        return (a*b)/gcd(a,b);
        
    }
    public int gcd(int a,int b){
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
    
}