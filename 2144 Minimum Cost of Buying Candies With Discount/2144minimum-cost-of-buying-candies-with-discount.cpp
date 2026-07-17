class Solution {
public:
    int minimumCost(vector<int>& cost) {
       sort(cost.begin(),cost.end(),greater<int>());
       int c=0,n=cost.size();
       for(int i=0;i<n;i+=3){
        if(i<n){
            c+=cost[i];
        }
if(i+1<n){
         c+=cost[i+1];
       }


       }
    
       return c;
    }
       };