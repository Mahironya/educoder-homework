//#include <iostream>
//using namespace std;
//int main(){
//    int num, sum = 0;
//    int count_positive = 0;
//    while (count_positive < 5){
//        cin >> num;
//        if ( num <= 0){
////            cout<<"no."<<endl;
//            continue;
//            
//        }
//        sum += num;
//        count_positive++;
////        cout<<"count= "<<count_positive<<endl;
//    }
//    cout<<"sum="<<sum;
//
//}

//解法2

#include <iostream>
using namespace std;

int main() {
    int sum = 0;    // 累加和
    int count = 0;  // 有效数字计数器
    int num;        // 用户输入
    
    do {
        cin >> num;       // 读取输入
        
        if (num <= 0) {    // 如果是负数或零
            continue;      // 跳过后续代码，直接进入下一轮循环
        }
        
        sum += num;        // 累加正整数
        count++;           // 有效计数+1
        
    } while (count < 5);  // 核心条件：必须读满5个正整数
    
    cout << "sum=" << sum << endl;
    return 0;
}
