class Solution {
public:
    string removeDigit(string number, char digit) {
         string maxn="";
        string c=number;
      
  for(int i=0;i<=number.size();i++){
      if (number[i]==digit){ 
          c. erase(i, 1);
          maxn=max(maxn, c);
          c=number;
          
      }
  }
        return maxn;
    }
};