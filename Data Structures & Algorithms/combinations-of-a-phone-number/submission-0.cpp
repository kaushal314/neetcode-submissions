

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        // Mapping digits to letters (like phone keypad)
        unordered_map<char, string> phone = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
            {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
        };

        vector<string> result;
        string path = "";

        // Start backtracking from index 0
        backtrack(digits, 0, phone, path, result);

        return result;
    }

private:
    // Recursive function to build combinations
    void backtrack(string& digits, int index, unordered_map<char, string>& phone,
                   string& path, vector<string>& result) {
        // If we've used all digits, add the combination to the result
        if (index == digits.length()) {
            result.push_back(path);
            return;
        }

        // Get the letters for the current digit
        string letters = phone[digits[index]];

        // Try each letter
        for (char ch : letters) {
            path.push_back(ch);                   // Choose a letter
            backtrack(digits, index + 1, phone, path, result); // Move to next digit
            path.pop_back();                      // Backtrack
        }
    }
};
