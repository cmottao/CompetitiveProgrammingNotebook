/*
Description:
    Ordered Set using a Policy-Based Data Structure (PBDS) in C++.
    Supports insertion, deletion, finding elements by order, and counting elements less than a value.
Time Complexity:
    insert / delete / find_by_order / order_of_key: O(log n)
Space Complexity: O(n)
*/

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;