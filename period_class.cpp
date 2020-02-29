#include <iostream>
#include "period_class.h"
#include "time_class.h"

Period::Period(Time s, Time e)
{
    start.setTime(s.getHour(), s.getMinute());
    end.setTime(e.getHour(), e.getMinute());
}
Period::Period()
{
    start.setTime(0,0);
    end.setTime(0,0);
}
std::ostream& operator<< (std::ostream& out, Period& data) {
    out << data.start << " --> " << data.end;
    return out;
}