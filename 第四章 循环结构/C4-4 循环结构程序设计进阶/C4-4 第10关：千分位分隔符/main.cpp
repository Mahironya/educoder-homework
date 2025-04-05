// try without including string
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long num, digits = 0, temp_digit;
    cin >> num;
    long long temp = num;
    // calculate digits
    do {
        num /= 10;
        digits ++;
    } while (num != 0);
    if (digits == 3){
        cout<<temp;
        return 0;
    }
    int p = pow(10, digits - 1);
//    cout<<p;
    digits -= 1; //why?
    do {
//        cout<<"digit "<<digits<<endl;
        temp_digit = temp / p;
        temp = temp - temp_digit * p;
//        cout<<"temp digit "<<temp_digit<<endl;
        cout<<temp_digit;
        p /= 10;
        if (digits % 3 == 0 && digits != 0){
//            cout<<"placed ',' "<<digits<<endl;
            cout<<',';
        }
        digits--;
    } while (p > 0);
}
