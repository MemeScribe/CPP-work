#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 1;
    int a;
    cout << "Enter a number: ";
    cin >> a;
    while (i <= a)
    {
        cout << i << endl;
        i++;
    }
    if (a == 69 || a == 420 || a == 42069)
    {
        cout << "Nice." << endl;
    }
    return 0;
}