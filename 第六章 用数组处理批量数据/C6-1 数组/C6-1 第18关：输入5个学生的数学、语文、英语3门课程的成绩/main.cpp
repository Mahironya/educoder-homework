#include <stdio.h>
#include <iostream>
using namespace std;
#define M  5
#define N  3

int main()
{
    /*********Begin*********/
    int stu_score[M][N];

    // 输入学生成绩
    for (int i = 0; i < M; ++i){
        for (int j = 0; j < N; ++j){  // 修正这里：j<N
            cin >> stu_score[i][j];
        }
    }

    cout << "每个学生的平均分:" << endl;
    for (int i = 0; i < M; ++i){
        double temp_sum = 0;
        for (int j = 0; j < N; ++j){  // 修正这里：j<N
            cout << stu_score[i][j] << "\t";
            temp_sum += stu_score[i][j];
        }
        printf("%.1f\n", temp_sum / N);  // 输出学生平均分
    }

    cout << "每门课的平均分:" << endl;
    for (int i = 0; i < N; ++i){
        double temp_course = 0;
        for (int j = 0; j < M; ++j){
            temp_course += stu_score[j][i];
        }
        printf("%.1f\t", temp_course / M);  // 输出课程平均分
    }
    /*********End**********/
    return 0;
}
