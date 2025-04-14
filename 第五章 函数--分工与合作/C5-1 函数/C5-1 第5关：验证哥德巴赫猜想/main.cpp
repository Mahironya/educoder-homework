#include <iostream>
#include <cmath>
bool checkprime(int num);
using namespace std;
int main(){
    int num;
    cin >> num;
    for (int i = 1; i < num; i+= 2){
        if (checkprime(i) && checkprime(num - i)){
            cout<<num<<"="<<i<<"+"<<num - i<<endl;
        }
    }
    
    
    
    
    
    return 0;
}
bool checkprime(int num){
    if(num == 1) return 0;
    if(num == 2) return 1;
    if(num % 2 == 0) return 0;
    for (int i = 3; i <= sqrt(num); i+= 2){
        if (num % i == 0){
            return 0;
        }
    }
    return 1;
}
