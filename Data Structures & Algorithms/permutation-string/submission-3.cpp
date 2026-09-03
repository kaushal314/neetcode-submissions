class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        sort(s1.begin(),s1.end());
        if(n>m)return false;
        for(int i=0;i<=m-n;i++){
            string s=s2.substr(i,n);
            sort(s.begin(),s.end());
            if(s==s1)return true;
        }
        return false;
    }
};
