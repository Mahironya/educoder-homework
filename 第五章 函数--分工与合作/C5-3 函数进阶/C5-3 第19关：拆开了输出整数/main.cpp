#include <iostream>
using namespace std;
void outnum_order(int num){
    if (num == 0){
        return;
    }
    outnum_order(num/10);
    cout<< num%10<<endl; //切换这两行代码顺序即可调整输出顺序
}
int main(){
    int num;
    cin >> num;
    outnum_order(num);
}
