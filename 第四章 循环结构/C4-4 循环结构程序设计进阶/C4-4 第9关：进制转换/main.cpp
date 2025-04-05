#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string hex = "";
    string trans[6] = {"A","B","C","D","E","F"}; //store letters
    int num, temp = 0;
    cin >> num;
    do {
        temp = num % 16;
        if (temp >= 10 && temp <= 15){
            hex += trans[temp - 10];
        }else{
            hex += to_string(temp);
        }
        num /= 16;
    } while (num > 0);
    reverse(hex.begin(), hex.end());
    
    cout << hex <<endl;
}
