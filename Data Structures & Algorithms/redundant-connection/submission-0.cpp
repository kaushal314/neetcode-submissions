class Solution {
public:
    int findparent(int n,vector<int>&p){
        if(n==p[n]){
            return n;
        }
        return findparent(p[n],p);
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int>par(1001,0);
        for(int i=0;i<=edges.size();i++){
            par[i]=i;
        }
        vector<int>res;
        for(auto v:edges){
            int n1=v[0],n2=v[1];
            int p1=findparent(n1,par);
            int p2=findparent(n2,par);
            if(p1==p2){
                res=v;
            }
            par[p1]=p2;
        }
        return res;
    }
};
