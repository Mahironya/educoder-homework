#include <iostream>
#include <climits>
using namespace std;
int main(){
    int m, n, max = INT_MIN, input = 0, tempm, tempn;
    cout<<"Input m, n:";
    cin>>m>>n;
    int store[m][n];
    cout<<"Input "<<m<<"*"<<n<<" array:"<<endl;
    for (int i = 0; i<m; ++i){
        for (int j = 0; j<n; ++j){
            cin >> input;
            store[i][j] = input;
            if (input > max){
                tempm = i+1;
                tempn = j+1;
                max = input;
            }
        }
    }
    cout<<"max="<<max<<", row="<<tempm<<", col="<<tempn;
}
