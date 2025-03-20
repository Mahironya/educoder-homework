#include<iostream>
#include<string>

using namespace std;
int main(){
    int temp, num, calc,digit;
    string helper;
    cin>>num;
    helper = to_string(num);
    digit = helper.length();
    calc = helper[0] -'0';
    for(int i = 1; i < digit; i++){
//        cout<<helper[i]<<endl;
        calc *= helper[i] - '0';
    }
    cout<<calc<<endl;
}
