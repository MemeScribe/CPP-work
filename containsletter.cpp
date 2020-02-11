#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    char b;
    bool c = false;
    cout << "Enter a word and a letter: ";
    cin >> a >> b;
    for(int i : a)
    {
        if(i == b)
        {
            c = true;
        }

    }
    if (c == true)
    {
        cout << b << " is in " << a << endl;
    }
    else
    {
        cout << b << " is not in " << a << endl;
    }
    
    return 0;
}