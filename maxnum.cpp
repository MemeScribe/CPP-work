#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    cout << max(max(a,b),c) << endl;
    return 0;
}