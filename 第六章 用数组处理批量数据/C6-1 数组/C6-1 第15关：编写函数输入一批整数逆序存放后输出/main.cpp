#include<stdio.h>
#include<iostream>
using namespace std;
#define N 100

void inputarr(int *p, int *n);
void reverse(int *p, int n);
void outputarr(int *p, int n);

/********** Begin **********/
int main() {
    int arr[N];
    int len;
    inputarr(arr, &len);
    reverse(arr, len);
    outputarr(arr, len);
    return 0;
}

void inputarr(int *p, int *n) {
    int x;
    *n = 0;
    while (cin >> x && x != 0) {
        p[*n] = x;
        (*n)++;
    }
}

void reverse(int *p, int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = p[i];
        p[i] = p[n - 1 - i];
        p[n - 1 - i] = temp;
    }
}

void outputarr(int *p, int n) {
    for (int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }
}
/********** End **********/
