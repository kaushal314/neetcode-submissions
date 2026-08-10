class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);

        // If target is out of possible range, return 0
        if (abs(target) > sum) return 0;
        // (sum + target) must be even to form valid subset
        if ((sum - target) % 2 != 0) return 0;

        int s = (sum - target) / 2; // subset sum we need

        vector<vector<int>> dp(n + 1, vector<int>(s + 1, 0));
        // Base case: one way to make sum 0 (no elements)
        for (int i = 0; i <= n; i++) dp[i][0] = 1;
        

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= s; j++) {
                if (nums[i - 1] <= j)
                    dp[i][j] = dp[i - 1][j - nums[i - 1]] + dp[i - 1][j];
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }

        return dp[n][s];
    }
};
