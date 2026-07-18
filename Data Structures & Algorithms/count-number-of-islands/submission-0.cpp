class Solution {
public:
    void dfs(int i,int j,int m,int n,vector<vector<char>>& grid,vector<vector<bool>>&a){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]!='1' || a[i][j]){
            return;
        }
        a[i][j]=true;
        dfs(i+1,j,m,n,grid,a);
        dfs(i-1,j,m,n,grid,a);
        dfs(i,j+1,m,n,grid,a);
        dfs(i,j-1,m,n,grid,a);
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool>>a(m,vector<bool>(n,false));
        int island=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1' && !a[i][j]){
                    dfs(i,j,m,n,grid,a);
                    island++;
                }
            }
        }
        return island;
    }
};
