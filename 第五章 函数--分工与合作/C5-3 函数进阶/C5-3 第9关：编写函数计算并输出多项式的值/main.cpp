#include <iostream>
#include <iomanip>
using namespace std;
double calculate_sum(int n){
    double sum = 0;
    int fraction = 0;
    for (int i = 1; i <= n; ++i){
        fraction += i;
        sum += 1.0/(fraction);
    }
    return sum;
}
int main(){
    int n;
    cin >> n;
    cout<<fixed<<"s="<<setprecision(6)<<calculate_sum(n);
}
