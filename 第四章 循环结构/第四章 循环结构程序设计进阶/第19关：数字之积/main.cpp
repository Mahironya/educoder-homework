#include <iostream>
using namespace std;
int main(){
    int num, product = 1, temp;
    cin >> num;
    do{
        temp = num % 10;
        product *= temp;
        num /= 10;
    }while (num>0);
    cout<<product<<endl;
}
    
