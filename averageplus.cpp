#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a,b,total,avg = 0;
    cout << "How many numbers: ";
    cin >> a;
    int list [a];
    for(int i=0; i<a; i++)
    {
        cin >> b;
        total+=b;
        list[i] = b;
    }
    avg = total/a;
    cout << "The above average numbers are " << endl;
    for(int j : list)
    {
        if(j > avg)
        {
            cout << j << endl;
        }
    }
    return 0;
}