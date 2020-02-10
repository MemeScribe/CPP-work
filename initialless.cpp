#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "What is your name? ";
    string a;
    cin >> a;
    cout  << "Initialless, your name is " << a.substr(1,a.length() - 1) << endl;
    return 0;
}