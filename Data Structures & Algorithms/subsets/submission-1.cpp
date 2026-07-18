class Solution {
public:
    void sub(vector<int>& nums,vector<int>& a,vector<vector<int>>& b,int n,int i){
        if(i>=n){
            b.push_back(a);
            return;
        }
        a.push_back(nums[i]);
        sub(nums,a,b,n,i+1);
        a.pop_back();
        sub(nums,a,b,n,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>a;
        vector<vector<int>>b;
        int n=nums.size();
        sub(nums,a,b,n,0);
        return b;
    }
};
