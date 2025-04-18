#include <iostream>
using namespace std;
int comb(int m, int n){
    if (m == 0 || m == n){
        return 1;
    }
    return comb(m, n-1) + comb(m-1, n-1);
}

int main(){
    for (int i = 0; i<10; ++i){
        for (int j = 0; j<= i; ++j){
            cout<<comb(j, i);
            if (j<i) cout<<" ";
        }
        cout<<endl;
    }
}
