#include <iostream>
#include <string> //test
using namespace std;
void CalcBase(int num, int r){
    char trans[6] = {'A','B','C','D','E','F'};
    if (num == 0){
        return;
    }
    int temp = num % r;
    CalcBase(num/r, r); //stacks
    if (r==16){
        if (temp >= 10 && temp <= 15){
            cout<<trans[temp - 10];
        }else{
            cout<<temp;
        }
    }else{
        cout<<temp;
    }
    
    
}
int main(){
    int n, r;
    cout<<"Input n,r(r=2,8,16):"<<endl;
    cin >> n >> r;
    CalcBase(n, r);
}
