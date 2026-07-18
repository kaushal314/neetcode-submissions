class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int a=INT_MIN;
        int n=nums.size();
        int b=0;
        for(int i=0;i<n;i++){
            b+=nums[i];
            if(b>a){
                a=b;
            }
            if(b<0){
                b=0;
            }
        }
        return a;
    }
};
