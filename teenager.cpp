#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter an age: ";
    int a;
    cin >> a;
    if (a > 12 && a < 20)
    {  
        cout << a << " is a teenager" << endl;
    }
    else
    {
        cout << a << " is not a teenager" << endl;
    }
    return 0;
}