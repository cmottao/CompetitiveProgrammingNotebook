/*
Description:
    Generates all subsets using backtracking.
Time Complexity: O(2^n)
Space Complexity: O(n)
*/

int n;
vector<int> subset;

void search(int k) {
    if (k == n) {
        // process subset
    } else {
        search(k + 1);    
        subset.push_back(k);
        search(k + 1);      
        subset.pop_back();
    }
}