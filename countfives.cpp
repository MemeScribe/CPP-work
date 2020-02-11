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
        if(i == 5)
        {
            total++;
        }

    }
    cout << "The total number of 5's is : " << total << endl;
}

int main()
{
    array<int, 6> a{6,9,4,2,0,5};
    sum(a);
    return 0;
}