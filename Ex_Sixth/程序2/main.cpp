/**
 * @file main.cpp
 * @author Reiky
 * @brief 
 **********************************************************
 * 2．编写一个有关日期（年、月、日）和时间（时、分、秒）的程序。
 * 该程序建立三个类，其中一个是日期的类Date、一个是时间的类Time，
 * 另一个是日期和时间的类TimeDate，
 * 它以前面两个类为基类的派生类。
 **********************************************************
 * @version 0.1
 * @date 2023-12-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;
class Date
{
        private:
                int year, month, day;
                friend class TimeDate;
};
class Time
{
        private:
                int hour, minute, second;
                friend class TimeDate;
};
class TimeDate : public Date, public Time
{
public:
    TimeDate(int y, int m, int d, int h, int mi, int s)
    {
        year = y;
        month = m;
        day = d;
        hour = h;
        minute = mi;
        second = s;
    }
    void show()
    {
        cout << "The date is " << year << "-" << month << "-" << day << endl;
        cout << "The time is " << hour << ":" << minute << ":" << second << endl;
    }
};
int main()
{
    TimeDate t(2020, 10, 6, 12, 30, 30);
    t.show();
    return 0;
}