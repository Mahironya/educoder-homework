#include<stdio.h>
#include<iostream>
using namespace std;
int main(void)
{
    /*********Begin*********/
    int len, find;
//    bool oops = false;
    cin >> len;
    int store[len];
    
    for (int i = 0; i < len; ++i){
        cin >> store[i];
        
    }
    cin>> find;
    for (int i = 0; i < len; ++i){
        if (store[i] == find){
            cout<<i+1;
            return 0;
        }
    
        
    }
    cout<<-1;
    /*********End**********/
    return 0;
}
