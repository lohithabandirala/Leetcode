class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        for(string w:words){
            if(w.length()>=k){
                string p=w.substr(0,k);
                mp[p]++;
            }
        }
        int t=0;
        for(auto i: mp){
        if(i.second>=2){t++;
                      }
        }
            return t;
        }
    
};