#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cout << "Enter a string: ";
    cin >> a;
    cout << a[a.length()-1] << a.substr(1, a.length()-2) << a[0] << endl;


    return 0;
}