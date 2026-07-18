class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need, have;
    
    // Count characters in t
    for (char c : t) need[c]++;
    
    int left = 0;
    int count = 0;  // How many characters matched
    int minLen = INT_MAX;
    int minStart = 0;

    for (int right = 0; right < s.length(); right++) {
        char c = s[right];
        have[c]++;

        // If this character is needed and count is not too much
        if (need.count(c) && have[c] <= need[c]) {
            count++;
        }

        // When we matched all characters in t
        while (count == t.length()) {
            // Check if this window is smaller than previous
            if (right - left + 1 < minLen) {
                minLen = right - left + 1;
                minStart = left;
            }

            // Try to shrink the window
            have[s[left]]--;
            if (need.count(s[left]) && have[s[left]] < need[s[left]]) {
                count--;
            }
            left++;
        }
    }

    // If we found no valid window
    if (minLen == INT_MAX) return "";
    return s.substr(minStart, minLen);
    }
};
