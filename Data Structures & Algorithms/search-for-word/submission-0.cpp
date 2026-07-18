class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();

        // Create a visited matrix
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));

        // Try to find the word starting from each cell
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (dfs(board, word, r, c, 0, visited)) {
                    return true;
                }
            }
        }

        return false;
    }

    bool dfs(vector<vector<char>>& board, string& word, int r, int c, int index, vector<vector<bool>>& visited) {
        // Base case: entire word matched
        if (index == word.size()) return true;

        // Boundary and validity checks
        if (r < 0 || c < 0 || r >= board.size() || c >= board[0].size() ||
            board[r][c] != word[index] || visited[r][c]) {
            return false;
        }

        // Mark this cell as visited
        visited[r][c] = true;

        // Explore all 4 directions
        bool found = dfs(board, word, r + 1, c, index + 1, visited) ||
                     dfs(board, word, r - 1, c, index + 1, visited) ||
                     dfs(board, word, r, c + 1, index + 1, visited) ||
                     dfs(board, word, r, c - 1, index + 1, visited);

        // Backtrack: unmark the cell
        visited[r][c] = false;

        return found;
    }
};
