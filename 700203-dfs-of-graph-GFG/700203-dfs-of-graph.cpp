class Solution {
  public:

    void DFS(int node, vector<vector<int>>& adj, vector<int>& ans, vector<bool>& visited) {
        visited[node] = 1;
        ans.push_back(node);

        for(int j = 0; j < adj[node].size(); j++) {
            if(!visited[adj[node][j]]) {
                DFS(adj[node][j], adj, ans, visited);
            }
        }
    }

    vector<int> dfs(vector<vector<int>>& adj) {
        int V = adj.size();

        vector<bool> visited(V, 0);
        vector<int> ans;

        DFS(0, adj, ans, visited);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna