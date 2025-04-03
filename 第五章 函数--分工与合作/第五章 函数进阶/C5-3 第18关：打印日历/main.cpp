#include <iostream>
#include <iomanip>
using namespace std;
bool isleapyear(int year){
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int get_month_days(int year, int month){
    if (month == 2) return isleapyear(year)? 29:28;
    if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
    return 31;
}

int get_month_first_day (int year, int month){ /*
                                                获取星期几
                                                1 2 3 4 5 6 0
                                                */
    int sum_days = 0;
    for (int i = 1979; i < year; ++i){
        sum_days += (isleapyear(i))?366:365;
    } //todo: 如果 year <= 1979 呢？
    for (int i = 1; i < month; ++i){
        sum_days += get_month_days(year, i);
    }
    sum_days += 1;// 这里获取第二个月第一天加到的天数
    return sum_days % 7;
}
void print_calendar (int year, int month){
    int first_day = get_month_first_day(year, month);
    int month_days = get_month_days(year, month);
    cout<<"  一  二  三  四  五  六  日"<<endl;
    if (first_day == 0){
        for (int i = 0; i <= 6; ++i){
            cout<<"    ";
        }
    }else{
        for (int i = 1; i < first_day; ++i){
            cout<<"    ";
        }
    }
    for (int i = 1; i <= month_days; ++i){
        
        cout<<setw(4)<<setfill(' ')<<i;
        if((i + first_day -1 ) % 7 == 0){
            cout<<endl;
        }
    }
}
int main(){
    int year, month;
    cin >> year >> month;
    print_calendar(year, month);
}
