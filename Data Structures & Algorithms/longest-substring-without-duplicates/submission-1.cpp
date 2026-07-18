class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int m=0;
        for(int i=0;i<s.size();i++){
            int c=0;
            unordered_map<char,int>a;
            for(int j=i;j<s.size();j++){
                if(a.find(s[j])==a.end()){
                    a[s[j]]=1;
                    c++;
                }
                else{
                    break;
                }
            }
            m=max(m,c);
        }
        return m;
    }
};
