/*
 1 2 6 24 120
 */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double x, sum = 1;
    int times;
    cin >> x >> times;
//    int count1 = 1;// 因为数据集中 times 都大于 15
    int count2 = 1;
    double fenmu = 1;
    for (int i = 2; i <= times; ++i){
        sum += pow(-1, i)*pow(x, i-1)/fenmu;
        ++count2;
        fenmu *= count2;
    }
    cout<<fixed<<setprecision(6);
    cout<<"x="<<x<<"     "<<"y="<<sum<<endl;
}
