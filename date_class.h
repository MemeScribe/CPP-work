#include <string>

class Date
{
    int day, month, year;
    public:
        Date(int d, int m, int y);
        Date();
        Date(std::string s);
        int getDay(){return day;}
        int getMonth(){return month;}
        int getYear(){return year;}
        bool BeforeOrAfter(Date d) 
        {
            if(year > d.getYear())
            {
                return true;
            }
            else
            {
                if(month > d.getMonth())
                {
                return true;
                }
                else
                {
                    if(day >= d.getDay())
                    {
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        friend std::ostream& operator<< (std::ostream& out, Date& data);
    
};