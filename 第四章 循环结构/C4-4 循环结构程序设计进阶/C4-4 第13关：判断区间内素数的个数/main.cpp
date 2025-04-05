#include <iostream>
using namespace std;

int main() {
    int m, n, count = 0;
    cin >> m >> n;

    // 确保起始数字大于1
    if(m < 2) m = 2;  // 最小素数是2
    
    for(int num = m; num <= n; ++num) {
        bool is_prime = true;
        
        // 检查是否为素数
        for(int i = 2; i*i <= num; ++i) {
            if(num % i == 0) {
                is_prime = false;
                break;
            }
        }
        
        if(is_prime) ++count;
    }

    cout << count;
    return 0;
}
