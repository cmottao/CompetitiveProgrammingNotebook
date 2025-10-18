/*
Description:
    Depth-First Search (DFS) on a tree.
    Visits all nodes starting from the root.
Time Complexity: O(v)
Space Complexity: O(v)
*/

const int N = 1e5;
vector<int> t[N];

void dfs(int u, int p) {
    for (int v : t[u]) {
        if (v != p) dfs(v, u); 
    }
}