#include <iostream>
#include <string>
#include "student_class.h"

Student::Student(std::string n, int m)
{
    name = n;
    mark = m;
}
Student::Student()
{
    name = "Joe";
    mark = 0;
}
