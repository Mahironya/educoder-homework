#include <iostream>
using namespace std;

int main() {
    int m, n, count = 0;
    cin >> m >> n;

    int start = min(m, n);
    int end = max(m, n);

    for (int num = start; num <= end; ++num) {
        int sum = 0;
        for (int i = 1; i <= num / 2; ++i) {
            if (num % i == 0) {
                sum += i;
            }
        }
        if (sum == num && num != 0) {
            ++count;
        }
    }

    cout << count << endl;
    return 0;
}
