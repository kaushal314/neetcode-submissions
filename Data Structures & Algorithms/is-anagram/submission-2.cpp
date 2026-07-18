class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int>a;
        for(char b:s){
            if(a[b]){
                a[b]++;
            }
            else{
                a[b]=1;
            }
        }
        for(char b:t ){
            if(a[b]){
                a[b]--;
                if(a[b]==0){
                    a.erase(b);
                }
            }
            else{
                return false;
            }
        }
        return true;
    }
};
