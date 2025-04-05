#include <iostream>
#include <iomanip>
using namespace std;

double funP(int n, double x) {
    if (n == 0) return 1;
    if (n == 1) return x;
    return ((2 * n - 1) * funP(n - 1, x) - (n - 1) * funP(n - 2, x)) / n;
}

int main() {
    int n;
    double x;
    cin >> n >> x;
    
    // Output with specified formatting
    printf("P(%d, %.2f)=", n, x);
    cout << fixed << setprecision(5) << funP(n, x); // Limiting the output to 6 decimal places
    return 0;
}
