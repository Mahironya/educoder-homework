#include<iostream>
//#include <string>
using namespace std;
int main(){
    int quantity, num_input;
    cin >> quantity;
    int number_store[quantity];
    for (int i = 0; i <= quantity - 1; ++i){
        cin >> num_input;
        number_store[i] = num_input;
    }
    for (int i = 1; i <= quantity - 1; ++i){
        if (number_store[i-1]>number_store[i]){
            swap(number_store[i-1], number_store[i]);
        }
    }
    for (int x:number_store){
        cout<<x<<" ";
    }
}
