class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for (int num : nums) sum += num;
        
        // Check if (target + sum) is even and >= 0
        if ((target + sum) % 2 != 0 || abs(target) > sum) return 0;
        
        int subsetSum = (target + sum) / 2;
        int n = nums.size();
        
        vector<vector<int>> dp(n + 1, vector<int>(subsetSum + 1, 0));
        dp[0][0] = 1; // Only 1 way to make sum 0 with 0 elements
        
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= subsetSum; j++) {
                if (j >= nums[i - 1])
                    dp[i][j] = dp[i - 1][j] + dp[i - 1][j - nums[i - 1]];
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        
        return dp[n][subsetSum];
    }
};
