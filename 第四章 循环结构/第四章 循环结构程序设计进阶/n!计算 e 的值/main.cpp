#include <iostream>
#include <iomanip>
using namespace std;
double jiecheng(int num){
    double sum = 1;
    if (num == 0 || num == 1) return 1;
    for (double i = 1; i <= num; ++i){
        sum *= i;
    }
    return sum;
}
int main(){
//    cout<<jiecheng(5)<<endl;
    double eps, sum = 0;
    cin>>eps;
    double count = 0;
    do {
        sum += 1 / jiecheng(count);
        ++ count;
    } while ((1/jiecheng(count) > eps));
    cout<<"i="<<count + 1<<endl;
    cout<<fixed<<setprecision(6)<<"e="<<sum<<endl;
}
