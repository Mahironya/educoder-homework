#include <iostream>
using namespace std;
int main(){
    int a,b,c, count = 0;
    /*
     big: 33
     medium:  50
     small: 200
     */
    for (a = 0; a<=33; ++a){
        for (b = 0; b<= 50; ++b){
            for (c = 0; c<=200; ++c){
                if (a*3 + b*2 + c * 0.5 == 100&&a+b+c == 100){
                    cout<<a<<","<<b<<","<<c<<endl;
                    count++;
                }
            }
        }
    }
    cout<<"count="<<count;
}
