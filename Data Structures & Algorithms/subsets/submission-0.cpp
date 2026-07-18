class Solution {
public:
    void rec(vector<int>& nums, int n, int i, vector<int> b, vector<vector<int>>& a) {
        if (i >= n) {
            a.push_back(b); 
            return;
        }

        b.push_back(nums[i]);
        rec(nums, n, i + 1, b, a);

        b.pop_back(); 
        rec(nums, n, i + 1, b, a);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> a;
        int n = nums.size();
        vector<int> b;
        rec(nums, n, 0, b, a);
        return a;
    }
};
