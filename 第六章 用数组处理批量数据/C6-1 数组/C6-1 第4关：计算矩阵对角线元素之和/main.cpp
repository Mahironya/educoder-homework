#include <iostream>
using namespace std;
int main(){
    int input_num = 0;
//    int middle = 0;
//    int matrix_input[5][5] = {0};
    int sum = 0;
    //input_num;
    for (int i = 0; i <5; ++i){
        for (int j = 0; j<5; ++j){
            
            cin >> input_num;
//            matrix_input[i][j] = input_num;
            /*
             (0,0) (1,1) (2,2) (3,3) (4,4)
             (0,5) (1,4) ()
             */
            if (i == j){
//                cout<<"current i, j"<<i<<" "<<j<<endl;
                sum += input_num;
            }
//            if (i == 2 && j == 2) {
//                middle = input_num;
//            }
        }
        
    }
//    sum -= middle;
    cout<<"sum="<<sum;
    
}
