class Solution {
public:
    int minimumPushes(string word) {
        int c=1,n=word.length(),s=0;
        sort(word.begin(),word.end());
        for( int i=1;i<n;i++){
            if(word[i]!=word[i-1]){
                c++;
            }
        }
     for(int i=1;i<=c;i++){
         if(i<=8){
             s+=1;
         }
        
        else if(i<=16){
        s=s+(1*2);
        }
        else if(i<=24){
            s=s+(1*3);
        }
        else if(i<=26){
            s=s+(1*4);
        }
     }
        
        return s;
    }
};