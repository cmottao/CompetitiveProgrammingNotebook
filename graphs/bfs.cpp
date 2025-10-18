/*
Description:
    Breadth-First Search (BFS) on an unweighted graph.
    Computes shortest distance from source node s to all reachable nodes.
Time Complexity: O(v + e)
Space Complexity: O(v)
*/

const int N = 1e5;

vector<int> g[N];
int dst[N]; // Must be initialized with -1

void bfs(int u) {
    queue<int> q; q.push(u);
    dst[u] = 0;

    while (!q.empty()) {
        int c = q.front(); q.pop();
        for (int s : g[c]) {
            if (dst[s] == -1) {
                dst[s] = dst[c] + 1;
                q.push(s);
            }
        }
    }
}