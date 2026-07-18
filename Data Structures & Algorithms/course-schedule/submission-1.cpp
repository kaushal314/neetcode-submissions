class Solution {
public:
    bool iscycle(int src,vector<bool> &vis,vector<bool> &rec,vector<vector<int>>& pre){
        vis[src]=true;
        rec[src]=true;
        for(int i=0;i<pre.size();i++){
            int u=pre[i][1];
            int v=pre[i][0];
            if(u==src){
                if(!vis[v]){
                   if( iscycle(v,vis,rec,pre)){
                    return true;
                   }
                }
                   else{
                    if(rec[v]){
                        return true;
                    }
                   
                }
            }
        }
        rec[src]=false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<bool> vis(n,false);
        vector<bool> rec(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(iscycle(i,vis,rec,prerequisites)){
                    return false;
                }
            }
        }
        return true;
    }
};