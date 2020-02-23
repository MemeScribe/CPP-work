#include <iostream>
#include <string>
#include <exception>

int main()
{
    try
    {
        int* failure= new int[1000000000000];
    }
    catch(std::bad_alloc& e)
    {
        std::cout << "Uh oh, you made a fucky wucky, time to get in the forever box" << std::endl;
    }

    return 0;
}