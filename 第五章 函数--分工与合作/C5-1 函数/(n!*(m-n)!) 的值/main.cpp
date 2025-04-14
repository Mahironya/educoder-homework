#include <stdio.h>
#include<iostream>
#include <iomanip>
using namespace std;
/*****定义fact()函数*****/
/********** Begin **********/
int fact(int n){
    if (n == 0){
        return 1;
    }
    return n * fact(n-1);
}
/********** End **********/
/*****定义fun()函数*****/
/********** Begin **********/
double fun(int m, int n){//这里有更高效的做法 m>n
    return fact(m) / (fact(n) * fact(m - n));
}
/********** End **********/
/*****定义main()函数*****/
/********** Begin **********/
int main(){
    int m , n;
    do{
        cin >> m >> n;
    }while (m<n);
    cout<<fixed<<setprecision(6)<<fun(m,n);
}
/********** End **********/
