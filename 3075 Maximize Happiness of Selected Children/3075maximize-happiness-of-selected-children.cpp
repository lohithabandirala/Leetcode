class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        
    long long maxn=0;
            int i=0;   sort(happiness.begin(),happiness.end(),greater<int>());
   while(i<k){
     maxn+=max(happiness[i]-(i),0);
       
       
            
       
       i++;}
        return maxn;
    }
};