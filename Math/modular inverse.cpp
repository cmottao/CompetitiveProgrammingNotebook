/*
Description:
    Computes the modular inverse of a modulo m using Fermat's little theorem.
Time Complexity: O(log m)
Space Complexity: O(1)
*/

long long modinv(long long a, long long m) {
    long long res = 1;
    long long b = m - 2;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}