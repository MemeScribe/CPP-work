#include <iostream>
#include <string>
using namespace std;

bool contains(const string &b, const char &i)
{
    for(int j : b)
    {
        if(j == i)
        {
            return true;
            break;
        }
    }
    return false;
}

int main()
{
    string a,b;
    bool c = true;
    cout << "Enter a word and a guess: ";
    cin >> a >> b;
    
    if(a.length() != b.length())
    {
        cout << "Keep guessing" << endl;
        return 0;
    }
    for(int i : a)
    {
        if(not contains(b,i))
        {
            c = false;
        }
    }
    if(c == false)
    {
        cout << "Keep guessing" << endl;
    }
    else
    {
        cout << "you guessed all the letters!" << endl;
    }
    return 0;
}