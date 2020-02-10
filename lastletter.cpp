#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "What is your name? ";
    string a;
    cin >> a;
    cout  << "The last letter in your name is " << a.back() << endl;
    return 0;
}