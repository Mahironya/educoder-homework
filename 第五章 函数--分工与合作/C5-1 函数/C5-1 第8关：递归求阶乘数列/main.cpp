#include<stdio.h>
#include<iostream>
using namespace std;
long long solve(long long n){
    /*********Begin*********/
    if (n == 1){
        return 1;
    }
    return n*solve(n-1);
    /*********End**********/
}
int main(void)
{
    long long n;
    scanf("%lld",&n);
    long long ans=0;
    for(long long i=1;i<=n;i++)
        ans+=solve(i);
    printf("%lld", ans);
    return 0;
}
