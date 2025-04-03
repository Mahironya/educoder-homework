#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double output_log_base2(double num){
    return log(num)/log(2.0);
}
int main(){
    double height, thickness;
    cin >> height >> thickness;
    height *= 1e6;
    cout<<"需要折叠"<<ceil(output_log_base2(height/thickness))<<"次"<<endl;
}
