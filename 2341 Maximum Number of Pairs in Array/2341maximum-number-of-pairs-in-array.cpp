class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int n=nums.size();    
    sort(nums.begin(),nums.end());
    vector<int> ans;
    int pairs = 0;
    int i = 0;
    while (i < n - 1)
    {
        if (nums[i] == nums[i + 1])
        {
            pairs++;
            i = i + 2;
        }
        else
            i++;
    }
    ans.push_back(pairs);
    ans.push_back((n-pairs*2));
    return ans;



    
    }
};