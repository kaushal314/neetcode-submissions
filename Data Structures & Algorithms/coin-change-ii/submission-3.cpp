class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
         sort(coins.begin(), coins.end());
        vector<vector<long>>a(n,vector<long>(amount+1,0));
        for(int i=0;i<=amount;i++){
            a[0][i]=(i%coins[0]==0);
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<=amount;j++){
                    long nt=a[i-1][j];
                    long take=0;
                    if(coins[i]<=j){
                        take=a[i][j-coins[i]];
                    }
                a[i][j]=nt+take;
            }
        }
        return a[n-1][amount];
    }
};
