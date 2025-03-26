#include<iostream>
using namespace std;
int sequence(int num_input){
    if (num_input == 1 || num_input == 2) return 1;
    return 3*(sequence(num_input - 1)) + 2*sequence(num_input - 2);
}
int main(){
    int num, sum = 0;
    cin >> num;
    cout<<sequence(num)<<endl;
    for (int i = 1; i <= num; ++i){
        sum += sequence(i);
    }
    cout<<sum;
}
