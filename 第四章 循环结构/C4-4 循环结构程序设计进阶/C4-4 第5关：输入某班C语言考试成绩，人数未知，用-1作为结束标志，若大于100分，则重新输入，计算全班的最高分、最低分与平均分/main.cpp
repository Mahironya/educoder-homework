#include <iostream>
#include <climits>
#include <iomanip>
using namespace std;
int main(){
    float score_input = 0, max_score, min_score, sum = 0;
    int count = 0;
    max_score = INT_MIN;
    min_score = INT_MAX;
    do{
        cin >> score_input;
        if (score_input > 100 || score_input <0){
            continue;
        }
        ++count;
        sum += score_input;
        if (score_input > max_score) max_score = score_input;
        if (score_input < min_score) min_score = score_input;
    }while(score_input != -1);
    if (count <= 0){
        cout<<"输入了0个合法的分数"<<endl;
    }else{
        cout<<fixed<<setprecision(1);
        cout<<"全班一共有学生:"<<count<<endl;
        cout<<"全班平均分:"<<sum/count<<endl;
        cout<<"全班最高分:"<<max_score<<endl;
        cout<<"全班最低分:"<<min_score<<endl;
    }
}
