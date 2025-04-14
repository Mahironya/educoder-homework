#include<stdio.h>
#include<iostream>
using namespace std;
void solve(int n){
    int temp=n%10;
    /*********Begin*********/
    if (n == 0){
        return;
    }
    solve(n/10);
    /*********End**********/
    if(n)
        printf(" %d", temp);
    else
        printf("%d", temp);
}
int main(void)
{
    int n;
    scanf("%d",&n);
    solve(n);
    return 0;
}
