#include <iostream>
using namespace std;
long jiecheng(int num);

long jiecheng(int num){
    if (num == 0){
        return 1;
    }
    return jiecheng(num - 1)*num;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout<<jiecheng(a)+jiecheng(b)+jiecheng(c);
}
