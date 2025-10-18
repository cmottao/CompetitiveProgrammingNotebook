/*
Description:
    Generates all permutations using backtracking.
Time Complexity: O(n!)
Space Complexity: O(n) 
*/

const int N = 20;

int n;
vector<int> permutation;
bool chosen[N];

void search() {
    if ((int)permutation.size() == n) {
        // process permutation
    } else {
        for (int i = 0; i < n; i++) {
            if (chosen[i]) continue;
            chosen[i] = 1;
            permutation.push_back(i);
            search();
            chosen[i] = 0;
            permutation.pop_back();
        }
    }
}