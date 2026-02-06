class Solution {
public:
    bool isPalindrome(int x) {
        long int s=0;
        long temp=x;
    
        while(x>0){
            int d=x%10;
            s=s*10+d;
            x/=10;
        }
    if(temp==s)
    {
    return true;
    }
    else {return false;
    }
    }
};