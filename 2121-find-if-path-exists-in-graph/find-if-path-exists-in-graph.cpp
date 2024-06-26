class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adjList(n);
    for (const vector<int>& edge : edges) {
        int u = edge[0], v = edge[1];
        adjList[u].push_back(v);
        adjList[v].push_back(u); 
    }

   vector<bool> visited(n, false);
    return dfs(adjList, visited, source, destination);
}

bool dfs(const vector<vector<int>>& adjList, vector<bool>& visited, int current, int destination) {
    if (current == destination) {
        return true; 
    }

    visited[current] = true; 
    for (int neighbor : adjList[current]) {
        if (!visited[neighbor]) {
            if (dfs(adjList, visited, neighbor, destination)) {
                return true; 
            }
        }
    }

    return false;
        
    }
};