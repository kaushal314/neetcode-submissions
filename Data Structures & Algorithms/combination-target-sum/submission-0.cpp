class Solution {
public:
    void su(vector<int> nums,int t,vector<vector<int>> &a,vector<int> b,int i){
        if(t==0){
            a.push_back(b);
            return;
        }
        if(t<0 || i>=nums.size()){
            return;
        }
        b.push_back(nums[i]);
        su(nums,t-nums[i],a,b,i);
        b.pop_back();
        su(nums,t,a,b,i+1);

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> a;
        vector<int> b;
        su(nums,target,a,b,0);
        return a;

    }
};
