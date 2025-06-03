#include<stdio.h>
#include<iostream>
using namespace std;
#define N 100
int main()
{
    /*********Begin*********/
    int store[N];
    int len, max = -1, label = 0;
    cin >> len;
    for (int i = 0; i < len; ++i){
        int x = 0;
        cin >> x;
        store[i] = x;
        if (x > max){
            label = i;
            max = x;
        }
    }
    for (int i = label; i < len; ++i){
        store[i] = store[i+1];
    }
    for (int i = 0; i < len - 1; ++i){
        cout<<store[i]<<" ";
    }
    /*********End**********/
    return 0;
}
