#include <iostream>
#include <string>
using namespace std;

void twice(int&a)
{
    cout << "Times two is: " << a*2 << endl;
}

int main()
{
    cout << "Enter an number: ";
    int a;
    cin >> a;
    twice(a);
    return 0;
}