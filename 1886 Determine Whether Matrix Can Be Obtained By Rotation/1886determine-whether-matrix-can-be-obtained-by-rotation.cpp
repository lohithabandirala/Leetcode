class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
       /* int s1=0,s2=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat.size();j++){
s1+=mat[i][j];
            }
        }
        for(int i=0;i<target.size();i++){
            for(int j=0;j<target.size();j++){
s2+=target[i][j];
            }
        }
        if(s1==s2){
return true;
        }
        return 0;*/
        for(int i=0;i<4;i++){
rot(mat);
if(mat==target){return true;}
        }
return false;
    } 
    void rot(vector<vector<int>>& mat){
        for(int i=0;i<mat.size();i++){
            for(int j=i;j<mat.size();j++){
swap(mat[i][j],mat[j][i]);
            }
        }
        for(int i = 0; i < mat.size(); i++) {
            reverse(mat[i].begin(), mat[i].end());
        }
     }
};