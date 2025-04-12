

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    /*
    5 4
    5 3
    5 2
    5 1
    4 3
    4 2
    4 1
    3 2
    3 1
    2 1
     */
    for (int i = 5; i >=2 ; --i){
        for (int j = i-1; j >= 1; --j){
            cout<<i<<" "<<j<<endl;
        }
    }
}

