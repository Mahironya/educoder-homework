#include <iostream>
#include <iomanip>
using namespace std;
double sequence(double times){
    if (times == 1) return 1.0;
    return sequence(times - 1) * ((times - 1)/(2*times - 1));
}
int main(){
    double n, sum = 0;
    cin >> n;
    if (n == 1){
        cout<<1;
        return 0;
    }
    for (double i = 1; i <= n + 1; ++i){
        sum += sequence(i);
    }
    cout<<fixed<<setprecision(10)<<sum<<endl;
}

/*
 
 value                                      n
 1                                          1
 1/3                                        2
 (1 * 2) / 3 * 5                            3
 (1 * 2 * 3) / 3 * 5 * 7                    4
 (1 * 2 * 3 * 4) / 3 * 5 * 7 * 9            5
 
 f(n) = f(n-1) * (n-1)/(2n-1)
 
 */
