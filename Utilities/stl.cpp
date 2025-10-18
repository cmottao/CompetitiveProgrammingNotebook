/*
Description:
    Useful STL utilities for vectors and general containers.
    Includes removing duplicates, min/max element, iota, and erase operations.
*/

// Remove adjacent duplicates (vector must be sorted if you want all duplicates)
template<typename T>
void remove_adjacent_duplicates(vector<T> &v) {
    v.erase(unique(v.begin(), v.end()), v.end());
}

// Remove all duplicates
template<typename T>
void remove_all_duplicates(vector<T> &v) {
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
}

// Fill vector with consecutive values from i
template<typename T>
void fill_consecutive(vector<T> &v, T start) {
    iota(v.begin(), v.end(), start);
}

// Min / Max elements
template<typename T>
T min_value(const vector<T> &v) { return *min_element(v.begin(), v.end()); }

template<typename T>
T max_value(const vector<T> &v) { return *max_element(v.begin(), v.end()); }

// Erase element at position
template<typename T>
void erase_at(vector<T> &v, size_t pos) { v.erase(v.begin() + pos); }
