#include <iostream>
using namespace std;

void calculate_jiecheng (){
    static int num = 1;
    static int temp = 1;
    temp = num * temp;
    cout<<num<<"! = "<<temp<<endl;
    num++;
}

int main(){
    int num_input;
    cin>> num_input;
    for (int i = 1; i <= num_input; ++i){
        calculate_jiecheng();
    }
}
