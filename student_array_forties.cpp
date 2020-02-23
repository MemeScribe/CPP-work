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

    for (Student i : group)
    {
        if(i.getMark() > 39 && i.getMark() < 50)
        {
            std::cout << i.getMark() << " (" << i.getName() << ")" << std::endl;
        }
    }
    return 0;
}