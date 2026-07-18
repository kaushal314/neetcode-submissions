class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1000000);
        dp[n-1]=0;
        for(int i=n-2;i>=0;i--){
            int e=min((int)nums.size(),i+nums[i]+1);
            for(int j=i+1;j<e;j++){
                dp[i]=min(dp[i],dp[j]+1);
            }
        }
        return dp[0];
    }
};
