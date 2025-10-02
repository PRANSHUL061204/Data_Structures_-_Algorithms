#include <iostream>
#include <string>
#include<cstring>
using namespace std;

int main()
{
    string s;
    cout << "Enter a String: ";
    getline(cin, s); // allows spaces

    int digits = 0, spaces = 0, vowels = 0, consonants = 0;

    for (char c : s)
    {
        if (isdigit(c))
            digits++;
        else if (isspace(c))
            spaces++;
        else if (isalpha(c))
        {
            if (strchr ("aeiouAEIOU", c))
                vowels++;
            else
                consonants++;
        }
    }

    cout << "\nNo. of Digits in String are: " << digits;
    cout << "\nNo. of Spaces in String are: " << spaces;
    cout << "\nNo. of Vowels in String are: " << vowels;
    cout << "\nNo. of Consonants in String are: " << consonants;

    return 0;
}
