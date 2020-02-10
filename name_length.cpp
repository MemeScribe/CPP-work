#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "What is your name? ";
    string a;
    cin >> a;
    cout  << "Hello " << a << ", your name has " << a.length() << " letters." << endl;
    return 0;
}