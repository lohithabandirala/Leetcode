class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long m=mass;
     sort(asteroids.begin(),asteroids.end());
     int n=asteroids.size();
     for(int i=0;i<n;i++){
        if(m>=asteroids[i]){
            m+=asteroids[i];
        }
        else{
            return false;
        }
        
     }   
     return true;
    }
};