#include <iostream>
#include <string>
using namespace std;

void convert(double&a)
{
    cout << "In Celcius would be: " << a*(9/5) - 32 << endl;
}

int main()
{
    cout << "Enter a number in fahrenheit: ";
    double a;
    cin >> a;
    convert(a);
    return 0;
}