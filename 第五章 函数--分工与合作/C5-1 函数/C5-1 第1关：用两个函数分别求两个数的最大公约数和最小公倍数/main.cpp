#include <iostream>
using namespace std;
long long find_gcd(long long a, long long b){
    if (b == 0){
        return a;
    }
    return find_gcd(b, a%b);
    
    return 0;
}

long long find_lcm(long long a, long long b){
    return (a*b)/find_gcd(a,b);
}

int main(){
    long long a, b;
    cin >> a >> b;
    if (a<=0 ||b<=0){
        cout<<"Input Error";
        return 0;
    }
    cout<<find_gcd(a,b)<<" "<< find_lcm(a,b);
}
