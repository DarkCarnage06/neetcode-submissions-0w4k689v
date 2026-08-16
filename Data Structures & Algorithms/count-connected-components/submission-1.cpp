class Solution {
public:
    void dfs(int src,vector<bool>&vis,vector<vector<int>>&adj){
        vis[src]=true;
        for(int v:adj[src]){
            if(!vis[v]){
                dfs(v,vis,adj);
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
         vector<bool>vis(n,false);
         vector<vector<int>>adj(n);
         for(auto edge:edges){
            int u=edge[0];
            int v=edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
         }
         int count =0;
         for(int i=0;i<n;i++){
            if(!vis[i]){
              dfs(i,vis,adj);
              count++;
            }
         }
         return count;
    }
};
