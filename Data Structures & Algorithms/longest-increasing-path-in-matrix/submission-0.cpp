class Solution {
public:
int m=0,n=0;
    bool valpath(int i,int j){
        if(i<0 || j<0 || i>m-1 ||j>n-1){
            return false;
        }
        return true;
    }
    int mem(vector<vector<int>>&dp,vector<vector<int>>mat,int i,int j){
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int top=0,left=0,right=0,bot=0;
        if(valpath(i-1,j) && mat[i-1][j]>mat[i][j]){
            top=mem(dp,mat,i-1,j);
        }
        if(valpath(i+1,j) && mat[i+1][j]>mat[i][j]){
            bot=mem(dp,mat,i+1,j);
        }
        if(valpath(i,j-1) && mat[i][j-1]>mat[i][j]){
            left=mem(dp,mat,i,j-1);
        }
        if(valpath(i,j+1) && mat[i][j+1]>mat[i][j]){
            right=mem(dp,mat,i,j+1);
        }
        dp[i][j]=1+max({top,bot,left,right});
        return dp[i][j];
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        m=matrix.size();
        n=matrix[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans=max(ans,mem(dp,matrix,i,j));
            }
        }
        return ans;
    }
};
