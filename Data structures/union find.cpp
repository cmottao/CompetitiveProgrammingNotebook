/*
Description:
    Union-Find data structure with path compression and union by rank.
    Supports finding the set representative, merging sets, and querying the size of a set.
Time Complexity:
    findSet / unionSet: O(α(n)) amortized
Space Complexity: O(n)
*/

struct UnionFind {
    vector<int> rank, parent, setSize;

    UnionFind(int size) {
        rank.assign(size, 0);
        parent.assign(size, 0);
        setSize.assign(size, 1);
        for (int i = 0; i < size; i++) {
            parent[i] = i;
        }
    }

    int findSet(int i) {
        if (parent[i] == i) return i;
        return parent[i] = findSet(parent[i]);
    }

    void unionSet(int i, int j) {
        int x = findSet(i), y = findSet(j);
        if (x == y) return;

        if (rank[x] > rank[y]) swap(x, y);
        parent[x] = y;
        if (rank[x] == rank[y]) rank[y]++;
        setSize[y] += setSize[x];
    }

    int sizeOfSet(int i) {
        return setSize[findSet(i)];
    }
};