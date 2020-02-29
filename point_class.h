#include <string>

class Point
{
    int x, y;
    public:
        Point(int xin, int yin);
        Point();
        int getX(){return x;}
        int getY(){return y;}
        std::string midpoint(Point p1, Point p2)
        {
            int x = (p1.getX() + p2.getX() / 2);
            int y = (p1.getY() + p2.getY() / 2);
            return std::to_string(x) + ", " + std::to_string(y);
        }

        friend std::ostream& operator<< (std::ostream& out, Point& data);
};