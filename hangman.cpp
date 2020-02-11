#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,str;
    char b;
    char guess[a.length()];
    cout << "Enter a word and a guess: ";
    cin >> a;
    for(int i=0;i<a.length();i++)
    {
        guess[i]='_';
    }
    str = guess;
    while(str != a)
    {
        cin >> b;
        for(int i=0; i<a.length(); i++)
        {
            if(a[i] == b)
            {
                guess[i] = b;
                str = guess;
            }
        }
        cout << str << endl;
    }
    cout << "correct" << endl;
    return 0;
}