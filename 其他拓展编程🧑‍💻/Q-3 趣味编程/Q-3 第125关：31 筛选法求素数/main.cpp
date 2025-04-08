#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n) {
    vector<int> a(n + 1);
    int count = 0;

    // 初始化，从 2 到 n
    for (int i = 2; i <= n; i++) {
        a[i] = i;
    }

    int i = 2;
    while (i < n) {
        // 把当前素数的倍数筛掉
        for (int j = a[i] * 2; j <= n; j += a[i]) {
            a[j] = 0;
        }
        i++;
        while (i <= n && a[i] == 0) {
            i++;
        }
    }

    // 统计剩下的素数数量
    for (int i = 2; i <= n; i++) {
        if (a[i] != 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cout << "请输入一个正整数 n：";
    cin >> n;

    int result = countPrimes(n);
    cout << "2 到 " << n << " 之间的素数个数是：" << result << endl;

    return 0;
}
