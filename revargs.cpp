#include <iostream>
#include <string>

int main(int argc, char** argv)
{

    int total, count = 0;

    for (int i=argc-1; i>0; i--)
    {
        std::cout << argv[i] << std::endl;
    }
    return 0;
}