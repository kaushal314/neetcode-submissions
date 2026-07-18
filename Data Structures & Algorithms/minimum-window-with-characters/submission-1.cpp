class Solution {
public:
    string minWindow(string s, string t) {
         if (s.empty() || t.empty()) return "";

    unordered_map<char, int> t_freq;
    for (char c : t) t_freq[c]++;

    unordered_map<char, int> window;
    int have = 0, need = t_freq.size();
    int left = 0, minLen = INT_MAX, minStart = 0;

    for (int right = 0; right < s.length(); right++) {
        char c = s[right];
        window[c]++;

        // If this character is needed and we have the right amount
        if (t_freq.count(c) && window[c] == t_freq[c]) {
            have++;
        }

        // Contract window while it's valid
        while (have == need) {
            // Update minimum window
            if ((right - left + 1) < minLen) {
                minLen = right - left + 1;
                minStart = left;
            }

            // Remove the leftmost character
            char leftChar = s[left];
            window[leftChar]--;
            if (t_freq.count(leftChar) && window[leftChar] < t_freq[leftChar]) {
                have--;
            }
            left++;
        }
    }

    return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
    }
};
