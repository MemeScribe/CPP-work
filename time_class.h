#ifndef TIME_CLASS_H
#define TIME_CLASS_H
#include <string>

class Time
{
    int hour, minute;
    public:
        Time(int h, int m);
        Time(std::string s);
        Time();
        int getHour(){return hour;}
        int getMinute(){return minute;}
        void setTime(int h, int m){hour = h; minute = m;}
        bool isLater(Time t2)
        {
            return hour * 60 + minute <= t2.getHour() * 60 + t2.getMinute();
        }

        friend std::ostream& operator<< (std::ostream& out, Time& data);
};
#endif