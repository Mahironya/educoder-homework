#include <iostream>
#include <string>

using namespace std;

string to_chinese(int num){
    string characters[5] = {"一", "二","三","四","五"};
    return characters[num - 1];
}

int main() {
    int number;
    cin >> number;
    
    string s = to_string(number);
    
    if (s.length() > 5) {
        cout << number << "是五位数" << endl;
    } else {
        cout << number << "是" << to_chinese(s.length()) << "位数" << endl;
    }
    
    return 0;
}
