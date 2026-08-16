class Solution {
public:
    bool iscycle(int src,vector<bool>&recpath,vector<bool>&vis,vector<vector<int>>& edges){
        vis[src]=true;
        recpath[src]=true;
       
        for(int i=0;i<edges.size();i++){
             int v=edges[i][0];
              int u=edges[i][1];
            if(src==u){
               if(!vis[v]){
                if(iscycle(v,recpath,vis,edges)){
                    return true;
                }
                }else if(recpath[v]){
                    return true;
               }
            }
        }
        recpath[src]=false;
        return false;
    }
    void topological(int src,vector<bool>&vis,vector<bool>&recpath,vector<vector<int>>& edges,stack<int>&s){
        vis[src]=true;
       
       
        for(int i=0;i<edges.size();i++){
             int v=edges[i][0];
        int u=edges[i][1];
            if(src==u){
               if(!vis[v]){
                topological(v,vis,recpath,edges,s);
                }
               }
            }
        s.push(src);
        
        
    }
    vector<int> findOrder(int n, vector<vector<int>>& edges) {
        vector<bool>vis(n,false);
        vector<bool>recpath(n,false);
        vector<int>ans;
        for(int i=0;i<n;i++){
           
            if(!vis[i]){
                if(iscycle(i,vis,recpath,edges)){
                   return ans;
                }
            }
        }
        stack<int>s;
        vis.assign(n,false);
        for(int i=0;i<n;i++){
           
            if(!vis[i]){
                topological(i,vis,recpath,edges,s);
            }
        }
        while(s.size()>0){
           ans.push_back(s.top());
           s.pop();

        }
        return ans;

    }
};