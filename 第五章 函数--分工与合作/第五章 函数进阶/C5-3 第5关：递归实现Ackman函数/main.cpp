#include <iostream>
using namespace std;
int ackman(int m, int n){
    if (m == 0 && n > 0) return n+1;
    if (n == 0 && m > 0) return ackman(m-1, 1);
    if (n > 0 && m > 0) return ackman(m-1, ackman(m, n-1));
    return 0;
}
int main(){
    int m, n;
    cin >> m >> n;
    cout<<ackman(m, n);
}
