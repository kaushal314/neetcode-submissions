class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        int i=0,e=n-1;
        while(i<e){
            while(i<e && !alphaNum(s[i])){
                i++;
            }
            while(i<e && !alphaNum(s[e])){
                e--;
            }
            if(tolower(s[i])!=tolower(s[e])){
                return false;
            }
            i++;
            e--;
        }
        return true;
    }
    bool alphaNum(char c) {
        return (c >= 'A' && c <= 'Z' || 
                c >= 'a' && c <= 'z' || 
                c >= '0' && c <= '9');
    }
};
