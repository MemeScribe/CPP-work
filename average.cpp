#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a,b,total = 0;
    cout << "How many numbers: ";
    cin >> a;
    for(int i=0; i<a; i++)
    {
        cin >> b;
        total+=b;
    }
    cout << "The average is " << total/a << endl;
    return 0;
}