class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        vector<vector<bool>>a(m,vector<bool>(n,false));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                }
            }
        }
        while(!q.empty()){
            int i=q.front().first.first;
            int j=q.front().first.second;
            int t=q.front().second;
            q.pop();
            ans=max(ans,t);
            if(i-1>=0 && a[i-1][j]==false && grid[i-1][j]==1){
                q.push({{i-1,j},t+1});
                a[i-1][j]=true;
            }
            if(i+1<m && a[i+1][j]==false && grid[i+1][j]==1){
                q.push({{i+1,j},t+1});
                a[i+1][j]=true;
            }
            if(j-1>=0 && a[i][j-1]==false && grid[i][j-1]==1){
                q.push({{i,j-1},t+1});
                a[i][j-1]=true;
            }
            if(j+1<n && a[i][j+1]==false && grid[i][j+1]==1){
                q.push({{i,j+1},t+1});
                a[i][j+1]=true;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && !a[i][j]){
                    return -1;
                }
            }
        }
        return ans;
    }
};
