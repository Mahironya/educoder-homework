#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool check(int num){
    string helper = to_string(num);
    string rev = string(helper.rbegin(), helper.rend());
    if (helper == rev) return true;
    return false;
}
int main(){
    int start, end;
//    cin >> start >> end;
    start = 200;
    end = 3000;
    for (int i = start; i <= end; ++i){
        if (check(i)) cout<<i<<endl;
    }
}
