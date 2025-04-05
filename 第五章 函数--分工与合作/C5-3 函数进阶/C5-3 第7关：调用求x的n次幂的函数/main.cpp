#include <iostream>
using namespace std;
long power(long a, long b){
    long sum = 1;
    for (long i = 1; i <= b; ++i){
        sum *= a;
    }
    return sum;
}
int main(){
    long a, b;
    cin >> a >> b;
    cout <<power(a, b)<<endl;
    cout <<power(a, 3)<<endl;
    cout <<power(2, a+b)<<endl;
    cout <<power(power(a, 3), b+2)<<endl;
}
