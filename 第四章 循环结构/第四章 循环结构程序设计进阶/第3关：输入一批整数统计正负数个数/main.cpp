#include <iostream>
using namespace std;
int main(){
    int num = 5;
    int countpos = 0, countneg = 0;
    do{
        cin >> num;
        if (num > 0) countpos++;
        if (num < 0) countneg++;
    }while(num != 0);
    cout<<"正数个数为"<<countpos<<"\n"<<"负数个数为"<<countneg;
}
