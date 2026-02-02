class Solution {
public:
    string intToRoman(int num) {
        int no[]={1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string roman[]={"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string s="";
        for(int i=0;num>0;++i){
            while(num>=no[i]){
                s+=roman[i];
                num-=no[i];
            }
        }
        return s;
    }
};