class Solution {
public:
    int rec(vector<int>& nums, int t, int s, int e) {
        if (s > e) return -1;

        int m = s + (e - s) / 2;

        if (nums[m] == t) return m;

    
        if (nums[s] <= nums[m]) {
            if (nums[s] <= t && t < nums[m]) {
                return rec(nums, t, s, m - 1);
            } else {
                return rec(nums, t, m + 1, e);
            }
        }
        else {
            if (nums[m]<t && t<=nums[e]) {
                return rec(nums,t,m+1, e);
            } else {
                return rec(nums,t,s,m-1);
            }
        }
    }

    int search(vector<int>& nums, int target) {
        return rec(nums,target,0,nums.size()-1);
    }
};
