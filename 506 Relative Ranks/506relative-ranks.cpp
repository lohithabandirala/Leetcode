class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
       vector<int>sscore=score; 
        sort(sscore.begin(),sscore.end(),greater<int>());
vector<string>medal={ "Gold Medal", "Silver Medal", "Bronze Medal"};
    unordered_map<int,string>ranks;
  for(int i=0;i<sscore.size();i++){
      if(i<3){
         ranks[ sscore[i]]=medal[i];
          }
       else {
         ranks[sscore[i]]=to_string(i+1);
           }
      }
      vector<string>ans;
      for(int i:score){
          ans.push_back(ranks[i]);
          }
      return ans;
    }
};