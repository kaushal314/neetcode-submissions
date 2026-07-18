class Solution {
public:
    void sub(vector<int>& nums, int k, int n, int i, int s, int& count) {
        if (i == n) return;

        s += nums[i];

        if (s == k) {
            count++;
        }

        // continue the subarray
        sub(nums, k, n, i + 1, s, count);
    }

    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            sub(nums, k, n, i, 0, count);
        }

        return count;
    }
};
