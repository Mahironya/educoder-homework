#include<iostream>
using namespace std;
void printsequence(int sequence[], int size){
    for (int i = 0; i<= size - 1; ++i){
        cout<<sequence[i]<<" ";
    }
}
int main(){
    int length = 0;
    cin >> length;
    int pop_num[length];
    for (int i = 0; i<length; ++i){
        int num_input;
        cin >> num_input;
        pop_num[i] = num_input;
    }
    for (int i = 0; i < length; ++i){
        for (int j = 0; j < length-i-1; ++j){
//            int pointer = 1+j;
            if (pop_num[j] > pop_num[j+1]){
                swap(pop_num[j], pop_num[j+1]);
            }
        }
        if (i<length-1){
            printsequence(pop_num, length);
            cout<<endl;
        }
    }
}
