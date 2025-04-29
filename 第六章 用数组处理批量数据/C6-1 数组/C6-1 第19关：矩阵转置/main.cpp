/*编写程序，实现矩阵转置。*/
#include<stdio.h>
#include<iostream>
using namespace std;
#define N 20
int main()
{
    int a[N][N],b[N][N];
    int i, j,n;
    cin>>n;
/*-----代码编写区域开始--------*/
 /*
  1 2 3
  4 5 6
  7 8 9
  to
  
  1 4 7
  2 5 8
  3 6 9
  
  */
    //input a
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            b[j][i] = a[i][j];
        }
    }
    
    
    for (int i = 0; i < n; ++i){
        for (int j = 0 ; j < n; ++j){
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
/*-----代码编写区域结束--------*/

    return 0;
}
