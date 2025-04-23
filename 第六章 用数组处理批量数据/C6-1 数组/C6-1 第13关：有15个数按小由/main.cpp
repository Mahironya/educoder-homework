#include<iostream>
using namespace std;
#define N 15
int main()
{
    int i,x,mid,a[N]={4,9,14,16,17,19,28,33,42,51,64,75,84,91,100};
    scanf("%d",&x);
    /********** Begin **********/
    int left = 0;
    int right = 14;
    while (left <= right){
        mid = (left + right)/2 ;
        cout<<"查找区间下界，上界，中间点["<<left<<"，"<<right<<"，"<<mid<<"]"<<endl;
        if (a[mid] == x){
            i = mid;
            cout<<"查找成功，"<<x<<"的下标："<<i;
            return 0;
        }if (a[mid] < x){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    cout<<"查找区间下界，上界"<<"["<<left<<"，"<<right<<"]，"<<"查找失败";
    /********** End **********/
    return 0;
}
