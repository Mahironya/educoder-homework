#include <iostream>
using namespace std;
int calculate_sum(int num){
    if (num == 0) return 0; //test
    if (num == 1) return 1;
    return num + calculate_sum(num - 1);
}

int main(){
    int num;
    cin >> num;
    cout << calculate_sum(num);
}
