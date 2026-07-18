class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res = 0;
        for (int i = 0; i < heights.size()-1; i++) {
            for (int j = i + 1; j < heights.size(); j++) {
                res = max(res, min(heights[i], heights[j]) * (j - i));
            }
        }
        return res;
    }
};