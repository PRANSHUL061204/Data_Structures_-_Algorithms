#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cout << "Enter a String: ";
    getline(cin, s); // allows spaces

    int capital = 0, lower = 0, special = 0;

    for (char c : s)
    {
        if (isupper(c))
            capital++;
        else if (islower(c))
            lower++;
        else if (strchr("!@#$%^&*()-_:';.,/", c))
            special++;
    }

    cout << "\nNo. of Capital Letters in String are: " << capital;
    cout << "\nNo. of Lower Case Letters in String are: " << lower;
    cout << "\nNo. of Special Characters in String are: " << special;

    return 0;
}