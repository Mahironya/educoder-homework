#include <stdio.h>
#include<iostream>
using namespace std;
#define M 3
#define N 4
void input(int (* a)[N],int m,int n);
void output(int (*b)[N],int m,int n);
void outputarr (int array[ ] , int n);
void fun(int x[][N],int *y,int m,int n ) ;
/********** Begin **********/
int main(){
    int store[M][N];
    int transform[12];
    input(store, M, N);
    output(store, M, N);
    fun(store, transform, M, N);
//    cout<<endl;
    outputarr(transform, 12);
    
}

/********** End **********/

void input(int (* a)[N],int m,int n){
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }
}

void output(int (*b)[N],int m,int n){
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j){
            cout << b[i][j] <<" ";
        }
        cout<<endl;
    }

}

void fun(int x[][N],int *y,int m,int n ){ //*y 表示一维数组
    int temp_count = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            *(y + temp_count) = x[j][i];
            temp_count ++;
        }
    }
}

void outputarr (int array[ ] , int n){
    for (int i = 0; i < n; ++i){
        cout << array[i] <<" ";
    }
}
