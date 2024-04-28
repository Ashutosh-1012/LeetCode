class Solution {
public:
    int firstDistance;

    int findChildren(int node, int prevNode, vector<int>& children, vector<vector<int>>& adjList) {
        int res = 0;
        for (int child : adjList[node]) {
            if (child == prevNode) continue;
            res += 1 + findChildren(child, node, children, adjList);
        }
        children[node] = res;
        firstDistance += res;
        return res;
    }

    void calculateDistances(int node, int parentNode, vector<int>& children, vector<vector<int>>& adjList, vector<int>& res, int n) {
        if (parentNode == -1) res[node] = firstDistance;
        else res[node] = res[parentNode] + n - 2 * children[node] - 2;
        for (int i : adjList[node]) {
            if (i == parentNode) continue;
            calculateDistances(i, node, children, adjList, res, n);
        }
    }

    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adjList(n, vector<int>());
        for (const vector<int>& v : edges) {
            adjList[v[0]].push_back(v[1]);
            adjList[v[1]].push_back(v[0]);
        }
        vector<int> children(n);
        firstDistance = 0;
        findChildren(0, -1, children, adjList);
        vector<int> res(n);
        calculateDistances(0, -1, children, adjList, res, n);
        return res;
    }
};
