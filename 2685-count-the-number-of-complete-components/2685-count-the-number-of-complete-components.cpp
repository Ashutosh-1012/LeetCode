class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        // Visted vecctor to help tracking components
        vector<bool> visited(n, false);
        vector<vector<int>> graph(n);
        // Add edges to graph
        for (auto edge : edges) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }

        int completeomponent = 0;
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                auto [n, edges] = bfs(graph, i, visited);
                // Calculate conditiopn for component to be complete
                int toBeComplete = (n * (n - 1)) / 2;
                if (toBeComplete == edges) {
                    completeomponent++;
                }
            }
        }
        return completeomponent;
    }
    pair<int, int> bfs(vector<vector<int>>& graph, int start, vector<bool>& visited) {
        
        visited[start] = 1;
        queue<int> q;
        q.push(start);
        int vertecies = 1;
        int edges = 0;

        while (!q.empty()) {
            auto node = q.front();
            q.pop();

            for (auto nbr : graph[node]) {
                // Count edge
                edges++;
                if (!visited[nbr]) {
                    vertecies++;
                    visited[nbr] = 1;
                    q.push(nbr);
                }
            } 
        }
         edges /= 2;
        return {vertecies, edges};
    }
};