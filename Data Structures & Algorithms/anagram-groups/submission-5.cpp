class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>a;
        for(auto b:strs){
            string x=b;
            sort(x.begin(),x.end());
            a[x].push_back(b);
        }
        vector<vector<string>>c;
        for(auto b:a){
            c.push_back(b.second);
        }
        return c;
    }
};
