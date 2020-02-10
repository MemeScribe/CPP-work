#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;
    if (a > b)
    {  
        cout << a << " is the biggest" << endl;
    }
    else
    {
        cout << b << " is the biggest" << endl;
    }
    return 0;
}