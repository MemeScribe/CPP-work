#include <iostream>
#include <string>
#include "point_class.h"

Point::Point(int xin, int yin)
{
    x = xin;
    y = yin;
};
Point::Point()
{
    x = 0;
    y = 0;
}
std::ostream& operator<< (std::ostream& out, Point& data) {
    out << data.getX() << ', ' << data.getY();
    return out;
}