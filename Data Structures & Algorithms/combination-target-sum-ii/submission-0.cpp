class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end()); // Sort to handle duplicates
        vector<vector<int>> result;
        vector<int> path;
        backtrack(candidates, target, 0, path, result);
        return result;
    }

private:
    void backtrack(vector<int>& nums, int target, int index, vector<int>& path, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(path); // Found a valid combination
            return;
        }

        for (int i = index; i < nums.size(); ++i) {
            // Skip duplicates
            if (i > index && nums[i] == nums[i - 1]) continue;

            if (nums[i] > target) break; // No need to continue if current number is too big

            path.push_back(nums[i]); // Choose the number
            backtrack(nums, target - nums[i], i + 1, path, result); // Move to next index
            path.pop_back(); // Undo the choice
        }
    }
};
