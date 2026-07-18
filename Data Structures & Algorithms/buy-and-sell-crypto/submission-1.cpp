class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int b=prices[0];
        int p=0;
        for(int i=1;i<n;i++){
            p=max(p,prices[i]-b);
            if(b>prices[i]){
                b=prices[i];
            }
        }
        return p;
    }
};
