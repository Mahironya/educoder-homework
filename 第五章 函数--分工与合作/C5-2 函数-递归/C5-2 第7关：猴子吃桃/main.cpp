#include <iostream>
using namespace std;
int taoshu(int days){
    if (days == 10) return 1;
    return (taoshu(days+1)+1)*2;
}
int main(){
    int x;
    cin >> x;
    cout<<taoshu(x);
}
