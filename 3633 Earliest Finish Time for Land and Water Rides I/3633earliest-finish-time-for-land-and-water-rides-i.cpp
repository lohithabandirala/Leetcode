class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ls=landStartTime.size();
        int ws=waterStartTime.size();
        int s=0,t=0,t1=0,m=INT_MAX;
        for(int i=0;i<ls;i++){
            s=landStartTime[i]+landDuration[i];
            for(int j=0;j<ws;j++){
                t1=max(s,waterStartTime[j]);
                t=t1+waterDuration[j];
            
            if(t<m){
                m=t;
            }
            }
        }

        for(int i=0;i<ws;i++){
            s=waterStartTime[i]+waterDuration[i];
            for(int j=0;j<ls;j++){
                t1=max(s,landStartTime[j]);
                t=t1+landDuration[j];
            
            if(t<m){
                m=t;
            }
        }
        }
        return m;
    }
};