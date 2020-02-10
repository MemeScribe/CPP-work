#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a,b =0;
    cout << "Enter a number: ";
    cin >> a;
    for(int i=0; i<=a; i++)
    {
        b+=i;
    }
    cout << "The sum of numbers from 1 to " << a << " is " << b << endl;
    return 0;
}