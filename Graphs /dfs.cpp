/*
Description:
    Depth-First Search (DFS) on a graph.
    Visits all nodes reachable from the source node.
Time Complexity: O(v + e)
Space Complexity: O(v)
*/

const int N = 1e5;

vector<int> g[N];
bool vis[N]; // Must be initialized with false

void dfs(int u) {
    vis[u] = true;
    for (int v : g[u]) {
        if (!vis[v]) dfs(v);
    }
}