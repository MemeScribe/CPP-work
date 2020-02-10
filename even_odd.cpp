#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int a;
    cin >> a;
    if (a % 2 == 0)
    {  
        cout << a << " is even " << endl;
    }
    else
    {
        cout << a << " is odd " << endl;
    }
    return 0;
}