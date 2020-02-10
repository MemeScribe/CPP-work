#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    int i;
    cout << "Enter a string: ";
    cin >> a;
    for(i=1; i<a.length(); i++)
    {
        cout << a[i-1] << a[i] << endl;
    }

    return 0;
}