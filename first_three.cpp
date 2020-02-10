#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "What is your name? ";
    string a;
    cin >> a;
    cout  << "Your nickname is " << a.substr(0,3) << endl;
    return 0;
}