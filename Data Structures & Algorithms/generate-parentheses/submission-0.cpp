class Solution {
public:
    void rec(int n,vector<string> &s,int oc,int cc,string a){
        if(oc==n && cc==n){
            s.push_back(a);
            return;
        }
        if(oc<n){
            rec(n,s,oc+1,cc,a+"(");
        }
        if(cc<oc){
            rec(n,s,oc,cc+1,a+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>s;
        int oc=0,cc=0;
        rec(n,s,oc,cc,"");
        return s;
        
    }
};
