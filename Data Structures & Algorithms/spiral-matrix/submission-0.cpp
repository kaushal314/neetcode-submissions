class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> a;
        int m = matrix.size();
        int n = matrix[0].size();
        int sr = 0, er = m - 1;
        int sc = 0, ec = n - 1;

        while (sr <= er && sc <= ec) {
            // Traverse from left to right
            for (int i = sc; i <= ec; i++) {
                a.push_back(matrix[sr][i]);
            }
            sr++;

            // Traverse from top to bottom
            for (int i = sr; i <= er; i++) {
                a.push_back(matrix[i][ec]);
            }
            ec--;

            // Traverse from right to left (only if there is a remaining row)
            if (sr <= er) {
                for (int i = ec; i >= sc; i--) {
                    a.push_back(matrix[er][i]);
                }
                er--;
            }

            // Traverse from bottom to top (only if there is a remaining column)
            if (sc <= ec) {
                for (int i = er; i >= sr; i--) {
                    a.push_back(matrix[i][sc]);
                }
                sc++;
            }
        }
        return a;
    }
};
