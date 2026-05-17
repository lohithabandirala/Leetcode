class Solution {
    public boolean checkValidString(String s) {
        int p1=0,p2=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='('){
                p1++;
                p2++;
            } else if(s.charAt(i)==')'){
                p1--;
                p2--;
            } else if(s.charAt(i)=='*'){
                p1++;
                p2--;
            }
            if(p1<0){
                return false;
            }
            if(p2<0){
                p2 = 0;
            }
        }
        return p2==0;
    }
}