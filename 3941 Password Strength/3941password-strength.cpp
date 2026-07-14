class Solution {
public:
    int passwordStrength(string password) {
        set<char>l,u,d,s;
        int st=0;
        for(char ch:password){
            if(ch>='a' && ch<='z'){
                l.insert(ch);
            }
            else if(ch>='A' && ch<='Z'){
                u.insert(ch);
            }
            else if(ch>='0' && ch<='9'){
                d.insert(ch);
            }
            else if(ch=='!' || ch=='@' || ch=='#' ||ch=='$'){
                s.insert(ch);
            }
        }
            st+=l.size() *1;
          st+=u.size() *2;
            st+=d.size() *3;
              st+=s.size() *5;
              
return st;
    }
};