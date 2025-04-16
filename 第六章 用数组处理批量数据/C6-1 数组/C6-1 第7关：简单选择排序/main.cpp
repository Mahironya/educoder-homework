#include<iostream>
#include<climits>
using namespace std;
void printsequence(int sequence[], int size){
    for (int i = 0; i<= size - 1; ++i){
        cout<<sequence[i]<<" ";
    }
}
int main(){
    int length;
    int num;
    cin >> length;
    int store[length];
    for (int i = 0; i < length; ++i){
        cin >> num;
        store[i] = num;
    }
    int temp = 0;
    
    for (int i = 0; i < length; ++i){
        int min = INT_MAX;
        for (int j = i; j < length; ++j){
            if (store[j] < min){
                min = store[j];
                temp = j;
            }
        }
        swap(store[temp], store[i]);
        if (i < length - 1){
            printsequence(store, length);
            cout<<endl;
        }
    }
}
