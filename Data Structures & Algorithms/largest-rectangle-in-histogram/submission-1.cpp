class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> s;
        vector<int> ls(n);  // Nearest Smaller to Left
        vector<int> rs(n);  // Nearest Smaller to Right

        // Calculate LS (left smaller)
        for (int i = 0; i < n; i++) {
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            if (s.empty()) {
                ls[i] = -1;
            } else {
                ls[i] = s.top();
            }
            s.push(i);
        }

        // Clear stack before RS
        while (!s.empty()) {
            s.pop();
        }

        // Calculate RS (right smaller)
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            if (s.empty()) {
                rs[i] = n;
            } else {
                rs[i] = s.top();
            }
            s.push(i);
        }

        // Calculate max area
        int m = 0;
        for (int i = 0; i < n; i++) {
            int h = heights[i];
            int w = rs[i] - ls[i] - 1;
            int area = h * w;
            m = max(m, area);
        }
        return m;
    }
};
