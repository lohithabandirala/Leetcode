class Solution {
public:
    string smallestPalindrome(string s) {
        int l=s.length();
        int p=l/2;
        sort(s.begin(),s.begin()+p);
        for( int i=0;i<p;i++){
            s[l-1-i]=s[i];
        }
        return s;
    }
};