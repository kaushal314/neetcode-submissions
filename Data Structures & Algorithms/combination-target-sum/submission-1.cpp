class Solution {
public:
    void rec(vector<int>& nu,vector<int>& a,vector<vector<int>>& b,int n, int i,int t){
        if(t==0){
            b.push_back(a);
            return;
        }
        if(i>=n || t<0)return;
        a.push_back(nu[i]);
        rec(nu,a,b,n,i,t-nu[i]);
        a.pop_back();
        rec(nu,a,b,n,i+1,t);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>a;
        vector<vector<int>>b;
        rec(nums,a,b,n,0,target);
        return b;
    }
};
