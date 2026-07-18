class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int p=0;
        int b=prices[0];
        for(int i=1;i<n;i++){
            if(b<prices[i]){
                p+=prices[i]-b;
            }
            b=prices[i];
        }
        return p;
    }
};