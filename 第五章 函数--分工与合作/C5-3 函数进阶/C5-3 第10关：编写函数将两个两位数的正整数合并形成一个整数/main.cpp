#include <iostream>
using namespace std;
int to_merge(int a, int b){
    int m, n, p, q;
    // qm pn
    m = a%10;
    a /= 10;
    n = a;
    p = b%10;
    b /= 10;
    q = b;
    return q*10+m*1+p*1000+n*100;
}
int main(){
    int a, b;
    cin >> a >> b;
    cout<<"c="<<to_merge(a, b);
}
