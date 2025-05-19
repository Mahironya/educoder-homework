#include <stdio.h>
#include<iostream>
using namespace std;
#define  M 13
int main()
{
    /********** Begin **********/
    int days[M] = {0,31,28,31,30,31,30,31,31,30,31,30,31};    //按人的习惯从1开始
    int year,month,day,sum=0;
    scanf("%d%d%d", &year,&month,&day);
    if (year%4==0 && year%100!=0 || year%400==0) days[2]++;
    for (int i = 1; i < month; ++i){
        sum += days[i];
    }
    sum += day;
    cout<<"这一天是这一年的第"<<sum<<"天";
    /********** End **********/
    return 0;
}
