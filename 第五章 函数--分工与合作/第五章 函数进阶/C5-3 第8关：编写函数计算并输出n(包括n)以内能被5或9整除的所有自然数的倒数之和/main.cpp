#include <iostream>
#include <iomanip>
using namespace std;
double check(int num){
    if (num % 5 == 0 || num % 9 == 0){
        return 1.0/num;
    }
    return 0;
}
int main(){
    int num;
    double sum = 0;
    cin >> num;
    for (int i = 1; i <= num; ++i){
        sum += check(i);
    }
    cout<<fixed<<setprecision(2)<<sum;
    return 0;
}
