class Solution {
public:
   int helper(vector<string>& words, int i, unordered_map<char,int> &mp, vector<int>& score){
        //check if word can be included
        if(i>=words.size()) return 0;
        bool isposs = true;
        int tempscore = 0;
        for(char x: words[i]){
            if(mp[x]<=0) isposs = false;
            mp[x]--;
            tempscore+= score[x-'a'];
        }
        int a = isposs? tempscore + helper(words, i+1, mp, score) : INT_MIN;
        for(char x: words[i]) mp[x]++;
        int b = helper(words, i+1, mp, score);
        return max(a,b);
    }
    
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        unordered_map<char,int> mp;
        for(auto x: letters)mp[x]++;
        return max(0, helper(words,0,mp,score));
    
        
    }
};