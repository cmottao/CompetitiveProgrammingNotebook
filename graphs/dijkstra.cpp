/*
Description:
    Dijkstra's algorithm for shortest paths from source in a weighted graph with non-negative edges.
Time Complexity: O((v + e) log v)
Space Complexity: O(v)
*/

const int N = 1e5;
const long long oo = 1e18;

vector<pair<int,int>> adj[N]; // pair<neighbor, weight>
long long dst[N]; // Must be initialized with oo

void dijkstra(int s) {
    dst[s] = 0;
    priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<>> pq;
    pq.push({0, s});

    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        if (d != dst[u]) continue;

        for (auto [v, w] : adj[u]) {
            if (dst[v] > dst[u] + w) {
                dst[v] = dst[u] + w;
                pq.push({dst[v], v});
            }
        }
    }
}