class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>> graph[n];

        for (auto flight : flights) {
            int u = flight[0];
            int v = flight[1];
            int wt = flight[2];

            graph[u].push_back({v, wt});
        }

        queue<pair<int, pair<int,int>>> q;
        // {node, {cost, stops}}

        vector<int> dist(n, INT_MAX);
        dist[src] = 0;

        q.push({src, {0, 0}});

        while (!q.empty()) {
            auto curr = q.front();
            q.pop();

            int u = curr.first;
            int cost = curr.second.first;
            int stops = curr.second.second;

            // At most k stops = k+1 flights
            if (stops > k)
                continue;

            for (auto edge : graph[u]) {
                int v = edge.first;
                int wt = edge.second;

                if (cost + wt < dist[v]) {
                    dist[v] = cost + wt;

                    q.push({v, {dist[v], stops + 1}});
                }
            }
        }

        return dist[dst] == INT_MAX ? -1 : dist[dst];
    }
};