class Solution {
public:
    int digitFrequencyScore(int n) {
        int s=0;
     int freq[10]={0};
        while(n>0){
            int i = n%10;
            freq[i]++;
            n=n/10;
            
        }
        for(int i=0;i<10;i++){
            s+=freq[i]*i;
        }
        return s;
    }
};