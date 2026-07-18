class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int>a;
        for(char b:s){
                a[b]++;
            
        }
        for(char b:t){
            if(a[b]==0){
                return false;
            }
            a[b]--;
        }
        return true;
    }
};
