/*
Description:
    Floyd-Warshall algorithm for all-pairs shortest paths.
    Computes shortest distances between every pair of nodes in a weighted graph.
Time Complexity: O(v^3)
Space Complexity: O(v^2)
*/

const int N = 500; 
const long long oo = 1e18;

long long dist[N][N]; // Must be initialized with oo

void floydWarshall() {
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (dist[i][k] < oo && dist[k][j] < oo) { 
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
}