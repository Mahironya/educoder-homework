#include <iostream>
using namespace std;

int main() {
    int n, x, count = 0;
    cin >> n >> x;

    for (int i = 1; i <= n; ++i) {
        int num = i;
        while (num > 0) {
            int digit = num % 10;
            if (digit == x) ++count;
            num /= 10;
        }
    }

    cout << count << endl;
    return 0;
}
