#include<stdio.h>
#include<iostream>
using namespace std;
#define N 20
int main()
{

    int a[N]={ 0 }, b[N]={ 0 };
    int i,j,k,anum,bnum,c[N+N] = {0};
    scanf("%d",&anum);   //输入数组a元素个数
    for(i=0;i<anum;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&bnum);   //输入数组b元素个数
    for(i=0;i<bnum;i++)
    {
        scanf("%d",&b[i]);
    }
    /***** 在数组a和b都有数据时比较两个数组 *****/
    /********** Begin *********/
    i = j = k = 0;
    // c = {0,0,0,0,...,0,0}
    while (i < anum && j < bnum){
        if (a[i] <= b[j]){
            c[k] = a[i];
            k++;
            i++;

        }else{
            c[k] = b[j];
            j++;
            k++;

        }
    }
    
    /********** End **********/
    /***** 如果数组a还有数据 *****/
    /********** Begin *********/
    
    // a的指针还是为i
    while (anum - i > 0){
        c[k] = a[i];
        k++;
        i++;

    }
    
    /********** End **********/

    /***** 如果数组b还有数据 *****/
    /********** Begin *********/
    while (bnum - j > 0){
        c[k] = b[j];
        k++;
        j++;

    }
    
    /********** End **********/
    /***** 输出数组c *****/
    /********** Begin *********/
    for (int i = 0; i < anum + bnum ; i++){
        cout<< c[i] <<" ";
    }
    
    /********** End **********/
    return 0;
}
