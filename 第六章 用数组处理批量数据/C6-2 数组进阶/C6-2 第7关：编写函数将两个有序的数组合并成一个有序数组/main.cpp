#include<stdio.h>
#include<iostream>
using namespace std;
#define N 20
void inputarr (int *p, int n);
void outputarr (int *p,int n);
int MergeList(int a[], int n, int b[],int m,int c[]) ;
int main()
{

    int a[N]={ 0 }, b[N]={ 0 };
    int i,j,k,anum,bnum,c[N+N];
    scanf("%d",&anum);   //输入数组a元素个数
    inputarr(a,anum);    //输入数组a元素的值
    scanf("%d",&bnum);   //输入数组b元素个数
    inputarr(b,bnum);     //输入数组b元素的值
    MergeList(a, anum, b, bnum,c );
    //printf("合并后数组c中所有元素：\n");
    outputarr (c,anum+bnum);
    return 0;
}
/********** Begin **********/
void inputarr (int *p, int n){
    for (int i = 0; i < n; ++i){
        cin >> *(p+i);
    }
}

void outputarr (int *p, int n){
    for (int i = 0; i < n; ++i){
        cout << *(p + i) << " ";
    }
//    cout << "\n";
}

int MergeList(int a[], int n, int b[],int m,int c[]){
    for (int i = 0; i < n; ++i){
        c[i] = a[i];
    }
    int temp_count = 0;
    for (int j = 0; j < m; ++j){
        c[j + n] = b[temp_count];
        temp_count++;
    }
    for (int i = 0; i < m+n; ++i){
        for (int j = 0; j < m+n-i; ++j){
            if (c[j] > c[j+1]){
                swap(c[j], c[j+1]);
            }
        }
    }
    return 0;
}
/********** End *********/
