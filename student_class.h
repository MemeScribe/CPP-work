#include <string>

class Student
{
    std::string name;
    int mark;
    public:
        Student(std::string n, int m);
        Student();
        std::string getName() {return name;}
        int getMark() {return mark;}

};
