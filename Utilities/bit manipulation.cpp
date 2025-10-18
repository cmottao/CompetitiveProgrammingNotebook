/*
Description:
    Useful bit manipulation tricks.
*/

// Test k-th bit
inline bool test_bit(int x, int k) { return (x >> k) & 1; }

// Set k-th bit
inline int set_bit(int x, int k) { return x | (1 << k); }

// Unset k-th bit
inline int unset_bit(int x, int k) { return x & ~(1 << k); }

// Toggle k-th bit
inline int toggle_bit(int x, int k) { return x ^ (1 << k); }

// Count set bits
inline int count_bits(int x) { return __builtin_popcount(x); }

// Lowest set bit
inline int lowbit(int x) { return x & -x; }

// Iterate all subsets of mask
inline void iterate_subsets(int mask, function<void(int)> f) {
    for (int sub = mask; sub; sub = (sub-1)&mask) f(sub);
}