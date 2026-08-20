class Solution {
public:
    bool isValid(string s) {
        stack<char>a;
        int i=0;
        int n=s.size();
        while(i<n){
            if(s[i]=='['||s[i]=='{'||s[i]=='('){
                a.push(s[i]);
            }
            else{ 
            if(a.empty())return false;
            if(s[i]==')'&& a.top()!='('||s[i]==']'&& a.top()!='['||s[i]=='}'&& a.top()!='{')return false;
            a.pop();
            }
            i++;
        }
        return a.empty();
    }
};
