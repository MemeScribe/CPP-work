#include <iostream>
#include <string>
#include "date_class.h"

int main()
{
    char input[11] = {"0 0 0"};
    std::cin.getline(input,sizeof(input));
    Date best(input);
    do
    {
        Date bepis(input);
        if(bepis.BeforeOrAfter(best))
        {
            best = bepis;
        }
        std::cin.getline(input,sizeof(input));

    }while(input[0] != '\0');
    std::cout << best << std::endl;
    return 0;
}