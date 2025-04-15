#include <iostream>
#include <vector>
using namespace std;
void printPrimes(int n) {
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
    int helper = 0;
    for (int i = 2; i <= n; i++) {
        if (a[i] != 0) {
            helper++;
            cout<<a[i]<<"\t";
            if (helper%10 == 0){
                cout<<endl;
            }
        }
    }

}
int main(){
    printPrimes(100);
}
