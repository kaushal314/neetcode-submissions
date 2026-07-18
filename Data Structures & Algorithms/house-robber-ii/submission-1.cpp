class Solution {
public:
    int helper(vector<int>&dp){
        int n=dp.size();
        if(n==0){
            return 0;
        }
        if(n==1){
            return dp[0];
        }
        dp[1]=max(dp[0],dp[1]);
        for(int i=2;i<n;i++){
            dp[i]=max(dp[i]+dp[i-2],dp[i-1]);
        }
        return dp[n-1];
    }
    int rob(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return nums[0];
        }
        vector<int>dp1(nums.begin(),nums.end()-1);
        vector<int>dp2(nums.begin()+1,nums.end());
        return max(helper(dp1),helper(dp2));
    }
};
