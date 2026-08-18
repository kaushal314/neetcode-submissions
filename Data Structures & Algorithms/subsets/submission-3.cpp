class Solution {
public:
    void subs(vector<int>& nu,vector<vector<int>>&a,vector<int>&b,int i){
        if(i==nu.size()){
            a.push_back(b);
            return;
        }
        b.push_back(nu[i]);
        subs(nu,a,b,i+1);
        b.pop_back();
        subs(nu,a,b,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>a;
        vector<int>b;
        subs(nums,a,b,0);
        return a;
    }
};
