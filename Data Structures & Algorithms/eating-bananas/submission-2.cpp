class Solution {
public:
    double fun(vector<int>& piles,int h){
        double t=0;
        for(int i=0;i<piles.size();i++){
            t+=ceil(double(piles[i])/h);

        }
        return t;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int l=1,r=*max_element(piles.begin(),piles.end());
        int ans=r;
        while(l<=r){
            int mid=(l+r)/2;
            double he=fun(piles,mid);
            if(he<=h){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};
