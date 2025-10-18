/*
Description:
    0/1 Knapsack Problem.
    Given n items with weight and value, select a subset to maximize value without exceeding capacity m.
Time Complexity: O(n * m)
Space Complexity: O(2 * m) (optimized using only 2 rows)
*/

void knapsack() {
    int n, m; cin >> n >> m;
    vector<pair<int, int>> items(n); // {weight, value}
    for (auto &p : items) cin >> p.first;
    for (auto &p : items) cin >> p.second;

    vector<vector<long long>> dp(2, vector<long long>(m + 1, 0)); // only 2 rows needed

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (j >= items[i-1].first)
                dp[i % 2][j] = max(dp[!(i % 2)][j], dp[!(i % 2)][j - items[i - 1].first] + items[i - 1].second);
            else
                dp[i % 2][j] = dp[!(i % 2)][j];
        }
    }
    cout << dp[!(n % 2)][m];
}