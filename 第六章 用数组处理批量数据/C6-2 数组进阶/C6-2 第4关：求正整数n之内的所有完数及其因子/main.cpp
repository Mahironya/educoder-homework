#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; ++i) {
        int store[1000];
        int temp_len = 0;
        int temp_sum = 0;
        for (int j = 1; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                if (j != i) {
                    store[temp_len++] = j;
                    temp_sum += j;
                }
                int k = i / j;
                if (k != j && k != i) {
                    store[temp_len++] = k;
                    temp_sum += k;
                }
            }
        }
        for(int i = 0; i < temp_len-1; i++){
            for (int j = 0; j < temp_len-i-1; j++){
                if (store[j+1] < store[j]){
                    swap(store[j+1], store[j]);
                }
            }
        }
        if (temp_sum == i) {
            cout << i << "=";
            for (int k = 0; k < temp_len; ++k) {
                cout << store[k];
                if (k < temp_len - 1)
                    cout << "+";
            }
            cout << endl;
        }
    }

    return 0;
}
