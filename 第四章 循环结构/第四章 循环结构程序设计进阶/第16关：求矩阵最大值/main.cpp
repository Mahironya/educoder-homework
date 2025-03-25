#include <iostream>
#include <climits>
using namespace std;
int main(){
    int row, column, num, record_row = 0, record_column = 0;
    int max_num = INT_MIN;

    
    cin >> row >> column;
    for (int i = 1; i <= row; ++i){
        for (int j = 1; j <= column; ++j){
            cin >> num;
            if (num > max_num){
                max_num = num;
                record_row = i;
                record_column = j;
            }
        }
    }
    cout <<"该"<<row<<"*"<<column<<"矩阵的最大元素信息如下："<<endl;
    cout<<"max="<<max_num<<endl;
    cout<<"row="<<record_row<<endl;
    cout<<"column="<<record_column;
    
}
