#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    int i,b;
    cout << "Enter a number and a string: ";
    cin >> b >> a;
    for(i=1; i<b; i++)
    {
        cout << a << endl;
    }

    return 0;
}