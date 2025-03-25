#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    vector<int> store;
    int num;

    for (int i = 0; i < 5; ++i) {
        cin >> num;
        store.push_back(num);
    }

    reverse(store.begin(), store.end());

    // 确保每个数都占 5 格宽度
    for (int i = 0; i < 5; ++i) {
        cout << setw(5) << store[i];
    }

    cout << endl; // 换行
    return 0;
}
