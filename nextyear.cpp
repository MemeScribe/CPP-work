#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "What is your name? ";
    string a;
    int b;
    cin >> a;
    cout << "What is your age? ";
    cin >> b;
    cout << "Hello " << a  << ", next year you will be " << b+1 << endl;
    return 0;
}