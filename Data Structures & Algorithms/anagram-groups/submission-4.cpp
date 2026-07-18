class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>a;
        for(auto s:strs){
            string x=s;
            sort(x.begin(),x.end());
            a[x].push_back(s);
        }
        vector<vector<string>>b;
        for(auto c:a){
            b.push_back(c.second);
        }
        return b;
    }
};
