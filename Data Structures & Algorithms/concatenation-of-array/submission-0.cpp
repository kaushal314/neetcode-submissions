class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>a;
        for(int i=0;i<n;i++){
            a.push_back(nums[i]);
        }
        for(int i=0;i<n;i++){
            a.push_back(nums[i]);
        }
        return a;
    }
};