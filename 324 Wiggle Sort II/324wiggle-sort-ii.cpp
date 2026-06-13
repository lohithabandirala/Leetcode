class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        priority_queue<int>pq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        int i=1,j=0;
        while(pq.size() && i<n){
            nums[i]=pq.top();
            pq.pop();
            i+=2;
        }
        while(pq.size() && j<n){
            nums[j]=pq.top();
            pq.pop();
            j+=2;
        }
        
    }
};