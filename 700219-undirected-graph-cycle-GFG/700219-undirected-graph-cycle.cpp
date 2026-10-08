class Solution {
  public:

    bool DFS(int node, int parent, vector<vector<int>>& adj,
             vector<int>& visited) {

        visited[node] = 1;

        for(int j = 0; j < adj[node].size(); j++) {

            int neighbor = adj[node][j];
            
            if(neighbor == parent)
                continue;

            if(visited[neighbor] == 1)
                return 1;

            if(DFS(neighbor, node, adj, visited))
                return 1;
        }

        return 0;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {

        vector<vector<int>> adj(V);

        // Build adjacency list
        for(auto edge : edges) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> visited(V, 0);

        // Check all components
        for(int i = 0; i < V; i++) {
            if(visited[i] == 0) {
                if(DFS(i, -1, adj, visited))
                    return 1;
            }
        }

        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna