class Solution {
public:
    bool dfs(int src, int parent, vector<bool>& vis,
             vector<vector<int>>& adj) {

        vis[src] = true;

        for (int v : adj[src]) {

            // Ignore the edge from child back to parent
            if (v == parent)
                continue;

            // Already visited => cycle
            if (vis[v])
                return false;

            // DFS
            if (!dfs(v, src, vis, adj))
                return false;
        }

        return true;
    }

    bool validTree(int n, vector<vector<int>>& edges) {

        // A tree with n nodes must have n-1 edges
        if (edges.size() != n - 1)
            return false;

        vector<bool> vis(n, false);

        vector<vector<int>> adj(n);

        for (auto edge : edges) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // Check cycle
        if (!dfs(0, -1, vis, adj))
            return false;

        // Check connected
        for (int i = 0; i < n; i++) {
            if (!vis[i])
                return false;
        }

        return true;
    }
};