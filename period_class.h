#include "time_class.h"

class Period
{
    Time start;
    Time end;
    public:
        Period(Time s, Time e);
        Period();
        Time getStart(){return start;}
        Time getEnd(){return end;}
        bool overlaps(Period p2)
        {
            if(p2.getStart().isLater(start) && end.isLater(p2.getEnd()))
            {
                return true;
            }
            else if(start.isLater(p2.getStart()) && p2.getEnd().isLater(end))
            {
                return true;
            }
            else
            {
                return false;
            }    
        }
        friend std::ostream& operator<< (std::ostream& out, Period& data);
};
