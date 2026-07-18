class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>a;
        for(auto m:strs){
            string x=m;
            sort(x.begin(),x.end());
            a[x].push_back(m);
        }
        vector<vector<string>>b;
        for(auto x:a){
            b.push_back(x.second);
        }
        return b;
    }
};
