#include <iostream>
using namespace std;
int fib(int times){
    if (times == 1) return 1;
    if (times == 2) return 1;
    return fib(times-1) + fib(times-2);
}
int main(){
    int n;
    cin >> n;
    cout<<fib(n);
}
