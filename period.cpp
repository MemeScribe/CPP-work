#include <iostream>
#include <string>
#include "period_class.h"
#include "time_class.h"

int main()
{
    Period p1(Time(1,20), Time(2,0));
    Period p2(Time(0,0), Time(1,30));
    std::cout << p1.overlaps(p2) << "\n";
    std::cout << p1 << "\n" << p2 << "\n";
}