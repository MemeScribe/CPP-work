#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number in inches: ";
    cin >> a;
    cout << a << "Inches is: "<< a * 2.54 << "cm" << endl;
    return 0;
}