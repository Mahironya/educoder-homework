#include<stdio.h>
#include<iostream>
using namespace std;
#define N 10
int main()
{
    int i,x,t,a[10]={63,72,24,91,35,12,49,107,57,84};
    scanf("%d",&x);

    for(int i = 0; i < 10; ++i){
        if (a[i] == x){
            cout<<"查找成功，"<<x<<"的下标："<<i;
            return 0;
        }
    }
    cout<<"查找失败";
    return 0;
}
