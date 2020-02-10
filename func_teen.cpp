#include <iostream>
#include <string>
using namespace std;

void teen(int&a)
{
    if (a < 13 || a > 19)
    {
        cout << "They are not a teenager" << endl;
    }
    else
    {
        cout << "They are a teenager" << endl;
    }
}

int main()
{
    cout << "Enter an age: ";
    int a;
    cin >> a;
    teen(a);
    return 0;
}