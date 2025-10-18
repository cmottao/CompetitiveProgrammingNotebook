/*
Description:
    Useful math constants and functions.
*/

const double PI = acos(-1.0);

// Precision printing
inline void print_precise(double x, int prec = 6) {
    cout << fixed << setprecision(prec) << x << '\n';
}