class Solution {

public:

    long long minIncrementOperations(vector<int>& nums, int k) {

        long long dp[100001];

        memset(dp, 0, sizeof(dp));

        int n = nums.size();

        for(int i=0;i<n;i++){

            int num = nums[i];

            int extra = num >=k ? 0 : k-num;

            dp[i] = extra;

            if (i-3>=0) dp[i] += dp[i-3];

            

            if (i-1>=0) dp[i] = min(dp[i], extra + dp[i-1]);

            if (i-2>=0) dp[i] = min(dp[i], extra + dp[i-2]);

        }

        return min({dp[n-1],dp[n-2],dp[n-3]});

    }

};