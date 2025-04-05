#include<stdio.h>
#include <iostream>
using namespace std;
double f1(double x) {
    return x*x;
}
double f2(double x,double y) {
    return x*y;
}
/********found********/
double  fun(int i,double x,double y) {
    if (i==1)
        /********found********/
        return f1(x);
    else
        /********found********/
        return f2(x,y);
}
int main() {
    double x1,x2,r;
    scanf("%lf%lf",&x1,&x2);
    r=fun(1,x1,x2);
    r+=fun(2, x1,x2);
    printf("%f",r);
}
