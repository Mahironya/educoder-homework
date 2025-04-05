#include <iostream>
#include <string>
using namespace std;
void to_reverse(string input_str){
    if (input_str == "") return;
    to_reverse(input_str.substr(1));
    cout<<input_str[0];
}
int main(){
    string input_str;
    cin >> input_str;
    to_reverse(input_str);
}
