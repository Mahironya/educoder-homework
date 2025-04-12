#include <iostream>
using namespace std;

void combpoll(int n, int r){//r=3
    r = 3;
    for (int i = 1; i <= n; ++i){
        for (int j = i+1; j<=n; ++j){
            for (int k = j+1; k <= n; ++k){
                cout<<i<<" "<<j<<" "<<k<<endl;
            }
        }
    }
}
int main(){
    combpoll(5, 3);
}
