#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
long calculate_factor_sum(long num_input){
    long sum = 1;
    if (num_input == 0) return 0;
    if (num_input == 1) return 0;
    for (long i = 2; i <= sqrt(num_input); ++i){
        if (num_input % i == 0){
            sum += i;
            long another =  num_input / i;
            if (another != i & another != num_input){
                sum += another;
            }
        }
    }
    return sum;
    return 0;
}
int main(){
    for (int i = 1; i <= 3000; ++i){
        for (int j = i; j <= 3000; ++j){
            if (calculate_factor_sum(i) == j && calculate_factor_sum(j) == i){
                cout<<"("<<i<<","<<j<<")";
                continue;
            }
        }
    }
}
