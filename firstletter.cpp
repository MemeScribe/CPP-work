#include <iostream>
#include <string>
using namespace std;


int main()
{
    string a;
    char b;
    cout << "Enter a word and a letter: ";
    cin >> a >> b;
    if(a[0] == b)
    {
        cout << b << " is the first letter of " << a << endl;
    }
    else
    {
        cout << b << " is not the first letter of " << a << endl;
    }
    return 0;
}