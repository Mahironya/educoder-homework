#include <iostream>
using namespace std;
int find_mid(int a, int b, int c){
    if (a>b) swap(a,b);
    if (b>c) swap(b,c);
    if (a>b) swap(a,b);
    return b;
}
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout<<find_mid(a, b, c);
}
