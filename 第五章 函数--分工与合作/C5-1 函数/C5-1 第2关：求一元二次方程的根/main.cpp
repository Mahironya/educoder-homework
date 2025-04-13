#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void deltagreater0(double a, double b, double c){
    cout<<"x1="<<(-b + pow(pow(b, 2) - 4*a*c, 0.5))/(2*a)<<endl;
    cout<<"x2="<<(-b - pow(pow(b, 2) - 4*a*c, 0.5))/(2*a);
}
void deltais0(double a, double b, double c){
    cout<<"x1=x2="<<-b/(2*a);
}
void deltalessthan0(double a, double b, double c){
    cout<<"x1="<<(-b)/(2*a)<<"+"<<(pow(-(pow(b, 2) - 4*a*c), 0.5))/(2*a)<<"i"<<endl;
    cout<<"x2="<<(-b)/(2*a)<<"-"<<(pow(-(pow(b, 2) - 4*a*c), 0.5))/(2*a)<<"i";
}


int main(){
    cout<<fixed<<setprecision(5);
    double a, b, c, delta;
    cin >> a >> b >> c;
    delta = pow(b, 2) - 4*a*c;
    if (delta > 0){
        deltagreater0(a, b, c);
    }else if (delta == 0){
        deltais0(a, b, c);
    }else{
        deltalessthan0(a, b, c);
    }
}
