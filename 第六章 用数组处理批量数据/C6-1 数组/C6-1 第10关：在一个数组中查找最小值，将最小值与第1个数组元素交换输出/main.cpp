#include <iostream>
#include <climits>
using namespace std;
void printsequence(int sequence[], int size){
    for (int i = 0; i<= size - 1; ++i){
        cout<<sequence[i]<<" ";
    }
}
int main(){
    int n, x, min = INT_MAX, temp = 0;
    cin >> n;
    int store[n];
    for (int i = 0; i < n; ++i){
        cin >> x;
        store[i] = x;
        if (x < min){
            min = x;
            temp = i;
        }
    }
    swap(store[0], store[temp]);
    printsequence(store, n);
}
