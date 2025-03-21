#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
bool check(int num){
    if (num <= 0) return false;
    if (num % 2 != 0) return false;
    return true;
}
int main(){
    int num;
    cin >> num;
    vector<int> storage(0);
    string helper = to_string(num);
    helper = string(helper.rbegin(), helper.rend());
    for (char i: helper){
        if (check(i - '0')){
            storage.push_back(i - '0');
        }
    }
//    sort(storage.begin(), storage.end());
    
    long long helper2 = storage.size();
    int sum = 0;
    for (int i:storage){
        sum += i*pow(10,helper2 - 1);
        --helper2;
    }
    cout<<"The result is: "<<sum;
}
/*
 67890
 68
 86
 
 9875432
 842
 248
 */
