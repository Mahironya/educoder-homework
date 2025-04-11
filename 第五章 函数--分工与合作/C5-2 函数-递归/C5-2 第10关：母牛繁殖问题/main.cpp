#include <iostream>
using namespace std;
int myFunc(int years){
    if (years == 1) return 1;
    if (years == 2) return 1;
    if (years == 3) return 1;
    return myFunc(years - 1)+myFunc(years-3);
}

int main(){
    int years;
    cin >> years;
    cout<<myFunc(years);
}
