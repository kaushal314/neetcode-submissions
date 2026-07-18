class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n==0){
            return "";
        }
        vector<bool>dp(n,false);
        int st=0;
        int mx=1;
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>=i;j--){
                if(s[i]==s[j]&&((j-i<=2)|| dp[j-1])){
                    dp[j]=true;
                    if(j-i+1>mx){
                        st=i;
                        mx=j-i+1;
                    }
                }
                else{
                    dp[j]=false;
                }
            }
            
        }
    return s.substr(st,mx);
    }
};
