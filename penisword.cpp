#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    int i,b = 0;
    cout << "Enter a string: ";
    cin >> a;
    cout << a[0] << endl  << a.substr(1, a.length()-2) << endl << a[a.length()-1] << endl;


    return 0;
}