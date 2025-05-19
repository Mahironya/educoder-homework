#include<stdio.h>
#include<iostream>
using namespace std;
int main(void)
{
    /*********Begin*********/
    int store[10], max = -114514, label = 0;
    for (int i = 0; i < 10; ++i){
        cin >> store[i];
        if (store[i] > max){
            max = store[i];
            label = i;
        }
        
    }
    for (int i = label+1; i<10; ++i){
        store[i-1] = store[i];
    }
    for (int i = 0; i < 9; ++i){
        cout<<store[i]<<" ";
    }
        
    /*
     1 2 3 114 5 6 7 8 9 10
     1 2 3 5 6 7 8 9 10
     */
    /*********End**********/
    return 0;
}
