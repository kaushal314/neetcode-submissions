class Solution {
public:
    void su(int n,int oc,int cc,vector<string>&a,string b){
        if(oc==n && cc==n){
            a.push_back(b);
            b="";
            return;
        }
        if(oc<n){
            su(n,oc+1,cc,a,b+'(');
        }
         if(cc<oc){
            su(n,oc,cc+1,a,b+')');
        }
    }
    vector<string> generateParenthesis(int n) {
        int oc=0,cc=0;
        vector<string>a;
        string b;
        su(n,oc,cc,a,b);
        return a;
    }
};
