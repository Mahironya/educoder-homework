#include <iostream>
#include <iomanip>
using namespace std;
double power(double m, double n){
    
    if (n == 0) return 1.0;
    if (n == 1) return m;
    return m * power(m, n-1);
    return 0;
}
int main(){
    double m, n;
    cin >> m >> n;
    if (n <= 0 ){
        cout<<"n<0,data error!"<<endl;
        return 0;
    }
    cout<<fixed<<setprecision(6)<<power(m, n);
}
