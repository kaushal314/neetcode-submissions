class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int b=prices[0];
        int a=0;
        for(int i=1;i<n;i++){
            a=max(a,prices[i]-b);
            if(b>prices[i]) b=prices[i];
        }
        return a;
    }
};
