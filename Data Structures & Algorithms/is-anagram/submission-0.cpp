class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        vector<int> a(26, 0);
        for(char c : s){
            a[c - 'a']++;
        }
        for(char c : t){
            a[c - 'a']--;
        }
        for(int count : a){
            if(count != 0){
                return false;
            }
        }
        return true;
    }
};
