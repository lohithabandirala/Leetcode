class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ls=landStartTime.size();
        int ws=waterStartTime.size();
        int s=0,t=0,t1=INT_MAX,m=INT_MAX;
        for(int i=0;i<ls;i++){
            m=min(m,landStartTime[i]+landDuration[i]);
        }
        for(int i=0;i<ws;i++){
            s=max(m,waterStartTime[i]);
            t=s+waterDuration[i];
            t1=min(t1,t);
        }
 m=INT_MAX;
        for(int i=0;i<ws;i++){
            m=min(m,waterStartTime[i]+waterDuration[i]);
        }
        for(int i=0;i<ls;i++){
            s=max(m,landStartTime[i]);
            t=s+landDuration[i];
            t1=min(t1,t);
        }
return t1;
    }
};