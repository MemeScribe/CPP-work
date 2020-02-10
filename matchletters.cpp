#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,b;
    int count=0;
    cout << "Enter two strings: ";
    cin >> a >> b;
    for(int i=0; i<a.length(); i++)
    {
        if(a[i] == b[i])
        {
            count++;
        }
    }
    cout << "There are " << count << " matching letters" << endl;
    return 0;
}