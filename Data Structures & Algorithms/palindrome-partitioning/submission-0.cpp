class Solution {
public:
    bool ispal(string s){
        string s1=s;
        reverse(s1.begin(),s1.end());
        return s==s1;
    }
    void par(string s,vector<string>&a,vector<vector<string>> &ans){
        if(s.size()==0){
            ans.push_back(a);
            return;
        }
        for(int i=0;i<s.size();i++){
            string part=s.substr(0,i+1);
            if(ispal(part)){
                a.push_back(part);
                par(s.substr(i+1),a,ans);
                a.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>a;
        vector<vector<string>>ans;
        par(s,a,ans);
        return ans;
    }
};
