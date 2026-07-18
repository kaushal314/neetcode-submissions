class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>a;
        for(int i=0;i<=nums.size()-k;i++){
            int m=nums[i];
            for(int j=i;j<i+k;j++){
                 m=max(m,nums[j]);
            }
            a.push_back(m);
        }
        return a;
    }
};
