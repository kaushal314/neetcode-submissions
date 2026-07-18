class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int p=1;

        for(int j=0;j<nums.size();j++){
            if(nums[j]!=p){
                continue;
            }
            if(nums[j]==p){
                p++;
            }
        }
        return p;
    }
};