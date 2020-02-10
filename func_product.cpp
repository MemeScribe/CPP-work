#include <iostream>
#include <string>
using namespace std;

void square(int&a, int&b)
{
    cout << a << " times " << b << " is " << a*b << endl;
}

int main()
{
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;
    square(a,b);
    return 0;
}