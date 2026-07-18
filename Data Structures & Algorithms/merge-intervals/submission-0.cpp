class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;

        if (intervals.empty()) return result;

        // Step 1: Sort intervals
        sort(intervals.begin(), intervals.end());

        // Step 2: Initialize variables
        int start = intervals[0][0];
        int end = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            int currStart = intervals[i][0];
            int currEnd = intervals[i][1];

            // Overlapping case
            if (currStart <= end) {
                end = max(end, currEnd);
            } else {
                // No overlap → store previous interval
                result.push_back({start, end});
                start = currStart;
                end = currEnd;
            }
        }

        // Push the last interval
        result.push_back({start, end});

        return result;
    }
};