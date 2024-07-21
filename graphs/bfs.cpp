const int N = 1e5;
vector<int> g[N];
int dst[N];

// Time complexity: O(n)
void bfs(int u) {
    queue<int> q; q.push(u);
    dst[u] = 0;

    while(!q.empty()) {
        int c = q.front(); q.pop();

        for(int s : g[c]) {
            if(dst[s] == -1) {
                dst[s] = dst[c] + 1;
                q.push(s);   
            }
        }
    }
}