#include <iostream>
using namespace std;

void combpoll(int n, int r){//r=3
    //终止条件需要改一下
    if (n<r){
        for (int i = r; i <=1; --i){
            cout<<i<<" ";
        }
        return;
    }
    //不用数组解决
    
        /*
         5 2 1
         为什么停止？因为
         */
    //确定了n
    for (int i = n-1; i >=2; --i){
        for (int j = i-1; j >= 1; --j){
            cout<<n<<" "<<i<<" "<<j<<" "<<endl;
//            cout<<endl;
        }
    }
    
    combpoll(n-1, r);
}
int main(){
    combpoll(5, 3);
}
