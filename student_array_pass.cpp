#include <iostream>
#include <string>
#include "student_class.h"

int main()
{
    Student john("John", 50);
    Student abby("Abby", 40);
    Student dylan("Dylan", 20);
    Student carl("Carl", 70);
    Student maeve("Maeve", 70);
    Student chris("Chris", 44);
    Student james("James", 55);
    Student anne("Anne", 63);

    Student group[8] = {john, abby, dylan, carl, maeve, chris, james, anne};
    int count = 0;

    for (Student i : group)
    {
        if(i.getMark() > 39)
        {
            count++;
        }
    }
    double rate = count;
    std::cout << count << " students passed out of 8" << std::endl;
    std::cout << "That is a pass rate of " << double(rate/8) * 100 << "%" << std::endl;
    return 0;
}