#include <stdio.h>
#include<iostream>
#include <iomanip>
using namespace std;
#define N 40
void inputarr (int array[ ] , int n);
float average (int array[ ] , int n);
void outputarr (int array[ ] , int n);


int main()
{
    int score[N],n;
    float aver;
    //printf("Input n:");
    scanf("%d", &n);    //输入学生人数n
    inputarr (score,n);
    /*****调用average()函数*****/
    /********** Begin **********/
    aver = average(score, n);
   
    /********** End **********/

    /*****调用outputarr()函数*****/
    /********** Begin **********/
    outputarr(score, n);
  
    /********** End **********/
    printf("Average score is %f\n",aver);
    return 0;
}

void inputarr (int array[ ], int n)
{
    int i;
    for (i=0; i<n; i++)
    { scanf("%d", & array[i]);
    }
}
/*****定义float average(int array[ ] , int n)函数*****/
/********** Begin **********/
float average(int array[ ] , int n){
    float sum = 0;
    for (int i = 0; i < n; ++i){
        sum += array[i];
    }
    return sum/n;
}
/********** End **********/

/*****定义void outputarr (int array[ ] , int n)函数*****/
/********** Begin **********/
void outputarr (int array[ ] , int n){
    for (int i = 0; i<n; ++i){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
/********** End **********/

