#include <stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
#define N 100
void printsequence(int sequence[], int size){
    for (int i = 0; i<= size - 1; ++i){
        cout<<sequence[i]<<" ";
    }
}
int main ()
{
    /********** Begin **********/
    int array[N], len;
    cin >> len;
    for (int i = 0; i < len; ++i){
        cin >> array[i];
    }
    for (int i = 1; i < len; ++i){
        for (int j = i; j > 0; --j){
            if (array [j] < array [j-1]){
                swap(array[j], array[j-1]);
                
            }
            
        }
        printsequence(array, len);
        cout<<endl;
    }


    /********** End **********/
    return 0;
}

