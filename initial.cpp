#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "What is your name? ";
    string a;
    cin >> a;
    cout  << a << ", starts with the letter " << a[0] << endl;
    return 0;
}