#include <iostream>
using namespace std;
int main(){
    // a pointer is just a address
    int var = 8;
    int* ptr = &var; //using "&" to get the memory address
    *ptr = 114514;
    cout<<var<<endl;
    char* buffer = new char[8];
    memset(buffer, 0, 8);
    char** ptr2 = &buffer;
    cout<<ptr2<<endl;
    cin.get();
}

