class Solution {
public:
    int dfs(int i,int j,int n,int m,vector<vector<bool>>& vis,vector<vector<int>>& grid){
        if(i<0||j<0||i>=n||j>=m||vis[i][j]||grid[i][j]==0){
           return 0;
        }
        vis[i][j]=true;
        int area=1;
        area+=dfs(i+1,j,n,m,vis,grid);
        area+=dfs(i,j+1,n,m,vis,grid);
        area+=dfs(i-1,j,n,m,vis,grid);
        area+=dfs(i,j-1,n,m,vis,grid);
        return area;
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int area=0;
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int currarea=dfs(i,j,n,m,vis,grid);
                area=max(area,currarea);
            }
        }
        return area;
    }
};
