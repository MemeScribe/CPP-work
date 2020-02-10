#include <iostream>
#include <string>
using namespace std;

void square(int&a)
{
    cout << a << " squared is: " << a*a << endl;
}

int main()
{
    cout << "Enter an number: ";
    int a;
    cin >> a;
    square(a);
    return 0;
}