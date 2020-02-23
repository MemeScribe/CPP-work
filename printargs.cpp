#include <iostream>
#include <string>

int main(int argc, char** argv)
{

    int total, count = 0;

    for (int i=1; i<argc; i++)
    {
        std::cout << argv[i] << std::endl;
    }
    return 0;
}