/*
Description:
    Computes a^b efficiently using binary exponentiation.
Time Complexity: O(log b)
Space Complexity: O(1)
*/

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a);
        b >>= 1;
        a *= a;
    }
    return res;
}