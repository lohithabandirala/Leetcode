class Solution {
public:
    int strStr(string haystack, string needle) {
        string str;
        for(int i=0;i<haystack.size();i++){
            if(needle[0]==haystack[i]){
                str = haystack.substr(i,needle.size());
                if(str==needle) return i;
            }
        }
        return -1;
    
    }
};