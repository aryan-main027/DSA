
class Solution {
  public:
    int shortestPath(int V, vector<vector<int>> &edges, int src, int dest) {
        vector<vector<int>> adj(V);

        for (int i = 0; i < edges.size(); i++) {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        vector<int> dist(V, -1);
        vector<int> visited(V, 0);

        queue<int> q;

        q.push(src);
        dist[src] = 0;
        visited[src] = 1;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (int neighbor : adj[node]) {
                if (visited[neighbor])
                    continue;

                visited[neighbor] = 1;
                q.push(neighbor);
                dist[neighbor] = dist[node] + 1;
            }
        }

        return dist[dest];
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna