class Solution {
    public int bagOfTokensScore(int[] tokens, int power) {
        Arrays.sort(tokens) ;
      int n=tokens.length;
      int l=0, r=n-1,score=0, maxn=0;
      while(l<=r){
          if(power>=tokens[l]){
          power-=tokens[l] ;
          score+=1;
          l++;
        maxn=Math.max(score,maxn);
             } 
         else if(score>0){
          power+=tokens[r] ;
          score-=1;
          r--;
         } 
          else {
          break;
             } 
         } 
          return maxn;
             
    }
}