class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
         sort(coins.begin(), coins.end());
        vector<vector<int>>a(n+1,vector<int>(amount+1,0));
        for(int i=0;i<=n;i++){
            a[i][0]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=amount;j++){
                if(coins[i-1]<=j){
                    a[i][j]=a[i][j-coins[i-1]]+a[i-1][j];
                }
            else{
                a[i][j]=a[i-1][j];
            }
            }
        }
        return a[n][amount];
    }
};
