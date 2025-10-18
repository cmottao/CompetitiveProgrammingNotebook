/*
Description:
    Fenwick Tree for range sum queries and point updates.
    Supports constructing from an array, adding a value to an element, and querying prefix sums or ranges efficiently.
Time Complexity:
    add / sum: O(log n)
Space Complexity: O(n)
*/

struct FenwickTree {
    vector<int> bit;  
    int n;

    FenwickTree(int n) {
        this->n = n;
        bit.assign(n, 0);
    }

    int sum(int r) {
        int ret = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1) {
            ret += bit[r];
        }
        return ret;
    }

    int sum(int l, int r) {
        return sum(r) - sum(l - 1);
    }

    void add(int idx, int delta) {
        for (; idx < n; idx = idx | (idx + 1)) {
            bit[idx] += delta;
        }
    }
};