#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter a number and a string: ";
    int a;
    string b;
    cin >> a >> b;
    cout  << b.substr(0,a) << b.substr(a+1) << endl;
    return 0;
}