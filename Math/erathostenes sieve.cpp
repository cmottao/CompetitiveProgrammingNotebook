/*
Description:
    Finds all prime numbers up to a given integer n using the sieve method.
Time Complexity: O(n log log n)
Space Complexity: O(n)
*/

vector<int> sieve(int n) {
    vector<bool> isPrime(n + 1, 1);
    isPrime[0] = isPrime[1] = 0;
    
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = 0;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) primes.push_back(i);
    }
    return primes;
}