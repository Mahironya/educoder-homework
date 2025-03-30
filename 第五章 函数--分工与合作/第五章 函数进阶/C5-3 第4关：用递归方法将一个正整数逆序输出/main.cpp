#include <iostream>
using namespace std;
void reversenum(int num){
    if (num == 0){
        return;
    }
    cout << num % 10;
    reversenum(num / 10);
}
int main(){
    int num;
    cin >> num;
    reversenum(num);
}
