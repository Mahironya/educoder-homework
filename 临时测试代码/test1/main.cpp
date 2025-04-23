

#include <iostream>
#include <cmath>
#define N 100
using namespace std;
void test(int *p, int *n){
    cout<<"*p = "<<*p<<endl;
    int num;
    *n = 0;
    while (cin >> num && num != 0){
        p[*n] = num;
        cout<<"*p = "<<*p<<endl;
        *n += 1;
    }
}
int main(){
    int array[N];
    int len;
    test(array, &len);
    cout<<"len = "<<len;
    return 0;
}

