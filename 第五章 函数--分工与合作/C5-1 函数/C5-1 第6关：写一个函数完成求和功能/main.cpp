#include <iostream>
using namespace std;
long sum(long num_input){
    if (num_input == 1){
        return 1;
    }
    return num_input + sum(num_input - 1);
}
int main(){
    long n;
    cin >> n;
    cout<<sum(n);
}
