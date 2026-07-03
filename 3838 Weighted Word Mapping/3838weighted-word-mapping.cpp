class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string r="";
        for(string w:words){
            int t=0;
            for(char c:w){
                t+=weights[c-'a'];
            }
            int m=t%26;
            char a='z'-m;
            r+=a;
        }
        return r;
    }
};