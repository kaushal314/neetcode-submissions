class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=INT_MIN;
        int n=nums.size();
        int a=0;
        for(int i=0;i<n;i++){
            a+=nums[i];
            if(a>s){
                s=a;
            }
            if(a<0){
                a=0;
            }
        }
        return s;
    }
};
