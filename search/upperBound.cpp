const int N = 1e5;
int a[N];

// Time complexity: O(log(e - b))
int upperBound(int b, int e, int t) {
    int l = 0, r = e;

    while(r > l) {
        int m = (l + r) / 2;
        (a[m] > t) ? l = m : r = m + 1;
    }
    return r;
}