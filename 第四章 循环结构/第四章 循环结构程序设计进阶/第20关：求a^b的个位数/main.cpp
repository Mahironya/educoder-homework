//important
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int last_digit = a % 10;
    if (last_digit == 0) {
        cout << 0 << endl;
        return 0;
    }
    if (last_digit == 1 || last_digit == 5 || last_digit == 6) {
        cout << last_digit << endl;
        return 0;
    }
    int cycle = (last_digit == 4 || last_digit == 9) ? 2 : 4;
    int reduced_exp = b % cycle;
    if (reduced_exp == 0) reduced_exp = cycle;
    int result = 1;
    for (int i = 0; i < reduced_exp; ++i) {
        result = (result * last_digit) % 10;
    }
    
    cout << result << endl;
    return 0;
}
