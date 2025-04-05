#include <iostream>
using namespace std;
int fun(int a,int b,int c) {
    int t;
    t = (a > b) ? ((b > c) ? b : ((a > c) ? c : a)): ((a > c) ? a : ((b > c) ? c : b));
    return t;
}
int main(){
    int a1,a2,a3,r;
    cin>>a1>>a2>>a3;
    r=fun(a1,a2,a3);
    cout<<r<<endl;
}
