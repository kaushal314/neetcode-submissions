class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int e=s.size()-1;
        while(i<=e){
            int t=s[i];
            s[i]=s[e];
            s[e]=t;
            i++;
            e--;
        }
    }
};