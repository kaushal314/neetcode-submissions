class Solution {
public:
    void per(vector<int>& nums, vector<vector<int>>& a, vector<bool>& p, vector<int>& pt, int n) {
        if (pt.size() == n) {
            a.push_back(pt);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (!p[i]) {
                pt.push_back(nums[i]);
                p[i] = true;
                per(nums, a, p, pt, n);
                pt.pop_back();
                p[i] = false;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> a;
        int n = nums.size();
        vector<bool> p(n, false);
        vector<int> pt;
        per(nums, a, p, pt, n);
        return a;
    }
};
