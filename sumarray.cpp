#include <iostream>
#include <string>
#include <array>
using namespace std;
template<size_t SIZE>

void sum(array<int, SIZE>& a)
{
    int total = 0;
    for(int i : a)
    {
        total+=i;
    }
    cout << "The sum of all numbers is: " << total << endl;
}

int main()
{
    array<int, 5> a{6,9,4,2,0};
    sum(a);
    return 0;
}