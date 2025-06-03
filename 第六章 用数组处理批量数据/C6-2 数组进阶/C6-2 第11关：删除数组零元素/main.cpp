#include<stdio.h>
#include<iostream>
using namespace std;
#define N 100
int main()
{
    /*********Begin*********/
    int len, count = 0;
    cin >> len;
    int temp[len];
    for (int i = 0; i < len; ++i){
        cin >> temp[i];
    }
    for (int i = 0; i < len; ++i){
        if (temp[i] != 0){
            temp[count++] = temp[i];
        }
    }
    if (count == 0){
        cout<<"0";
        return 0;
    }
    cout << count << endl;
    for (int i = 0; i < count; ++i) {
        cout << temp[i] << " ";
    }
    cout << endl;
    
    /*********End**********/
    return 0;
}
