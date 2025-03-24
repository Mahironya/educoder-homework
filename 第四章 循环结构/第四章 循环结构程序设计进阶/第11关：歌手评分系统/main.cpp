#include <iostream>
#include <climits>
#include <iomanip>
using namespace std;
int main(){
    float num_input, sum = 0;
    float max_score = INT_MIN;
    float min_score = INT_MAX;
    for (int i = 0; i < 7; ++i){
        cin >> num_input;
        if (num_input > max_score) max_score = num_input;
        if (num_input < min_score) min_score = num_input;
        sum += num_input;
    }
    cout <<fixed<<setprecision(2)<<"score="<< (sum - max_score - min_score) / 5 << endl;
}
