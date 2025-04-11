#include <iostream>
using namespace std;
int calculate_age(int num){
    if (num == 1) return 10;
    return 2 + calculate_age(num-1);
}
int main(){
    int num;
    cin >> num;
    cout<<calculate_age(num);
}
