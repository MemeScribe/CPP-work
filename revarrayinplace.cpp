#include <iostream>
#include <string>
#include <array>
using namespace std;
template<size_t SIZE>

void rev(array<int, SIZE>& a)
{
    int j,tmp=0;
    for(int i=a.size() - 1; i>j; i--)
    {
        tmp=a[i];
        a[i]=a[j];
        a[j]=tmp;
        j++;
    }
}

int main()
{
    array<int, 5> a{6,9,4,2,0};
    rev(a);
    cout << "[";
    for(int i : a)
    {
        cout << i << " ";
    }
    cout << "]" << endl;
    return 0;
}