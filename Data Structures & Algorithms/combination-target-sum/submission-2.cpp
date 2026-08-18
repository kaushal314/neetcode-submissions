class Solution {
public:
    void su(vector<int>&nu,vector<vector<int>>&a,vector<int>&b,int t,int i){
        if(t==0){
            a.push_back(b);
            return;
        }
        if(i==nu.size() || t<0)return;
        b.push_back(nu[i]);
        su(nu,a,b,t-nu[i],i);
        b.pop_back();
        su(nu,a,b,t,i+1);

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>a;
        vector<int>b;
        su(nums,a,b,target,0);
        return a;
    }
};
