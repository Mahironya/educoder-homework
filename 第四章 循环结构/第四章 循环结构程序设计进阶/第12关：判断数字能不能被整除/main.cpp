#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;  // 输入正整数N
    
    int count = 0;  // 符合条件的数字计数器
    
    // 遍历[1, N]范围内的所有数字
    for (int i = 1; i <= N; ++i) {
        int sum = 0;  // 当前数字各位之和
        int num = i;  // 临时操作变量
        
        // 计算各位数字之和
        while (num > 0) {
            sum += num % 10;  // 取最后一位累加
            num /= 10;        // 移除最后一位
        }
        
        // 判断是否满足条件
        if (sum % 15 == 0) {
            ++count;
        }
    }
    
    cout << count << endl;  // 输出结果
    return 0;
}
