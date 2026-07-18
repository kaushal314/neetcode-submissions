class Solution {
public:
    int dfs(int i,int j,int m,int n,vector<vector<int>>& grid,vector<vector<bool>>&a){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]!=1 || a[i][j]){
            return 0;
        }
        a[i][j]=true;
        int area=1;
        area+=dfs(i+1,j,m,n,grid,a);
        area+=dfs(i-1,j,m,n,grid,a);
        area+=dfs(i,j+1,m,n,grid,a);
        area+=dfs(i,j-1,m,n,grid,a);
        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
         int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool>>a(m,vector<bool>(n,false));
        int maxarea=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && !a[i][j]){
                    int area=dfs(i,j,m,n,grid,a);
                    maxarea=max(maxarea,area);
                }
            }
        }
        return maxarea;
    }
};
