#include <iostream>
using namespace std;
int findgcd(int a, int b){
    if (b == 0){
        return a;
    }
    return findgcd(b, a%b);
}
int main(){
    cout<<"Input two positive integers,a,b:"<<endl;
    int a,b;
    cin >> a >>b;
    if(a<= 0 ||b<=0){
        cout<<"Input error!";
        return 0;
    }
    cout<<"MaxCommonFactor = "<<findgcd(a, b);
}
