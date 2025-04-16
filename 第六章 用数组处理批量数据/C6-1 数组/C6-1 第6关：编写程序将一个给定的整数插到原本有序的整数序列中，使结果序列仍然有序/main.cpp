#include <iostream>
using namespace std;
void printsequence(int sequence[], int size){
    for (int i = 0; i<= size - 1; ++i){
        cout<<sequence[i]<<" ";
    }
}
int main(){
    int length;
    cin >> length;
    int sequence_store[length + 1];
    // input num
    for (int i = 0; i < length; ++i){
        int num_input;
        cin >> num_input;
        sequence_store[i] = num_input;
    }
    int add_num;
    int mid, pos = length;
    cin >> add_num;
    int left = 0, right = length - 1;
    while (left <= right){
        mid = (left+right)/2;
        if (sequence_store[mid] == add_num){
            pos = mid;
            break;
        }
        if (sequence_store[mid] < add_num){
            left = mid + 1;
        }else{
            pos = mid;
            right = mid - 1;
        }
    }
    
    for (int i = length; i > pos; i--){
        sequence_store[i] = sequence_store[i-1];
    }
    
    sequence_store[pos] = add_num;
    printsequence(sequence_store, length+1);
}
