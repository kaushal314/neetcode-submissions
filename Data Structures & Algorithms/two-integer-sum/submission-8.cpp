class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>a;
        for(int i=0;i<nums.size();i++){
           int b=target-nums[i];
            if(a.count(b)){
                return {a[b],i};
            }
            a[nums[i]]=i;
        }
        return {};
    }
};
