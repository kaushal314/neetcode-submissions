class Solution {
public:
    void gen(int n,int oc,int cc,vector<string>&a,string b){
        if(oc==n &&cc==n){
            a.push_back(b);
            b="";
        }
        if(oc<n){
            gen(n,oc+1,cc,a,b+'(');
        }
        if(cc<oc){
            gen(n,oc,cc+1,a,b+')');
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>a;
        int oc=0,cc=0;
        gen(n,oc,cc,a,"");
        return a;
    }
};
