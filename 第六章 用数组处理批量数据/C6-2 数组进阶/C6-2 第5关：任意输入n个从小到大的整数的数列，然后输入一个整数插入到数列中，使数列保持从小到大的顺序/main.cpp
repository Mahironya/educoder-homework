#include <stdio.h>
#include <iostream>
using namespace std;
#define N 100

int main() {
    int store[N], len, pos, tgt;
    cin >> len;
    for (int i = 0; i < len; ++i) {
        cin >> store[i];
    }
    cin >> tgt;

    int left = 0;
    int right = len - 1;
    pos = len;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (store[mid] == tgt) {
            pos = mid;
            break;
        } else if (store[mid] < tgt) {
            left = mid + 1;
        } else {
            right = mid - 1;
            pos = mid;
        }
    }

//    if (pos == len || store[pos] != tgt) {
//        pos = left;
//    }

    for (int p = len; p > pos; --p) {
        store[p] = store[p - 1];
    }
    store[pos] = tgt;

    for (int i = 0; i < len + 1; ++i) {
        cout << store[i] << " ";
    }

    return 0;
}
