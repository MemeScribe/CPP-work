#include <iostream>
#include <string>
#include "time_class.h"

Time::Time(int h, int m)
{
    hour = h;
    minute = m;
}
Time::Time(std::string s)
{
    hour = std::stoi(s.substr(0,2));
    minute = std::stoi(s.substr(2,2));
}
Time::Time()
{
    hour = 0;
    minute = 0;
}
std::ostream& operator<< (std::ostream& out, Time& data) {
    if(data.getHour() > 9)
    {
        out << data.getHour() << ":";
    }
    else
    {
        out << "0" << data.getHour() << ":";
    }
    if(data.getMinute() > 9)
    {
        out << data.getMinute();
    }
    else
    {
        out << "0" << data.getMinute();
    }
    return out;
}