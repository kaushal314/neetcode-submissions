class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        unordered_set<int>a(nums.begin(),nums.end());
        vector<int> b(a.begin(),a.end());
        sort(b.begin(),b.end());
        int m=nums.size();
        int n=b.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(nums[i-1]==b[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
};
