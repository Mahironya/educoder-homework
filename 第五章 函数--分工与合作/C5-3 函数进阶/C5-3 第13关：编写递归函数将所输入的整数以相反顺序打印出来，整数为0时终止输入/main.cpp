#include <iostream>
using namespace std;

void reversePrint() {
    int num;
    cin >> num;
    if (num == 0) {
        return;
    }
    reversePrint();
    cout << num << " ";
}

int main() {
    reversePrint();
    return 0;
}
