#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    int i,b;
    cout << "Enter a string: ";
    cin >> a;
    for(i=1; i<a.length(); i++)
    {
        if (a.substr(i-1,2) == "hi")
        {
            b++;
        }
        cout << b << endl;
    }

    return 0;
}