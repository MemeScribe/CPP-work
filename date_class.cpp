#include <iostream>
#include <string>
#include "date_class.h"

Date::Date(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
};
Date::Date()
{
    day = 1;
    month = 1;
    year = 2000;
}
Date::Date(std::string s)
{
    int i = 0,j = 0;
    for (int k=0; k < s.length(); k++)
    {
        if(s[k] == ' ' && i == 0)
        {    
            i = k;
        }
        else if(s[k] == ' ' && i != 0)
        {
            j = k;
        }
    }
    day = std::stoi(s.substr(0,i));
    month = std::stoi(s.substr(i+1, j-i-1));
    year = std::stoi(s.substr(j+1,4));
}
std::ostream& operator<< (std::ostream& out, Date& data) {
    out << data.getDay() << '/' << data.getMonth() << '/' << data.getYear();
    return out;
}