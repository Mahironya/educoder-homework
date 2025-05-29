#include <stdio.h>
#include<iostream>
#include <iomanip>
using namespace std;
#define M 5
#define N 3

void inputarr( int x[ ][N], int m, int n );
void printarr( int x[ ][N], int m, int n );
/********** Begin **********/
int main(){
    int score[M][N];
    inputarr(score, M, N);
    printarr(score, M, N);
    int tempsum[M] = {0};
    for (int i = 0; i < M; ++i){
        for (int j = 0; j < N; ++j){
            tempsum[i] += score[i][j];
        }
    }
    cout<<"每个学生的总分:\n";
    for (int x:tempsum){
        cout<<"   "<<x;
    }
    cout<<endl;
    double tempavg[N] = {0};
    for (int i = 0; i < N; ++i){
        int temp = 0;
        for (int j = 0; j < M; ++j){
            temp += score[j][i];
        }
        tempavg[i] = temp / 5.0;
    }
    cout<<"每门课的平均分:\n";
    for (double x:tempavg){
        cout<<fixed<<setprecision(2)<<"   "<<x;
    }
    
    return 0;
}
/********** End **********/

void inputarr( int x[ ][N], int m, int n ){
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j){
            cin >> x[i][j];
        }
    }
}

void printarr( int x[ ][N], int m, int n ){
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j){
            cout << x[i][j] <<" ";
        }
        cout<<endl;
    }
}
