#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    int size;
    cin >> size;
    //test
//    cout<<setw(2*size - 1)<<setfill(' ')<<'*'<<endl;
    for (int i = size; i > 0; --i){
        for (int j = size - i; j > 0; --j){
            cout<<' ';
        }
        cout<<string(2*i - 1, '*')<<endl;
    }
    
//    cout<<string(2*size - 1, '*')<<endl;
    for (int i = 2; i <= size ; ++i){
        for (int j = size - i; j > 0; --j){
            cout<<' ';
        }
        cout<<string(2*i - 1, '*')<<endl;
    }
}
