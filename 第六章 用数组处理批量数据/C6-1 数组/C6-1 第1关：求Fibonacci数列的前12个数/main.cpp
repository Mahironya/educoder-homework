#include <iostream>
using namespace std;
int main(){
    int fib[12] = {0};
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 0; i < 12; ++i){
        if (i < 2){
            cout<<"第"<<i+1<<"月："<<fib[i]<<endl;
            
        }else{
            fib[i] = fib[i-1] + fib[i-2];
            cout<<"第"<<i+1<<"月："<<fib[i]<<endl;
        }
    }
}
