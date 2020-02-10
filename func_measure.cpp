#include <iostream>
#include <string>
using namespace std;

void convert(double&a)
{
    cout << a << " inches is " << a*2.54 << " cm" << endl;
}

int main()
{
    cout << "Enter a number in fahrenheit: ";
    double a;
    cin >> a;
    convert(a);
    return 0;
}