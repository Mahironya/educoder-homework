#include<stdio.h>
#include<iostream>
using namespace std;
#define N 20
void inputarr (int *p, int *n);
void outputarr (int *p,int n);
//void swap(int *a, int *b);
void swaparr(int *a, int n, int *b,int m);
int main()
{
    int i,n=0,m=0;
    int a[N],b[N];
    //printf("请输入数组a，以-1结束:\n");
    inputarr(a,&n);
    //printf("请输入数组b，以-1结束:\n");
    inputarr(b,&m);
    swaparr(a, n, b, m);
    //printf("数组a中所有元素：\n");
    outputarr (a,m);
    //printf("数组b中所有元素：\n");
     outputarr (b,n);
     return 0;

}

/********** Begin **********/
void inputarr (int *p, int *n){
    int i = 0, numinput = 0;
    while (true){
        cin >> numinput;
        if (numinput == -1){
            break;
        }
        *(p+i) = numinput;
        i++;
    }
    *n = i; // the length
}
void swaparr(int *a, int n, int *b,int m){
    /*
     IF
     a 6
     b 5
     
     a 5
     b 6
     */
    int temp[N];
    for (int i = 0; i < n; ++i){
        temp[i] = *(a+i);
    }
    for (int i = 0; i < m; ++i){
        *(a+i) = *(b+i);
    }
    for (int i = 0; i < n; ++i){
        *(b+i) = temp[i];
    }
}
void outputarr (int *p,int n){
    for (int i = 0; i < n; ++i){
        cout << *(p+i) <<" ";
    }
    cout<<"\n";
}
/********** End **********/

