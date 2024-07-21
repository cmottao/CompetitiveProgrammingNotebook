const int N = 1e5;
vector<int> g[N];
bool vis[N];

// Time complexity: O(n)
void dfs(int u) {
    vis[u] = 1;

    for(int s : g[u]) {
        if(!vis[s]) dfs(s);
    }
}