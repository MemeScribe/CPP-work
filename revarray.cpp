#include <iostream>
#include <string>
#include <array>
using namespace std;
template<size_t SIZE>

void rev(array<int, SIZE>& a)
{
    int total = 0;
    for(int i=a.size() - 1; i>=0; i--)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    array<int, 5> a{6,9,4,2,0};
    rev(a);
    cout << endl;
    return 0;
}