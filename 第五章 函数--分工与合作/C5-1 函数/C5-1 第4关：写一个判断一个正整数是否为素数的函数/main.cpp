#include <stdio.h>
#include<iostream>
#include <cmath>
using namespace std;
void  prime(int m);                         //prime()函数声明
int main()
{
    int a[10],i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        prime(a[i]);  //调用无返回值函数，判断a[i]是否是素数
    }
    return 0;
}
/*****定义void  prime(int m) *****/
/********** Begin **********/
void prime(int m){
    if (m == 1){
        cout<<m<<" 不是素数."<<endl;
        
    }else if (m == 2){
        cout<<m<<" 是素数."<<endl;
    }else if (m % 2 == 0){
        cout<<m<<" 不是素数."<<endl;
    }else{
        bool check = true;
        for (int i = 3; i <= sqrt(m); i+=2 ){
            if (m % i == 0){
                check = false;
                break;
            }
        }
        cout<<m<<(check?" 是素数.":" 不是素数.")<<endl;
    }
    
    
}
    
/********** End **********/

