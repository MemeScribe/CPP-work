#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int a;
    cin >> a;
    if (a >= 0)
    {  
        cout << "The absolute value is: " << a << endl;
    }
    else
    {
        cout << "The absolute value is: " << a * -1 << endl;
    }
    return 0;
}