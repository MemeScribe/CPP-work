#include <iostream>
#include <string>

int main(int argc, char** argv)
{

    int count = 0;

    for (int i=1; i<argc; i++)
    {
        count += int(i);
    }
    std::cout << count << std::endl;
    return 0;
}