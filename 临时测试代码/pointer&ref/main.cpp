#include <iostream>

#define LOG(x) cout<<x<<endl;

void Increment(int* value){
    (*value)++;
}
using namespace std;
int main(){
    int a = 5;
    int&ref = a;
    ref = 114514; //created a alias
    Increment(&ref);
    LOG(a);
    
    int c =1;
    int*ref2 = &c;
    ref2++;
    LOG(c);
    
}
