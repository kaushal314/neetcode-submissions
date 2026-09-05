class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>a;
        for(int i=0;i<nums.size();i++){
            int c=target-nums[i];
            if(a.count(c)){
                return {a[c],i};
            }
            a[nums[i]]=i;
        }
        return {};
    }
};
