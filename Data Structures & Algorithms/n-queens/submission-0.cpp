class Solution {
public:
    // Check if it's safe to place a queen at (r, c)
    bool issafe(vector<vector<char>> &board, int r, int c) {
        int n = board.size();

        // Check row (left side only)
        for (int j = 0; j < c; j++) {
            if (board[r][j] == 'Q') return false;
        }

        // Check column (up side only)
        for (int i = 0; i < r; i++) {
            if (board[i][c] == 'Q') return false;
        }

        // Check upper-left diagonal
        for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') return false;
        }

        // Check upper-right diagonal
        for (int i = r - 1, j = c + 1; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') return false;
        }

        return true;
    }

    // Backtracking function
    void nq(vector<vector<char>> &board, int r, vector<vector<string>> &ans) {
        int n = board.size();

        if (r == n) {
            vector<string> temp;
            for (int i = 0; i < n; i++) {
                string row(board[i].begin(), board[i].end());
                temp.push_back(row);
            }
            ans.push_back(temp);
            return;
        }

        for (int j = 0; j < n; j++) {
            if (issafe(board, r, j)) {
                board[r][j] = 'Q';
                nq(board, r + 1, ans);
                board[r][j] = '.';
            }
        }
    }

    // Main function
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<char>> board(n, vector<char>(n, '.'));
        vector<vector<string>> ans;
        nq(board, 0, ans);
        return ans;
    }
};
