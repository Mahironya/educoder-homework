#include <iostream>
using namespace std;
long fac_recursion(long n){
    if (n == 0) return 1;
    return n*fac_recursion(n-1);
}

long fac_loop(long n){
    long sum = 1;
    for (long i = n; i>=1; --i){
        sum*= i;
    }
    return sum;
}

int main(){
    long n;
    cin >> n;
    cout<<"递归算法求得"<<n<<"! = "<<fac_recursion(n)<<" "<<endl;
    cout<<"循环算法求得"<<n<<"! = "<<fac_loop(n)<<" "<<endl;
}
