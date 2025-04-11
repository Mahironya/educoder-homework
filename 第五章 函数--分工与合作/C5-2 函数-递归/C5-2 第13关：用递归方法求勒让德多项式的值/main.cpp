#include <iostream>
#include <iomanip>
using namespace std;
double myFunc(double x, double n){
    if (n == 0) return 1;
    if (n == 1) return x;
    return ((2*n - 1)/n)*x*myFunc(x, n-1) - ((n-1)/n)*myFunc(x, n-2);
}
int main(){
    double x, n;
    cin >> x >> n;
    cout<<fixed<<setprecision(2)<< myFunc(x, n);
}
