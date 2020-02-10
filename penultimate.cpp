#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a,b = 0;
    cout << "Enter numbers: ";
    while (a != -1)
    {
        b++;
        cin >> a;
    }
    cout  << b << " numbers were entered." << endl;

    return 0;
}