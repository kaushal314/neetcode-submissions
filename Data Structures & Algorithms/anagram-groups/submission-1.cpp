class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>a;
        for(auto m:strs){
            string x=m;
            sort(x.begin(),x.end());
            a[x].push_back(m);
        }
      vector<vector<string>>c;
        for(auto x:a){
            c.push_back(x.second);
        }
        return c;
    }
};
