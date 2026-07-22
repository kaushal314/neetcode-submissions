class Solution {
public:
    void rec(vector<int>& nu,vector<int>& a,vector<vector<int>> &b,int n,int i){
        if(i>=n){
            b.push_back(a);
            return;
        }
        a.push_back(nu[i]);
        rec(nu,a,b,n,i+1);
        a.pop_back();
        rec(nu,a,b,n,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>a;
        vector<vector<int>>b;
        rec(nums,a,b,n,0);
        return b;
    }
};
