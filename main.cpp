#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    char ch;
    cout << "Enter a Character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Character is Lowercase" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Character is Uppercase" << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "Character is Numerical" << endl;
    }
    else
    {
        cout << "Character is not a letter or number" << endl;
    }

    return 0;
}
