/*
Description:
    Topological Sort using DFS.
    Detects cycles in a Directed Acyclic Graph (DAG) and outputs nodes in topological order.
Time Complexity: O(v + e)
Space Complexity: O(v)
*/

const int N = 1e5;

vector<int> g[N], topo;
bool vis[N]; // Must be initialized with false
bool cycle = false;

void dfs(int u, vector<int> &state) {
    state[u] = 1; // visiting
    for (int v : g[u]) {
        if (state[v] == 0) dfs(v, state);
        else if (state[v] == 1) cycle = true; // cycle detected
    }
    state[u] = 2; // finished
    topo.push_back(u);
}

vector<int> topological_sort(int n) {
    vector<int> state(n + 1, 0); // 0 = unvisited, 1 = visiting, 2 = finished
    topo.clear(); cycle = false;
    for (int i = 1; i <= n; i++) {
        if (state[i] == 0) dfs(i, state);
    }
    reverse(topo.begin(), topo.end());
    return topo; // empty if there is a cycle, check `cycle`
}